#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  
  vector<int> v(2 * n);
  for(auto &x: v) cin >> x;
  
  sort(v.begin(), v.end());
  
  int sol = 1e9;
  
  for(int i=0;i<2 * n;i++)
    for(int j=i+1;j < 2 * n;j++){
      int diffs = 0;
      
      int last = -1;
      for(int k=0;k < 2 * n;k++)
        if(k == i or k == j) continue;
        else{
          if(last == -1) last = k;
          else diffs += v[k] - v[last], last = -1;
        }
      
      sol = min(diffs, sol);
    }
  
  cout << sol << endl;

  return 0;
}

