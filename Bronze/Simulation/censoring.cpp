#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("censor.in", "r", stdin);
  freopen("censor.out", "w", stdout);
  
  string s, t;
  cin >> s >> t;
  
  string r;
  for(auto x: s){
    r += x;
    if(r.size() >= t.size() and r.substr(r.size() - t.size()) == t)
      r.resize(r.size() - t.size());
  }
  
  cout << r << '\n';
  
  return 0;
}

