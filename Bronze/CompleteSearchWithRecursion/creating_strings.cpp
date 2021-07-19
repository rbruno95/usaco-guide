#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  cin >> s;
  
  vector<string> sol;
  
  sort(s.begin(), s.end());
  
  do{
    sol.push_back(s);
  }while(next_permutation(s.begin(), s.end()));

  cout << sol.size() << endl;
  for(auto x: sol) cout << x << endl;

  return 0;
}

