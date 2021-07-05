#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("lostcow.in", "r", stdin);
  freopen("lostcow.out", "w", stdout);
  
  int x, y;
  cin >> x >> y;
  
  int counter = 0;
  int direction = 1;
  
  int walked = 0;
  int factor = 1;
  int total = 1;
  
  while(1){
    if(x == y){
      cout << counter << '\n';
      return 0;
    }
    
    x += direction;
    counter++;
    walked++;
    
    if(walked == total){
      walked = 0;
      direction *= -1;
      
      factor *= 2;
      total = 3 * factor / 2;
    }
  }

  return 0;
}

