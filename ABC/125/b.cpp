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

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int n, s = 0;
  cin >> n;
  vector<int> v(n, 0), c(n, 0);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
    if (v[i] > c[i])
    {
      s += v[i] - c[i];
    }
  }
  cout << s << endl;

  return 0;
}