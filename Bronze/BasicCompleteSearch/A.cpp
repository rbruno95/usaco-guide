#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  
  vector<int> x(n), y(n);
  for(auto &t: x) cin >> t;
  for(auto &t: y) cin >> t;
  
  auto distance = [&](int i, int j) -> int{
    return (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
  };
  
  int best = 0;
  for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
      best = max(best, distance(i, j));
  
  cout << best << '\n';

  return 0;
}

