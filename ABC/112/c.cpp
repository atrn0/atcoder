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
  int n;
  ll x, y, h, z = 0;

  cin >> n;
  vector<vector<ll>> v(n, vector<ll>(3));

  for (int i = 0; i < n; i++)
  {
    cin >> x >> y >> h;
    v[i][0] = x;
    v[i][1] = y;
    v[i][2] = h;
  }

  ll oh;

  bool b;

  for (int cx = 0; cx <= 100; cx++)
  {
    for (int cy = 0; cy <= 100; cy++)
    {
      b = false;
      h = v[0][2] + abs(v[0][0] - cx) + abs(v[0][1] - cy);
      for (vector<ll> d : v)
      {
          if (0 != max(h - abs(d[0] - cx) - abs(d[1] - cy), z)-d[2] && b)
          {
            b = false;
            break;
          }
          b = true;
      }
      if (b)
      {
        cout << cx << ' ' << cy << ' ' << h << endl;
        return 0;
      }
    }
  }

  return 0;
}