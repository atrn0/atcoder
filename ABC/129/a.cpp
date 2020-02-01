#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main() {
  int p, q, r;
  cin >> p >> q >> r;
  int m = max(p, max(q, r));

  cout << p + q + r - m << endl;

  return 0;
}