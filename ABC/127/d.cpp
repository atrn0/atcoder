#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define ALL(v) (v).begin(), (v).end()

using namespace std;

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b){
  return b.second < a.second;
}

int main()
{
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  REP(i, n)
  {
    cin >> a[i];
  }

  vector<pair<ll, ll>> bc(m);
  ll b, c;
  REP(i, m){
    cin >> b >> c;
    bc[i]=make_pair(b, c);
  }
  // cout << "a" << endl;

  sort(a.begin(), a.end());
  sort(bc.begin(), bc.end(), cmp);
  // for (pair<ll, ll> p:bc){
  //   cout << p.second << endl;
  // }

  ll f = 0;

  REP(i, m) {
    ll tmpf = f;
    if(a[f]>bc[i].second)
      break;
    REP(j, bc[i].first){
      if(a[tmpf+j]>=bc[i].second)break;
      a[tmpf+j]=bc[i].second;
      f++;
    }
  }

  cout << accumulate(a.begin(), a.end(), 0LL) << endl;

  return 0;
}