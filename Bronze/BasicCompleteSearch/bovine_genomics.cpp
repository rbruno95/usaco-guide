#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("cownomics.in", "r", stdin);
  freopen("cownomics.out", "w", stdout);
  
  int n, m;
  cin >> n >> m;
  
  vector<string> sp(n), p(n);
  for(auto &x: sp) cin >> x;
  for(auto &x: p) cin >> x;
  
  int counter = 0;
  
  for(int j=0;j<m;j++){
    set<char> s1;
    for(int i=0;i<n;i++) s1.insert(p[i][j]);
    
    set<char> s2;
    for(int i=0;i<n;i++) s2.insert(sp[i][j]);
    
    bool ok = true;
    for(auto x: s1) if(s2.count(x)) ok = false;
    
    counter += ok;
  }
  
  cout << counter << '\n';

  return 0;
}

