#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

using ll = long long;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("citystate.in", "r", stdin);
  freopen("citystate.out", "w", stdout);
  
  int n;
  cin >> n;
  
  map<pair<string, string>, int> mp;
  
  ll counter = 0;
  
  while(n--){
    string a, b;
    cin >> a >> b;
    
    a = a.substr(0, 2);
    if(a == b) continue;
    
    if(mp.count({b,a})) counter += mp[{b, a}];
    mp[{a,b}]++;
  }
  
  // for(auto [k, v]: mp) cout << k.first << ' ' << k.second << ' ' << v << endl;
  
  cout << counter << endl;

  return 0;
}

