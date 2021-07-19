#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("div7.in", "r", stdin);
  freopen("div7.out", "w", stdout);

  int n;
  cin >> n;
  
  map<int,int> mp;
  mp[0] = 0;
  int sum = 0;
  
  int best = 0;
  
  for(int i=1;i<=n;i++){
    int x;
    cin >> x;
    
    (sum += x) %= 7;
    if(mp.count(sum)) best = max(i - mp[sum], best);
    else mp[sum] = i;
  }
  
  cout << best << endl;

  return 0;
}

