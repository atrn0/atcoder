#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  vector<int> v(n - 1);
  int a = 0;

  REP(i, n - 1)
  {
    if (s[i] == '(')
      a++;
    else
      a--;

    v.push_back(a);
  }

  sort(v.begin(), v.end(), greater<int>());

  int ans = 0;
  REP(i, k)
  {
    ans += v[i];
  }

  cout << ans << endl;

  return 0;
}