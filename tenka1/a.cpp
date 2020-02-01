#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
  int A, B, C;

  cin >> A >> B >> C;

  if ((A - C) * (C - B) >= 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}