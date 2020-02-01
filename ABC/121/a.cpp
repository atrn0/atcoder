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
  int H, W, h, w;
  cin >> H >> W >> h >> w;

  cout << H*W-h*W-w*H+h*w << endl;

  return 0;
}