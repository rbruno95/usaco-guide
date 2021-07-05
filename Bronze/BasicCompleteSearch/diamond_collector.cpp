#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("diamond.in", "r", stdin);
  freopen("diamond.out", "w", stdout);
  
  int n, k;
  cin >> n >> k;
  
  vector<int> v(n);
  for(auto &x: v) cin >> x;
  
  int best = 0;
  for(int i=1;i<=10000;i++){
    int counter = 0;
    for(auto x: v) counter += (i <= x and x <= i + k);
    
    best = max(best, counter);
  }
  
  cout << best << '\n';

  return 0;
}

