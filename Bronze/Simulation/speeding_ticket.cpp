#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("speeding.in", "r", stdin);
  freopen("speeding.out", "w", stdout);
  
  int n, m;
  cin >> n >> m;
  
  vector<int> v(101);
  
  int pos = 1;
  while(n--){
    int len, speed;
    cin >> len >> speed;
    
    while(len--) v[pos++] = speed;
  }
  
  int maxx = 0;
  pos = 1;
  
  while(m--){
    int len, speed;
    cin >> len >> speed;
    
    while(len--) maxx = max(maxx, speed - v[pos++]);
  }
  
  cout << maxx << '\n';

  return 0;
}

