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
  sort(begin(ret), end(ret));
  return ret;
}

int main()
{
  ll n;
  cin >> n;

  ll s = 0, c = 0, d;

  vector<ll> l = enum_div(n);
  REP(i, l.size() - 2)
  {
    d = n - s - n / l[i + 1];
    if (d >= l[i])
      c += n / l[i] - 1;
    s += d;
  }

  cout << c << endl;

  return 0;
}