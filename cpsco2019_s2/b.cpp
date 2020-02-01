#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int n, sum = 0, mult = 1;
  cin >> n;

  char c;
  int a;

  REP(i, n)
  {
    cin >> c >> a;
    if (c == '+')
    {
      sum += a;
    }
    else if (c == '*' && a > 1)
    {
      mult *= a;
    }
  }

  cout << sum * mult << endl;

  return 0;
}