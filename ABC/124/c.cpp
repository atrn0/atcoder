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
  cin >> s;

  int n = s.size(), ans = 0;

  for (int i = 0; i < s.size(); i++)
  {
    if (i % 2 == 0 && s[i] == '0')
    {
      ans++;
    }
    else if (i % 2 == 1 && s[i] == '1')
    {
      ans++;
    }
  }

  cout << min(n - ans, ans) << endl;

  return 0;
}

// ...###..