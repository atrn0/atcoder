#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

bool judge(string s)
{
  if (s[0] != 'A')
    return false;

  if (count(s.begin() + 2, s.end() - 1, 'C') != 1)
    return false;

  for (char c : s)
  {
    if (c != 'A' && c != 'C' && isupper(c))
      return false;
  }

  return true;
}

int main()
{
  string s;
  cin >> s;

  cout << (judge(s) ? "AC" : "WA") << endl;

  return 0;
}