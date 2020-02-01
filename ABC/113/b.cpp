#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
#include <numeric>
#include <ios> // std::left, std::right

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

bool cmp(const vector<ll> &x, vector<ll> &y)
{
  return x[1] == y[1] ? x[2] < y[2] : x[1] < y[1];
}

int main()
{
  int n, t, a, x, l;
  cin >> n;
  vector<double> h(n);
  double min = 100000;

  cin >> t >> a;

  for (int i = 0; i<n; i++)
  {
    cin >> x;
    if (min > abs(t-x*0.006-a))
    {
      min = fabs(t-x*0.006-a);
      l = i+1;
    }
  }

  cout << l << endl;

  return 0;
}