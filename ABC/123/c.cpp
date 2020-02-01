#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
  long n;
  vector<long> k(5);
  cin >> n;
  for (int i = 0; i < 5; i++)
  {
    cin >> k[i];
  }

  cout << fixed << setprecision(0) << ceil((double)n / *min_element(k.begin(), k.end())) + 4 << endl;

  return 0;
}