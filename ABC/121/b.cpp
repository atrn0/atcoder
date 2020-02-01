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
  int n, m, c, ans=0;

  cin >> n >> m >> c;
  vector<int> b(m), a(m);

  for (int j = 0; j < m; j++)
  {
    cin >> b[j];
  }

  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      cin >> a[j];
    }

    if(inner_product(a.begin(), a.end(), b.begin(), 0)+c>0){
      ans++;
    }

  }

  cout << ans << endl;

  return 0;
}