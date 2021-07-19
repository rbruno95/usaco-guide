#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n, k;
  cin >> n >> k;
  
  vector<int> v(n);
  
  while(k--){
    int a, b;
    cin >> a >> b;
    
    v[a-1]++;
    if(b < n) v[b]--;
  }
  
  partial_sum(v.begin(), v.end(), v.begin());
  sort(v.begin(), v.end());
  
  cout << v[n/2] << endl;

  return 0;
}

