#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <numeric>

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

int gcd(ll x, ll y)
{
  return y == 0 ? x : gcd(y, x % y);
}

int main()
{
  int n;
  ll a, b = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    b = gcd(a, b);
    if (b == 1)
      break;
  }

  cout << b << endl;

  return 0;
}