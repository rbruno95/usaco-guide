#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

using ll = long long;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n, x;
  cin >> n >> x;
  
  map<ll,int> mp;
  mp[0] = 1;
  
  ll counter = 0;
  ll sum = 0;
  
  while(n--){
    int a;
    cin >> a;
    
    sum += a;
    if(mp.count(sum - x)) counter += mp[sum - x];
    
    mp[sum]++;
  }
  
  cout << counter << endl;

  return 0;
}

