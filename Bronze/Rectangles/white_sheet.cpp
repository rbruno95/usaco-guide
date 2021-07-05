#include <bits/stdc++.h>

using namespace std;

using ll = long long;

struct rect{
  ll x1, y1, x2, y2;
  
  rect(){}
  
  rect(rect& a, rect& b){
    x1 = max(a.x1, b.x1);
    x2 = min(a.x2, b.x2);
    y1 = max(a.y1, b.y1);
    y2 = min(a.y2, b.y2);
    if(x1 >= x2 or y1 >= y2) x1 = x2 = y1 = y2 = 0;
  }
  
  ll area(){
    return (x2 - x1) * (y2 - y1);
  }
};

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  rect a, b, c;
  
  cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
  cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
  cin >> c.x1 >> c.y1 >> c.x2 >> c.y2;
  
  rect ab(a, b), ac(a, c), bc(ab, ac);
  if(a.area() == ab.area() + ac.area() - bc.area()) cout << "NO\n";
  else cout << "YES\n";

  return 0;
}

