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
  int n, m;
  cin >> n >> m;
  vector<int> x(n + 1), y(m + 1);

  cin >> x[0] >> y[0];

  for (int i = 0; i < n; i++)
  {
    cin >> x[i + 1];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> y[i + 1];
  }

  if (*max_element(x.begin(), x.end()) < *min_element(y.begin(), y.end()))
  {
    cout << "No War" << endl;
  }
  else
  {
    cout << "War" << endl;
  }

  return 0;
}