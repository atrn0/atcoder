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
  int n, q, l, r;
  string s;
  cin >> n >> q >> s;
  vector<int> t(n, 0);

  for (int i =0;i<n-1;i++){
    if(s[i]=='A' && s[i+1]=='C'){
      t[i+1]=t[i]+1;
    } else {
      t[i+1]=t[i];
    }
  }

  for (int i = 0; i < q; i++)
  {
    cin >> l >> r;
    cout << t[r-1]-t[l-1] << endl;
  }

  return 0;
}