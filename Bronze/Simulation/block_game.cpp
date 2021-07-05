#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("blocks.in", "r", stdin);
  freopen("blocks.out", "w", stdout);
  
  int n;
  cin >> n;
  
  vector<int> letters(26);
  
  while(n--){
    vector<int> l_word1(26);
    vector<int> l_word2(26);
    
    string a, b;
    cin >> a >> b;
    
    for(auto x: a) l_word1[x - 'a']++;
    for(auto x: b) l_word2[x - 'a']++;
    
    for(int i=0;i<26;i++) letters[i] += max(l_word1[i], l_word2[i]);
  }
  
  for(auto x: letters) cout << x << '\n';

  return 0;
}

