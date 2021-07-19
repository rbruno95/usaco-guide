#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("paintbarn.in", "r", stdin);
  freopen("paintbarn.out", "w", stdout);
  
  int n, k;
  cin >> n >> k;
  
  vector<vector<int>> v(1001, vector<int>(1001));
  
  while(n--){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    v[x1][y1]++;
    v[x2][y1]--;
    v[x1][y2]--;
    v[x2][y2]++;
  }
  
  int counter = 0;
  
  for(int i=0;i<=1000;i++)
    for(int j=0;j<=1000;j++){
      if(i) v[i][j] += v[i-1][j];
      if(j) v[i][j] += v[i][j-1];
      if(i and j) v[i][j] -= v[i-1][j-1];
      counter += v[i][j] == k;
    }
  
  cout << counter << endl;

  return 0;
}

