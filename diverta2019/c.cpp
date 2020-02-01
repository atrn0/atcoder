#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int n;
  cin >> n;

  int ab = 0, a = 0, b = 0, d = 0;
  string s;

  REP(i, n)
  {
    cin >> s;
    REP(j, s.size() - 1)
    {
      if (s[j] == 'A' && s[j + 1] == 'B')
      {
        ab++;
      }
    }
    if (s[0] == 'B')
    {
      b++;
      if (s[s.size() - 1] == 'A')
      {
        d++;
      }
    }

    if (s[s.size() - 1] == 'A')
    {
      a++;
    }
  }

  if (d > 1 && a == d && b == d)
  {
    ab--;
  }

  cout << ab + min(a, b) << endl;

  return 0;
}