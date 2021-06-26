#include <bits/stdc++.h>

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
  vector<int> v;
  int N;
  for (int i = 0; i < 3; ++i) {
    cin >> N;
    v.push_back(N);
  }
  sort(v.begin(), v.end());
  cout << (v[1] + v[2]);

  return 0;
}