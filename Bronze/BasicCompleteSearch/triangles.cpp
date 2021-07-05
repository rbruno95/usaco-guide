#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("triangles.in", "r", stdin);
  freopen("triangles.out", "w", stdout);

  int n;
  cin >> n;
  
  vector<pair<int,int>> v(n);
  for(auto &x: v) cin >> x.first >> x.second;
  
  int best = 0;
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      for(int k=0;k<n;k++)
        if(v[i].first == v[j].first and v[i].second == v[k].second)
          best = max(best, abs(v[i].second - v[j].second) * abs(v[i].first - v[k].first));
  
  cout << best << '\n';

  return 0;
}

