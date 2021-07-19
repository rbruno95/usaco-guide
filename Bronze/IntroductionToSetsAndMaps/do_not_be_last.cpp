#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("notlast.in", "r", stdin);
  freopen("notlast.out", "w", stdout);
  
  map<string, int> mp = {
    {"Bessie", 0},
    {"Maggie", 0},
    {"Elsie", 0},
    {"Henrietta", 0},
    {"Gertie", 0},
    {"Annabelle", 0},
    {"Daisy", 0},
  };
  
  int n;
  cin >> n;
  
  while(n--){
    string s;
    int x;
    
    cin >> s >> x;
    
    mp[s] += x;
  }
  
  map<int, vector<string>> rmp;
  for(auto [k, v]: mp) rmp[v].push_back(k);
  
  auto t = next(rmp.begin(), 1);
  
  if(t == rmp.end() or t->second.size() >= 2) cout << "Tie\n";
  else cout << t -> second[0] << endl;

  return 0;
}

