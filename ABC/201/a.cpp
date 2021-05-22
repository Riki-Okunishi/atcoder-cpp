#include<bits/stdc++.h>

using namespace std;
using ll = long long;

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
  vector<int> v={};
  int A_i;
  for(int i = 0; i < 3; i++) {
    cin >> A_i;
    v.push_back(A_i);
  }
  sort(v.begin(), v.end());
  if(v[1] - v[0] == v[2] - v[1]) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}