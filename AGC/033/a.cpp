#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int t = 0;
vector<vector<int>> newinvade;
int h, w, c = 0;

void change(int i, int j)
{
  if (hw[i][j] == '.')
  {
    t++;
    hw[i][j] = '#';
    newinvade.push_back({i, j});
  }
}

void invade(int i, int j)
{
  change((i == 0 ? 0 : i - 1), j);
  change(i, (j == 0 ? 0 : j - 1));
  change(i, (j == w - 1 ? w - 1 : j + 1));
  change((i == h - 1 ? h - 1 : i + 1), j);
}

int main()
{
  cin >> h >> w;
  vector<string> hw(h);

  REP(i, h)
  {
    cin >> hw[i];
  }

  while (t < w * h)
  {
    for (vector<int> v : newinvade)
    {
      invade(v[0], v[1]);
    }
    c++;
  }

  cout << c - 1 << endl;

  return 0;
}