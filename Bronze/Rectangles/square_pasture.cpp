#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("square.in", "r", stdin);
  freopen("square.out", "w", stdout);
  
  int x1, y1, x2, y2;
  int x3, y3, x4, y4;
  
  cin >> x1 >> y1 >> x2 >> y2;
  cin >> x3 >> y3 >> x4 >> y4;
  
  int dx = max(x4, x2) - min(x1, x3);
  int dy = max(y4, y2) - min(y1, y3);
  
  int d = max(dx, dy);
  
  cout << d * d << '\n';

  return 0;
}

