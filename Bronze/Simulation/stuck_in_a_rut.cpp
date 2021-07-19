#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

const int oo = 1e9;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  
  vector<char> D(n);
  vector<int> x(n), y(n);
  for(int i=0;i<n;i++) cin >> D[i] >> x[i] >> y[i];
  
  vector<int> times;
  
  for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++){
        times.push_back(abs(y[i] - y[j]));
        times.push_back(abs(x[i] - x[j]));
    }
  
  sort(times.begin(), times.end());

  vector<int> sol(n, oo);

  for(auto t: times)
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        if(D[i] != D[j] and D[i] == 'N' and x[j] < x[i] and y[i] < y[j]){
          if(y[i] + t == y[j] and x[j] + min(sol[j], t) > x[i]) sol[i] = min(sol[i], t);
          else if(y[i] + min(sol[i], t) > y[j] and x[j] + t == x[i]) sol[j] = min(sol[j], t);
        }

  for(auto x: sol) 
    if(x == oo) cout << "Infinity" << endl;
    else cout << x << endl;

  return 0;
}

