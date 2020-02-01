"""scraping and create environment that set of testcodes.
Usage:
    parsewithatcoderproblems.py -h|--help
    parsewithatcoderproblems.py [-p <path>] [-c <level>...]
Options:
    -h, --help                  出す
    -p [path]                   パス
    [-c <level>...]             abc or arc or agc. if not setting, all.
"""

"""
なんかしらんけどOptionsで
-c <level>...
-c level...
-c <level>
-c level
いずれの書式で指定してもそんなオプションねぇとばかりに実行できず、
-cについてなにも書かないとなぜか実行されるの謎すぎるし
[-c <level>...]
だと実行できるの更に謎（しかも<>つきで-cのキーになるわけではない）
なので無理やり'<level>'としているがなんかアレ
"""

import requests
from bs4 import BeautifulSoup
import re
import os
import sys
from docopt import docopt

argments = None
uri = ""

def main():
    # とりあえずテスト
    global argments
    global uri
    argments = docopt(__doc__, version="0.0.1 beta")
    print(argments)
    # uriが存在するか確認
    if argments['-p'] is None:
        uri = os.getcwd()
    elif os.path.exists(argments['-p']) is False:
        print("a directory of \"{}\" is no found. im tired. byebye".format(argments['-p']))
        sys.exit()
    else:
        uri = argments['-p']

    # TODO: configparserで設定読み込む 設定っつってもlatestcontestくらいなんだけど現状
    # テキストファイルじゃアレなので

    # それぞれ最新のやつを調べる
    course = ["abc", "arc", "agc"]
    if argments['-c']:
        # abc, arc, agc以外のやつが入ってたら削除 めんどくさいので論理積で
        course = set(course) & set(argments['<level>'])
        if len(course)==0:
            print("<level> can have only 'abc', 'arc' or 'ogc', non-support uppercase.")
            sys.exit()
    # TODO: setにしたので順番がアレなんだけどどうしようか。このままでいいとは思うけど

    for c in course:
        # TODO: 構造体とかほかになんかなかったのか。。。外部jsonとかでもいいけど。。
        courselist = {
            "abc": ["5", "AtCoder Beginner Contest"], "arc": ["4", "AtCoder Regular Contest"],
            "agc": ["1", "AtCoder Grand Contest"]
        }
        courseurl = "http://atcoder.jp/contest/archive?categories="+courselist[c][0]+"&mode=button"
        r = requests.get(courseurl)
        soup = BeautifulSoup(r.content, 'lxml')
        s = soup.find("a", text=re.compile(courselist[c][1]))
        latest = s.string.split()[-1]
        print("{}の最新: {}".format(courselist[c][1], int(latest)))
        with open(c+"_latest.txt", "w+") as file:
            if len(file.read())==0 or int(file.read())<latest:
                file.write(latest)
                if os.path.exists(uri+"/"+c.upper()) is False:
                    os.mkdir(uri+"/"+c.upper())
                createfolder(c, uri+"/"+c.upper(), latest)

def createfolder(level, path, latest):
    subfolders = ["testcase", "src"]
    for x in range(1, int(latest)+1):
        numbering = path+"/"+str(x).zfill(3)
        if not os.path.exists(numbering):
            os.mkdir(numbering)
        else:
            # TODO: testcaseフォルダはあるけど中身のテストケースのテキストファイルがないときもここで終了するのでちゃんと中身の存在確認を行う
            print(path+"/"+numbering+" is already exists.")
        for s in subfolders:
            if not os.path.exists(numbering+"/"+s):
                os.mkdir(numbering+"/"+s)
                if s=="testcase":
                    createtestcase(x, numbering, s, level)
                elif s=="src":
                    pass # とくにやることなかったわ

def createtestcase(count, path, foldername, course):
    problem = course+str(count).zfill(3)
    baseurl = "https://"+problem+".contest.atcoder.jp"
    problemsurl = baseurl+"/assignments"
    # 問題一覧ページから直接リンクを得る
    problemsreq = requests.get(problemsurl)
    problemsset = []
    if problemsreq.status_code == requests.codes.ok:
        problemsoup = BeautifulSoup(problemsreq.content, 'lxml')
        problemlinks = problemsoup.find_all("a", class_="linkwrapper")
        for p in problemlinks:
            target = baseurl+p.get("href")
            if target not in problemsset:
                problemsset.append(target)
        if len(problemsset)==0:
            print("なんかおかしい")
            exit()
    # TODO: p二回出とるやんけ分かりにくいわ
    for idx, p in enumerate(problemsset):
        print(p)
        r = requests.get(p)
        if r.status_code == requests.codes.ok:
            soup = BeautifulSoup(r.content, 'lxml')
            parts = soup.find_all("div", {"class":"part"})
            for p in parts:
                # 入力例って書いてあるh3がほしい
                if p.find("h3", text=re.compile("入力例")) or p.find("h3", text=re.compile("Sample Input")):
                    # その中のpreの中身がテストケース
                    testcase = p.find("pre")
                    if testcase.string:
                        source = testcase.string.rstrip().lstrip()
                        print(source)
                        with open(path+"/"+foldername+"/"+"abcdefghijklmnopqrstuvwxyz"[idx]+".txt", "w") as f:
                            f.write(source)
                        break   #最初の一個だけでいい。全部欲しいときはbreakとればいいんじゃないかな

if __name__=='__main__':
    main()
