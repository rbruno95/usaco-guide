#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("mixmilk.in", "r", stdin);
  freopen("mixmilk.out", "w", stdout);
  
  vector<int> c(3), m(3);
  for(int i=0;i<3;i++) cin >> c[i] >> m[i];
  
  int cube = 0;
  for(int i=0;i<100;i++){
    int next_cube = (cube + 1) % 3;
    int t = min(m[cube], c[next_cube] - m[next_cube]);
    
    m[cube] -= t;
    m[next_cube] += t;
    
    cube = next_cube;
  }
  
  for(auto x: m) cout << x << '\n';

  return 0;
}

