#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("balancing.in", "r", stdin);
  freopen("balancing.out", "w", stdout);

  int n;
  cin >> n;
  
  vector<int> x(n), y(n);
  set<int> sx, sy;
  
  for(int i=0;i<n;i++) {
    cin >> x[i] >> y[i];
    sx.insert(x[i] + 1);
    sx.insert(x[i] - 1);
    sy.insert(y[i] + 1);
    sy.insert(y[i] - 1);
  }
  
  int best = 1e9 + 10;
  
  for(auto _x: sx)
    for(auto _y: sy){
      vector<int> parts(4);
      for(int i=0;i<n;i++){
        if(x[i] < _x and y[i] < _y) parts[0]++;
        if(x[i] < _x and y[i] > _y) parts[1]++;
        if(x[i] > _x and y[i] < _y) parts[2]++;
        if(x[i] > _x and y[i] > _y) parts[3]++;
      }
      
      best = min(best, *max_element(parts.begin(), parts.end())); 
    }
    
  cout << best << endl;    

  return 0;
}

