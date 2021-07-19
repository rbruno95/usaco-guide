#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

using ll = long long;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, q;
  cin >> n >> q;
  
  vector<ll> v(n);
  for(auto &x: v) cin >> x;
  
  v.insert(v.begin(), 0);
  partial_sum(v.begin(), v.end(), v.begin());
  
  while(q--){
    int a, b;
    cin >> a >> b;
    cout << v[b] - v[a] << endl;
  }

  return 0;
}

