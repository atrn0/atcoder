#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

int main()
{
  string s;
  int m = 0, c = 0;

  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'A' || s[i] == 'T' || s[i] == 'G' || s[i] == 'C')
    {
      c++;
    }
    else
    {
      c = 0;
    }
      m = max(c, m);
  }

  cout << m << endl;

  return 0;
}
