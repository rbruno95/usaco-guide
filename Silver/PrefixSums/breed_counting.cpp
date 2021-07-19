#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("bcount.in", "r", stdin);
  freopen("bcount.out", "w", stdout);

  int n, q;
  cin >> n >> q;
  
  vector<vector<int>> dp(3, vector<int>(n+1));
  
  for(int i=1;i<=n;i++){
    int x;
    cin >> x;
    
    dp[x-1][i]++;
    for(auto &v: dp) v[i] += v[i-1];
  } 
  
  while(q--){
    int x, y;
    cin >> x >> y;
    
    for(int i=0;i<3;i++)
      cout << dp[i][y] - dp[i][x-1] << " \n"[i == 2];
  }

  return 0;
}

