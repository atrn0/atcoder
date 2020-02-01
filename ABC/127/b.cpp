#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int r, d, x;
  cin >> r >> d >> x;

  REP(i, 10)
  {
    x = r * x - d;
    cout << x << endl;
  }

  return 0;
}