#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("angry.in", "r", stdin);
  freopen("angry.out", "w", stdout);

  int n;
  cin >> n;
  
  vector<int> v(n);
  for(auto &x: v) cin >> x;
  
  sort(begin(v), end(v));
  
  int best = 1;
  for(int i=0;i<n;i++){
    int counter = 1;
    
    int t = 1;
    int j = i - 1, k = i;
    
    while(k > 0 and j >= 0){
      if(v[k] - v[j] > t) break;
      while(j >= 0 and v[k] - v[j] <= t) j--, counter++;
      k = j + 1;
      t++;
    }
    
    k = i, j = i + 1;
    t = 1;
    while(k < n - 1 and j < n){
      if(v[j] - v[k] > t) break;
      while(j < n and v[j] - v[k] <= t) j++, counter++;
      k = j - 1;
      t++;
    }
    
    // cout << counter << endl;
    best = max(best, counter);
  }
  
  cout << best << endl;

  return 0;
}

