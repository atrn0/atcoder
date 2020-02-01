#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  vector<int> l(n + 2, 0), d;

  int j = 0;
  REP(i, n)
  {
    if ((j % 2 == 0 && s[i] == '1') || (j % 2 != 0 && s[i] == '0'))
    {
      j++;
    }
    l[j]++;
  }

  int m = 0;
  for (int i = 1; i < n + 1; i += 2)
  {
    if (m <)
  }
  return 0;
}