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
  int a, b, t;
  cin >> a >> b >> t;
  cout << (t / a) * b << endl;

  return 0;
}