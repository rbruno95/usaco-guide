#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("blist.in", "r", stdin);
  freopen("blist.out", "w", stdout);
  
  int n;
  cin >> n;
  
  vector<int> times(1010);
  
  while(n--){
    int a, b, c;
    cin >> a >> b >> c;
    
    for(int i=a;i<=b;i++)
      times[i] += c;
  }
  
  cout << *max_element(begin(times), end(times)) << '\n';

  return 0;
}

