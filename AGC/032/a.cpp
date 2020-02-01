#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> b(n);
  REP(i, n)
  {
    cin >> b[i];
  }

  vector<int> ans(n);
  int j, m = n;
  REP(i, n)
  {
    j = m;
    while (true)
    {
      // cout << j << endl;

      if (j == 0)
      {
        cout << -1 << endl;
        return 0;
      }
      if (b[j - 1] == j)
      {
        b.erase(b.begin() + j - 1);
        m--;
        ans[i] = j;
        break;
      }
      j--;
    }
  }

  REP(i, n)
  {
    cout << ans[n - i - 1] << endl;
  }

  return 0;
}