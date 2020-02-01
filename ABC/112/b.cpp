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

int main()
{
  int n, t, T, c, min = 10000;

  cin >> n >> T;

  for (int i = 0; i < n; i++)
  {
    cin >> c >> t;

    if (t<=T && min > c)
    {
      min = c;
    }
  }

  if (min == 10000)
  {
    cout << "TLE" << endl;
  } else {
    cout << min << endl;
  }

  return 0;
}