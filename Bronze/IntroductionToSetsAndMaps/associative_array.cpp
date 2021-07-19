#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

using ll = long long;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int q;
  cin >> q;
  
  map<ll,ll> mp;
  
  while(q--){
    int op;
    cin >> op;
    
    if(!op){
      ll a, b;
      cin >> a >> b;
      mp[a] = b;
    }
    else{
      ll a;
      cin >> a;
      
      cout << mp[a] << endl;
    }
  }

  return 0;
}

