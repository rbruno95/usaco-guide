#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("lifeguards.in", "r", stdin);
  freopen("lifeguards.out", "w", stdout);
  
  int n;
  cin >> n;
  
  vector<pair<int, int>> v(n);
  for(auto &x: v) cin >> x.first >> x.second;
  
  vector<int> counter(1000);
  for(auto x: v) for(int i=x.first; i<x.second;i++) counter[i]++;
  
  int best = 0;
  int sum = 0;
  for(auto x: counter) sum += x > 0;
  
  for(auto x: v){
    int left = 0;
    for(int i=x.first;i<x.second;i++)
      if(counter[i] == 1) left++;
    best = max(best, sum - left);
  }
  
  cout << best << '\n';

  return 0;
}

