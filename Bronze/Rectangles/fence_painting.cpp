#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("paint.in", "r", stdin);
  freopen("paint.out", "w", stdout);
  
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  
  vector<bool> fence(101);
  for(int i=a;i<=b;i++) fence[i] = 1;
  for(int i=c;i<=d;i++) fence[i] = 1;
  
  int x = accumulate(fence.begin(), fence.end(), 0) - 1;
  
  if(b < c or d < a) x--;
  
  cout << x << '\n';

  return 0;
}

