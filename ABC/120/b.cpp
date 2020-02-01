#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int gcd(ll x, ll y)
{
  return y == 0 ? x : gcd(y, x % y);
}

int main()
{
  int a, b, k;
  cin >> a >> b >> k;

  int g = gcd(a, b);

  // cout << g << endl;

  for (int i = g; i > 0; i--)
  {
    if (g % i == 0)
      k--;
    if (k == 0)
    {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}