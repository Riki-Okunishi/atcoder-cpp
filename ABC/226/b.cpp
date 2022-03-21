#include<bits/stdc++.h>

using namespace std;

struct ProconInit {
  static constexpr int IOS_PREC = 15;
  static constexpr bool AUTOFLUSH = false;

  ProconInit() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(IOS_PREC);
    if (AUTOFLUSH) cout << unitbuf;
  }
} PROCON_INIT;

signed main() {
  vector<vector<int>> v = {};

  int N = 4;
  map<int, vector<vector<int>>> m = {};
  m[2].push_back({1,2});
  m[2].push_back({1,1});
  m[2].push_back({2,1});
  m[2].push_back({1,2});

  for(auto it = m.begin(); it != m.end(); it++){
    for(auto arr1 = it->second.begin(); arr1 != (it->second.end() - 1) ; arr1++) {
      for (auto arr2 = arr1+1; arr2 != it->second.end(); arr2++) {
        
      }
    }
  }

  return 0;
}