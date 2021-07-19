#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("circlecross.in", "r", stdin);
  freopen("circlecross.out", "w", stdout);

  string s;
  cin >> s;
  
  int n = s.size();
  
  int counter = 0;
  for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
      for(int k=j+1;k<n;k++)
        for(int l=k+1;l<n;l++)
          if(s[i] == s[k] and s[j] == s[l])
            counter++;
  
  cout << counter << endl;

  return 0;
}

