#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n, x;
  cin >> n >> x;
  
  map<int, vector<int>> mp;
  for(int i=0;i<n;i++){
    int y;
    cin >> y;
    
    mp[y].push_back(i+1);
  }
  
  for(auto [k, v]: mp) {
    // cout << k << endl;
    if(2 * k == x and v.size() >= 2) {
      cout << v[0] << ' ' << v[1] << endl;
      return 0;
    }
    else if(2 * k != x and mp.count(x - k)) {
      cout << v[0] << ' ' << mp[x - k][0] << endl;
      return 0;
    }
  }
  
  cout << "IMPOSSIBLE\n";

  return 0;
}

