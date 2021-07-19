#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("planting.in", "r", stdin);
  freopen("planting.out", "w", stdout);
  
  int n;
  cin >> n;
  n--;
  
  vector<int> degree(n);
  while(n--){
    int a, b;
    cin >> a >> b;
    a--, b--;
    
    degree[a]++;
    degree[b]++;
  }
  
  cout << *max_element(degree.begin(), degree.end()) + 1 << endl;

  return 0;
}

