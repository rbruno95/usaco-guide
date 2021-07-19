#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("whereami.in", "r", stdin);
  freopen("whereami.out", "w", stdout);
  
  int n;
  cin >> n;
  
  string s;
  cin >> s;
  
  for(int i=1;i<=n;i++){
    set<string> st;
    bool ok = true;
    for(int j=0; j+i <= n and ok ;j++)
      if(st.count(s.substr(j, i)))
        ok = false;
      else st.insert(s.substr(j, i));
      
    if(ok) {
      cout << i << endl;
      break;
    }
  }

  return 0;
}

