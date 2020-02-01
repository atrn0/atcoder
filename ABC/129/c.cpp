#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)

using namespace std;

ll fib(ll n, vector<ll> &table)
{
  if(n<0) {
    return 1;
  }
  if (table[n]>0){
    return table[n];
  } 

  for (ll i = 2; i <= n; ++i)
  {
    table[i] = table[i - 1] + table[i - 2];
  }
  return table[n];
}

int main()
{
  ll n, m;
  cin >> n >> m;
  vector<ll> t(n + 1);
  t[0] = t[1] = 1;
  if(m==0){
    cout << fib(n, t) << endl;
    return 0;}

  vector<ll> a(m);
  for(ll i=0;i<m;i++){
    cin >> a[i];
  }

  ll res = fib(a[0]-1, t) * fib(n-a[m-1]-1, t)%1000000007LL;
  // cout << res << endl;
  for(ll i=1; i<m;i++){
    res *= fib(a[i]-a[i-1]-2, t)%1000000007LL;
    res %= 1000000007LL;
  }

  cout << res%1000000007LL << endl;
  return 0;
}