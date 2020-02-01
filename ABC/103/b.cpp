#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  int l = s.size();

  for (int i = 0; i < l; i++)
  {
    if (s == t.substr(i, l - i) + t.substr(0, i))
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}