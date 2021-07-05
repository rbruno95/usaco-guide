#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9+10;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("mowing.in", "r", stdin);
  freopen("mowing.out", "w", stdout);
  
  int t;
  cin >> t;
  
  int x = 0, y = 0;
 
  map<pair<int,int>, int> mp;
  mp[{x, y}] = 0;
  
  int minn = oo;
  int time = 0;
  
  while(t--){
    char c;
    int n;
    
    cin >> c >> n;
    
    while(n--){
      time++;
      if(c == 'N') y++;
      if(c == 'S') y--;
      if(c == 'E') x++;
      if(c == 'W') x--;
      
      if(mp.count({x,y})) {
        // cout << x << ' ' << y << ' ' << time << ' ' << mp[{x,y}] << '\n';
        minn = min(minn, time - mp[{x,y}]);
      }
      mp[{x,y}] = time;
    }
  }
  
  if(minn == oo) minn = -1;
  
  cout << minn << '\n';
  
  return 0;
}

