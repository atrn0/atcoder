#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> w;
  REP(i, n)
  {
    int cw;
    cin >> cw;
    w.push_back(cw);
  }

  int csum = 0, sum = 0, mind;
  REP(i, n)
  {
    sum += w[i];
  }

  mind = sum;

  REP(i, n)
  {
    csum += w[i];
    mind = min(mind, abs(2 * csum - sum));
  }

  cout << mind << endl;

  return 0;
}