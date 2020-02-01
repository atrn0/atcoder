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
  int a, b, ans;
  cin >> a >> b;

  if (a == b)
  {
    ans = 2 * a;
  }
  else
  {
    ans = 2 * max(a, b) - 1;
  }

  cout << ans << endl;

  return 0;
}

// ...###..