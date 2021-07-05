#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("tttt.in", "r", stdin);
  freopen("tttt.out", "w", stdout);
  
  vector<string> tab(3);
  for(auto &x: tab) cin >> x;
  
  set<pair<char, char>> t_winners;
  set<char> winners;
  
  auto add_winners = [&](set<char>& s){
    if(s.size() == 1) winners.insert(*s.begin());
    else if(s.size() == 2) t_winners.insert({*s.begin(), *next(s.begin(), 1)});
  };
  
  //rows
  for(auto r: tab){
    set<char> s;
    
    for(auto c: r)
      s.insert(c);
    
    add_winners(s);
  }
  
  //columns
  for(int j=0;j<3;j++){
    set<char> s;
    
    for(int i=0;i<3;i++)
      s.insert(tab[i][j]);
    
    add_winners(s);
  }
  
  //diagonal 1
  set<char> s;
  
  for(int i=0;i<3;i++)
    s.insert(tab[i][i]);
  
  add_winners(s);
  
  //diagonal 2
  s.clear();
  for(int i=0;i<3;i++)
    s.insert(tab[i][2-i]);
  
  add_winners(s);
  
  // for(auto x: t_winners) cout << x.first << ' ' << x.second << '\n';
  
  cout << winners.size() << '\n' << t_winners.size() << '\n';

  return 0;
}

