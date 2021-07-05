#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("billboard.in", "r", stdin);
  freopen("billboard.out", "w", stdout);

  vector<vector<int>> tab(2010, vector<int>(2010));

  int iterations = 3;
  
  while(iterations--){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    x1 += 1000;
    x2 += 1000;
    y1 += 1000;
    y2 += 1000;
    
    for(int i=x1;i<x2;i++)
      for(int j=y1;j<y2;j++)
        tab[i][j] = !iterations ? 0 : 1;
  }
  
  int counter = 0;
  for(int i=0;i<tab.size();i++)
    for(int j=0;j<tab.size();j++)
      counter += tab[i][j];
  
  cout << counter << '\n';

  return 0;
}

