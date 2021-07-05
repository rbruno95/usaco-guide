#include <bits/stdc++.h>

using namespace std;

struct rect{
  int x1, y1, x2, y2;
  
  rect(){}
  
  rect(rect& a, rect& b){
    x1 = max(a.x1, b.x1);
    x2 = min(a.x2, b.x2);
    y1 = max(a.y1, b.y1);
    y2 = min(a.y2, b.y2);
    if(x1 >= x2 or y1 >= y2) x1 = x2 = y1 = y2 = 0;
  }
  
  int area(){
    return (x2 - x1) * (y2 - y1);
  }
};

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("billboard.in", "r", stdin);
  freopen("billboard.out", "w", stdout);
  
  rect a, b, t;
  
  cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
  cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
  cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
  
  cout << a.area() + b.area() - rect(a,t).area() - rect(b, t).area() << '\n';

  return 0;
}

