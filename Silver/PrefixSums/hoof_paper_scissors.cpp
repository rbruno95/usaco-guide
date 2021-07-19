#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("hps.in", "r", stdin);
  freopen("hps.out", "w", stdout);

  int n;
  cin >> n;
  
  vector<char> v(n+2);
  for(int i=1;i<=n;i++) cin >> v[i];
  
  vector<vector<int>> dpl(3, vector<int>(n+2));
  
  for(int i=1;i<=n;i++){
    if(v[i] == 'P') dpl[0][i]++;
    if(v[i] == 'H') dpl[1][i]++;
    if(v[i] == 'S') dpl[2][i]++; 
    
    for(auto &x: dpl) x[i] += x[i-1];
  }
  
  vector<vector<int>> dpr(3, vector<int>(n+2));
  
  for(int i=n;i>0;i--){
    if(v[i] == 'P') dpr[0][i]++;
    if(v[i] == 'H') dpr[1][i]++;
    if(v[i] == 'S') dpr[2][i]++; 
    
    for(auto &x: dpr) x[i] += x[i+1];
  }
  
  int best = 0;
  
  for(int i=1;i<=n+1;i++)
    for(int p=0;p<3;p++)
      for(int q=0;q<3;q++)
        best = max(best, dpl[p][i-1] + dpr[q][i]);
  
  cout << best << endl;
  
  return 0;
}

