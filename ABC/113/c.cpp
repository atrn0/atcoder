#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
#include <numeric>
#include <ios> // std::left, std::right

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

bool cmp(const vector<ll> &x, vector<ll> &y)
{
  return x[1] == y[1] ? x[2] < y[2] : x[1] < y[1];
}

int main()
{
  ll n, m, p, y;
  cin >> n >> m;
  vector<vector<ll>> l(m);

  for (ll i = 0; i < m; i++)
  {
    cin >> p >> y;
    l[i] = {i, p, y};
  }

  sort(l.begin(), l.end(), cmp);

  vector<stringstream> ids(m);

  ll c = 0, np = 0;

  for (ll i = 0; i < m; i++)
  {
    c++;
    if (np != l[i][1])
    {
      np = l[i][1];
      c = 1;
    }
    ids[l[i][0]] << setw(6) << setfill('0') << l[i][1] << setw(6) << setfill('0') << c;
  }

  for (int i = 0; i < m; i++)
  {
    cout << ids[i].str() << endl;
  }

  return 0;
}