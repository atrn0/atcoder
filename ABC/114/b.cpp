#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <numeric>
#include <cstdlib>

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

int main()
{
  string s;
  int n = 800, d;

  cin >> s;

  for (int i = 0; i < s.size() - 2; i++)
  {
    d = abs(753 - stoi(s.substr(i, 3)));
    n = min(n, d);
  }

  cout << n << endl;

  return 0;
}