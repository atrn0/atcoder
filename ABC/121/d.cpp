#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  ll a, b, i = 0;
  cin >> a >> b;
  a--;
  ll ans = 0;

  while (a + b > 0)
  {
    // cout << a << ' ' << b << endl;
    if ((b / 2 - a / 2) % 2 == 0)
    {
      ans += pow(2, i);
    }
    a /= 2;
    b /= 2;
    i++;
  }

  cout << ans << endl;

  return 0;
}