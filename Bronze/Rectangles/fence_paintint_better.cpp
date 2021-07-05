#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("paint.in", "r", stdin);
  freopen("paint.out", "w", stdout);
  
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  
  int intersection = max(0, min(b, d) - max(a, c));
  cout << b - a + d - c - intersection << '\n';

  return 0;
}

