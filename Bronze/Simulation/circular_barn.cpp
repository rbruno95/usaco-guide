#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("cbarn.in", "r", stdin);
  freopen("cbarn.out", "w", stdout);
  
  int n;
  cin >> n;
  
  vector<int> v(n);
  for(auto &x: v) cin >> x;
  
  int best = 1e9 + 10;
  
  for(int i=0;i<n;i++){
    int sum = 0;
    
    for(int j=1;j<n;j++)
      sum += v[(i + j) % n] * j;
      
    best = min(sum, best);
  }
  
  cout << best << '\n';

  return 0;
}

