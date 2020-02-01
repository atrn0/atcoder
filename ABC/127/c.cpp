#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int minr = n, maxl = 0;
  REP(i, m)
  {
    int l, r;
    cin >> l >> r;

    minr = min(r, minr);
    maxl = max(l, maxl);
  }

  if (minr - maxl + 1 > 0)
  {
    cout << minr - maxl + 1 << endl;
  }
  else
  {
    cout << 0 << endl;
  }
  return 0;
}