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
  
  for(int i=0;i<n;i++)
    for(int j=i;j<n;j++){
      int sum = 0;
      for(int k=i;k<=j;k++) sum += v[k];
      
      if(sum % (j - i + 1)) continue;
      int average = sum / (j - i + 1);
      
      for(int k=i;k<=j;k++) 
        if(v[k] == average) {
          counter++;
          break;
        }
    }
  
  cout << counter << '\n';

  return 0;
}

