#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

std::vector<ll> enum_div(ll n) //nの約数を列挙
{
  std::vector<ll> ret;
  for (ll i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      ret.push_back(i);
      if (i * i != n)
      {
        ret.push_back(n / i);
      }
    }
  }
  return ret;
}

int main()
{
  ll n;
  cin >> n;

  ll m, sum = 0;
  vector<ll> divs = enum_div(n);

  for (ll a : divs)
  {
    // cout << a << endl;
    m = a - 1;
    if (m > 0 && n / m == n % m)
    {
      sum += m;
    }
  }

  cout << sum << endl;

  return 0;
}