#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("cownomics.in", "r", stdin);
  freopen("cownomics.out", "w", stdout);
  
  int n, m;
  cin >> n >> m;
  
  vector<string> sp(n), p(n);
  for(auto &x: sp) cin >> x;
  for(auto &x: p) cin >> x;
  
  int counter = 0;
  int total = m * (m - 1) * (m - 2) / 6;
  for(int i=0;i<m;i++)
    for(int j=i+1;j<m;j++)
      for(int k=j+1;k<m;k++){
        unordered_set<string> s;
        for(auto x: p) {
          string st;
          ((st += x[i]) += x[j]) += x[k];
          s.insert(st);
        }
        for(auto x: sp){
          string st;
          ((st += x[i]) += x[j]) += x[k];
           
          if(s.count(st)) { counter++; break; }
        }
      }
  
  cout << total - counter << endl;    

  return 0;
}

