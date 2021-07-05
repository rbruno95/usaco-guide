#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("measurement.in", "r", stdin);
  freopen("measurement.out", "w", stdout);
  
  int n;
  cin >> n;
  
  map<string, int> mp = {
    {"Bessie", 7},
    {"Elsie", 7},
    {"Mildred", 7}
  };
  
  set<string> s = {"Bessie", "Elsie", "Mildred"};
  
  int counter = 0;
  
  vector<pair<int,pair<string, int>>> v(n);
  for(auto &x: v) cin >> x.first >> x.second.first >> x.second.second;
  
  sort(begin(v), end(v));
  
  for(auto x: v){
    string name = x.second.first;
    mp[name] += x.second.second;
 
    bool change = false;
    int maxx = 0;
    for(auto kv: mp)
      maxx = max(kv.second, maxx);
    
    for(auto kv: mp)
      if((kv.second == maxx and !s.count(kv.first)) 
          or (kv.second < maxx and s.count(kv.first)))
        change = true;
    
    counter += change;
    
    s.clear();
    for(auto kv: mp)
      if(kv.second == maxx)
        s.insert(kv.first);
  }

  cout << counter << '\n';

  return 0;
}

