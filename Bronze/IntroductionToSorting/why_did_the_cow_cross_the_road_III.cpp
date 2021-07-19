#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("cowqueue.in", "r", stdin);
  freopen("cowqueue.out", "w", stdout);
  
  int n;
  cin >> n;
  
  vector<pair<int,int>> v(n);
  for(auto &[x, y]: v) cin >> x >> y;
  
  sort(begin(v), end(v));
  
  int t = 0;
  for(auto [x, y]: v) t = max(t, x) + y;
  
  cout << t << endl;

  return 0;
}

