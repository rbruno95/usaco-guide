#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

using ll = long long;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  
  map<int,int> mp;
  mp[0] = 1;
  
  ll counter = 0;
  int sum = 0;
  
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    
    (sum = (sum + a) % n + n) %= n;
    if(mp.count(sum)) counter += mp[sum];
    
    mp[sum]++;
  }
  
  cout << counter << endl;

  return 0;
}

