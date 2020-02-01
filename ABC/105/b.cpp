#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int n;
  cin >> n;

  while (n >= 0)
  {
    if (n % 4 == 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
    n -= 7;
  }

  cout << "No" << endl;

  return 0;
}