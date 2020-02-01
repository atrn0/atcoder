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
  int n, k, y;
  cin >> n >> k;

  vector<int> px, nx;
  for (int i = 0; i < n; i++)
  {
    cin >> y;
    if (y < 0)
    {
      nx.push_back(abs(y));
    }
    else
    {
      px.push_back(y);
    }
  }

  int mini = 100000000, pxs = px.size(), nxs = nx.size();

  for (int i = max(k - pxs, 0); i < min(min(pxs, k), nxs); i++)
  {
    cout << mini << endl;
    mini = min(2 * min(nx[nxs - i - 1], px[k - i]) + max(nx[nxs - i - 1], px[k - i]), mini);
  }
  cout << mini << endl;

  return 0;
}