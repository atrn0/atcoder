#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int m, n;
  cin >> m >> n;

  cout << m - (m / n) * (n - 1) << endl;

  return 0;
}