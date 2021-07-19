#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

using ll = long long;
const ll oo = 1e18;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  
  vector<int> v(n);
  for(auto &x: v) cin >> x;
  
  ll best = oo;
  
  for(int mask = 0; mask < (1 << n); mask++){
    ll sum1 = 0, sum0 = 0;
    
    for(int i=0;i<n;i++)
      if(mask & (1 << i)) sum1 += v[i];
      else sum0 += v[i];
    
    best = min(best, abs(sum1 - sum0));
  }
    
  cout << best << endl;

  return 0;
}

