#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

ll gcd(ll x, ll y)
{
  return y == 0 ? x : gcd(y, x % y);
}

ll lcm(ll x, ll y)
{
  return x * y / gcd(x, y);
}

int main()
{
  ll n;
  cin >> n;

  vector<ll> a(n);
  REP(i, n)
  {
    cin >> a[i];
  }

  // 6x-1 3y-1 4z-1 = A
  // 6x 3y 4z = A-1
  // Aは最小公倍数-1

  ll A = a[0];
  REP(i, n)
  {
    A = lcm(A, a[i]);
  }
  A--;

  cout << A << endl;

  ll f = 0;
  REP(i, n)
  {
    f += A % a[i];
  }

  cout << f << endl;

  return 0;
}