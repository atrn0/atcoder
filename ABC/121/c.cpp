#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <numeric>
#include <tuple>

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

int main()
{
  ll n, m, a, b;
  cin >> n >> m;

  vector<vector<ll>> ab(n, vector<ll>(2));
  for (ll i = 0; i < n; i++)
  {
    cin >> a >> b;
    ab[i] = {a, b};
  }

  sort(ab.begin(), ab.end(), [](const vector<ll> x, const vector<ll> y) { return x[0] < y[0]; });

  ll i = 0, sum = 0;
  while (m > 0)
  {
    m -= ab[i][1];
    sum += ab[i][0] * ab[i][1];
    i++;
  }
  i--;
  m += ab[i][1];
  sum -= ab[i][0] * ab[i][1];

  cout << sum + m * ab[i][0] << endl;

  return 0;
}