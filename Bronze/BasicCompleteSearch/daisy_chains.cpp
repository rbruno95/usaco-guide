#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  
  vector<int> v(n);
  for(auto &x: v) cin >> x;
  
  int counter = 0;
  
  for(int i=0;i<n;i++){
    int sum = 0;
    set<int> s;
    
    for(int j=i;j<n;j++){
      s.insert(v[j]);
      sum += v[j];
      if(sum % (j-i+1) == 0 and s.count(sum / (j-i+1))) counter++;
    }
  }
  
  cout << counter << '\n';

  return 0;
}

