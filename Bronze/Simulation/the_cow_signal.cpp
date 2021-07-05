#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("cowsignal.in", "r", stdin);
  freopen("cowsignal.out", "w", stdout);
  
  int m, n, k;
  cin >> m >> n >> k;
  
  while(m--){
    string s;
    cin >> s;
    
    string ns;
    for(auto x: s) ns += string(k, x);
    for(int i=0;i<k;i++) cout << ns << '\n';
  }

  return 0;
}

