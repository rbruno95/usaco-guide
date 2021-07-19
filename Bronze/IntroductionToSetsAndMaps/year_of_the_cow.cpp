#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  map<string, int> years = {
    {"Ox", 0},
    {"Tiger", 1},
    {"Rabbit", 2},
    {"Dragon", 3},
    {"Snake", 4},
    {"Horse", 5},
    {"Goat", 6},
    {"Monkey", 7},
    {"Rooster", 8},
    {"Dog", 9},
    {"Pig", 10},
    {"Rat", 11}
  };

  map<string, string> cows_year;
  map<string, int> cows;
  cows["Bessie"] = 0;
  cows_year["Bessie"] = "Ox";

  int n;
  cin >> n;
  
  while(n--){
    string cow1, x, time, year, cow2;
    cin >> cow1 >> x >> x >> time >> year >> x >> x >> cow2;
    
    cows_year[cow1] = year;
    int diff = years[cows_year[cow1]] - years[cows_year[cow2]];
    
    if(time == "previous") {
      if(diff >= 0) cows[cow1] = cows[cow2] - (12 - diff);
      else cows[cow1] = cows[cow2] + diff;
    }
    else {
      if(diff > 0) cows[cow1] = cows[cow2] + diff;
      else cows[cow1] = cows[cow2] + (12 + diff);
    }
  }
  
  // for(auto [k, v]: cows) cout << k << ' ' << v << endl; 
  
  cout << abs(cows["Elsie"]) << endl;

  return 0;
}

