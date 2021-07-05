#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("shuffle.in", "r", stdin);
  freopen("shuffle.out", "w", stdout);

  int n;
  cin >> n;
  
  map<int,int> mp;
  for(int i=0;i<n;i++) {
    int x;
    cin >> x;
    x--;
    
    mp[x] = i;
  }
  
  vector<pair<int,int>> cows(n);
  for(int i=0;i<n;i++){
    cin >> cows[i].second;
    cows[i].first = i;
  }
  
  for(auto &x: cows) for(int i=0;i<3;i++) x.first = mp[x.first];
  
  sort(begin(cows), end(cows));
  for(auto x: cows) cout << x.second << '\n';

  return 0;
}

