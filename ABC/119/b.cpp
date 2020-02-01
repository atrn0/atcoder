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

int main()
{
  int n;
  cin >> n;
  ll jpy = 0;
  double btc = 0, sum, x;
  string u;

  for (int i = 0; i < n; i++)
  {
    cin >> x >> u;

    if (u == "JPY")
    {
      jpy += x;
    }
    else
    {
      btc += x;
    }
  }

  sum = jpy + 380000 * btc;
  cout << fixed << sum << endl;

  return 0;
}