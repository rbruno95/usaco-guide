#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("pails.in", "r", stdin);
  freopen("pails.out", "w", stdout);  
  
  int x, y, m;
  cin >> x >> y >> m;
  
  int best = 0;
  
  for(int i = 0; i * x <= m; i++)
    for(int j = 0; i * x + j * y <= m; j++)
      best = max(best, i*x + j*y);
  
  cout << best << '\n';

  return 0;
}

