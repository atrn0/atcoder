#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int n, v;
  cin >> n;
  vector<int> o(10e5, 0), e(10e5, 0);

  REP(i, n)
  {
    cin >> v;
    if (i % 2 == 0)
    {
      e[v]++;
    }
    else
    {
      o[v]++;
    }
  }

  int o1 = 0, o2 = 0, e1 = 0, e2 = 0;
  REP(i, 10e5)
  {
    if (o[o1] < o[i])
    {
      o1 = i;
    }
    if (e[e1] < e[i])
    {
      e1 = i;
    }
  }

  if (o1 == e1)
  {
    REP(i, 10e5)
    {
      if (o[o2] < o[i] && i != o1)
      {
        o2 = i;
      }
      if (e[e2] < e[i] && i != e1)
      {
        e2 = i;
      }
    }
    cout << min(n - o[o1] - e[e2], n - o[o2] - e[e1]) << endl;
  }
  else
  {
    cout << n - o[o1] - e[e1] << endl;
  }
  return 0;
}