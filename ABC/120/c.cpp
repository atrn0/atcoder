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
  int r = 0, b = 0;
  string s;

  cin >> s;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '0')
    {
      r++;
    }
    else
    {
      b++;
    }
  }

  cout << 2 * min(r, b) << endl;

  return 0;
}