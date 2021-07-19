#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

const int oo = 1e9;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("traffic.in", "r", stdin);
  freopen("traffic.out", "w", stdout);
  
  int n;
  cin >> n;
  
  vector<string> T(n);
  vector<int> A(n), B(n);
  
  for(int i=0;i<n;i++) cin >> T[i] >> A[i] >> B[i];
  
  int a = -oo, b = oo;
  for(int i=n-1;i>=0;i--){
    if(T[i] == "none") a = max(a, A[i]), b = min(b, B[i]);
    if(T[i] == "on") a -= B[i], b -= A[i], a = max(0, a); 
    if(T[i] == "off") a += A[i], b += B[i];
  } 
  
  cout << a << ' ' << b << endl;
  
  a = -oo, b = oo;
  for(int i=0;i<n;i++){
    if(T[i] == "none") a = max(a, A[i]), b = min(b, B[i]);
    if(T[i] == "on") a += A[i], b += B[i]; 
    if(T[i] == "off") a -= B[i], b -= A[i], a = max(0, a);
  } 
  
  cout << a << ' ' << b << endl;

  return 0;
}

