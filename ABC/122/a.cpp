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
  char b, ans;

  cin >> b;

  if (b == 'A')
  {
    ans = 'T';
  }
  else if (b == 'T')
  {
    ans = 'A';
  }
  else if (b == 'G')
  {
    ans = 'C';
  }
  else
  {
    ans = 'G';
  }

  cout << ans << endl;

  return 0;
}
