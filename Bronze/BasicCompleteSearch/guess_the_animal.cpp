#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("guess.in", "r", stdin);
  freopen("guess.out", "w", stdout);
    
  int n;
  cin >> n;
  
  vector<vector<string>> animals(n);
  
  for(int i=0;i<n;i++){
    string s;
    cin >> s;
    
    int m;
    cin >> m;
    
    for(int j=0;j<m;j++){
      string x;
      cin >> x;
      
      animals[i].push_back(x);
    }
  }
  
  int maxx = 0;
  
  for(int i=0;i<n;i++){
    map<string, int> mp;
    
    for(auto x: animals[i]) mp[x]++;
    
    for(int j=i+1;j<n;j++){
      for(auto x: animals[j]) mp[x]++;
      
      int counter = 0;
      for(auto kv: mp) counter += kv.second == 2;
    
      for(auto x: animals[j]) mp[x]--;
    
      maxx = max(maxx, counter + 1);
    }
  }
  
  cout << maxx << '\n';

  return 0;
}

