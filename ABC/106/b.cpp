#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

int main()
{
  int n, a;
  cin >> n;

  if (n < 105)
  {
    a = 0;
  }
  else if (n < 135)
  {
    a = 1;
  }
  else if (n < 165)
  {
    a = 2;
  }
  else if (n < 189)
  {
    a = 3;
  }
  else if (n < 195)
  {
    a = 4;
  }
  else
  {
    a = 5;
  }

  cout << a << endl;

  return 0;
}