#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

// int gcd(ll x, ll y)
// {
//   return y == 0 ? x : gcd(y, x % y);
// }

int main()
{
  int n, m = 0;
  cin >> n;
  vector<int> a(n, 0), agp(n, 0), agr(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (i == 0)
    {
      agp[i] = a[i];
    }
    else
    {
      agp[i] = __gcd(agp[i - 1], a[i]);
    }
    // cout << agp[i] << endl;
  }

  for (int i = n - 1; i >= 0; i--)
  {
    if (i == n - 1)
    {
      agr[i] = a[i];
    }
    else
    {
      agr[i] = __gcd(agr[i + 1], a[i]);
    }
    // cout << agr[i] << endl;
  }

  for (int i = -1; i < n; i++)
  {
    if (i == -1)
    {
      m = agr[1];
    }
    else if (i == n - 1)
    {
      m = max(m, agp[n - 2]);
    }
    else
    {
      m = max(m, __gcd(agp[i], agr[i + 2]));
    }

    // cout << gcd(agp[i], agr[i + 2]) << endl;
  }
  cout << m << endl;

  return 0;
}