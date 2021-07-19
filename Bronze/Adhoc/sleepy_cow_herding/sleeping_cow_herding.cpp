#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("herding.in", "r", stdin);
  freopen("herding.out", "w", stdout);
  
  vector<int> v(3);
  for(auto &x: v) cin >> x;
  
  sort(v.begin(), v.end());
  
  if((v[1] == v[0] + 1) and (v[2] == v[1] + 1))
    cout << 0 << endl << 0 << endl;
  else if((v[1] == v[0] + 1) or (v[2] == v[1] + 1))
    cout << 1 << endl << 2 << endl;
  else if((v[1] == v[0] + 2) or (v[2] == v[1] + 2))
    cout << 1 << endl << 2 << endl;
  else cout << 2 << endl << 2 << endl;

  return 0;
}

