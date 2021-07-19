#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("maxcross.in", "r", stdin);
  freopen("maxcross.out", "w", stdout);
  
  int n, k, b;
  cin >> n >> k >> b;
  
  vector<int> v(n+1);
  
  while(b--){
    int x;
    cin >> x;
    v[x] = 1;
  }
  
  partial_sum(v.begin(), v.end(), v.begin());
  
  int best = 1e9;
  for(int i=k;i<=n;i++) best = min(best, v[i] - v[i-k]);
  
  cout << best << endl;

  return 0;
}

