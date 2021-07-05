#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);
  
  int n;
  cin >> n;
  
  vector<int> counter(3);
  vector<int> answer = {1, 2, 3};
  while(n--){
    int a, b, c;
    cin >> a >> b >> c;
    
    for(int i=0;i<3;i++)
      if(answer[i] == a) answer[i] = b;
      else if(answer[i] == b) answer[i] = a;
    
    for(int i=0;i<3;i++)
      counter[i] += answer[i] == c;
  }
  
  cout << *max_element(begin(counter), end(counter)) << '\n';

  return 0;
}

