#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int r, g, b, n;
  cin >> r >> g >> b >> n;

  int c = 0;

  REP(i, (n / r) + 1)
  {
    REP(j, (n / g) + 1)
    {
      if ((n - r * i - g * j) % b == 0 && n - r * i - g * j >= 0)
      {
        c++;
      }
    }
  }

  cout << c << endl;

  return 0;
}