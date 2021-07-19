#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("sleepy.in", "r", stdin);
  freopen("sleepy.out", "w", stdout);
  
  int n;
  cin >> n;
  
  vector<int> v(n);
  for(auto &x: v) cin >> x;
  
  int counter = 0;
  while(!is_sorted(v.begin(), v.end())){
    
    rotate(v.begin(), v.begin()+1, v.end());
    
    int last = n + 1;
    
    for(int i=n-1;i>0;i--)
      if(v[i] < v[i - 1] and last > v[i - 1]) {
        last = v[i - 1];
        swap(v[i], v[i-1]);
      }else break;
    
    // for(auto x: v) cout << x << ' ';
    // cout << endl;
    
    counter++;
  }
  
  cout << counter << endl;

  return 0;
}

