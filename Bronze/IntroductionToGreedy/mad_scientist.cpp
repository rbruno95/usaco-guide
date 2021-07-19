#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("breedflip.in", "r", stdin);
  freopen("breedflip.out", "w", stdout);

  int n;
  cin >> n;
  
  string a, b;
  cin >> a >> b;
  
  int counter = 0;
  
  bool flip = false;
  for(int i=0;i<n;i++){
    if(a[i] != b[i]) flip = true;
    else if(flip){
      counter++;
      flip = false;
    }
  }

  cout << counter + flip << endl;

  return 0;
}

