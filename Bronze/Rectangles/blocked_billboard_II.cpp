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
  
  rect a, b;
  cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
  cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
  
  rect t(a, b);
  
  int counter = 0;
  
  counter += (a.x1 == t.x1 and a.y1 == t.y1);
  counter += (a.x2 == t.x2 and a.y2 == t.y2);
  counter += (a.x1 == t.x1 and a.y2 == t.y2);
  counter += (a.x2 == t.x2 and a.y1 == t.y1);
  
  // cout << counter << '\n';
  
  if(counter > 1) 
    cout << a.area() - t.area() << '\n';
  else cout << a.area() << '\n';

  return 0;
}

