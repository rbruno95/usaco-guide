#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("gymnastics.in", "r", stdin);
  freopen("gymnastics.out", "w", stdout);
  
  int k, n;
  cin >> k >> n;
  
  vector<vector<int>> p(k, vector<int>(n));
  for(int i=0;i<k;i++)
    for(int j=0;j<n;j++)
      cin >> p[i][j];
  
  map<pair<int,int>, int> mp;
  int counter = 0;
  
  for(int t = 0; t < k; t++)
    for(int i=0;i<n;i++)
      for(int j=i+1;j<n;j++)
        mp[{p[t][i], p[t][j]}]++;
  
  for(auto kv: mp) if(kv.second == k) counter++;
  
  cout << counter << '\n';

  return 0;
}

