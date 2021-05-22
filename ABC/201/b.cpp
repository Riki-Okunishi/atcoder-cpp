#include <bits/stdc++.h>

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
  int N;
  string S_i;
  int T_i;
  cin >> N;
  vector<pair<int, string>> v;
  for (int i = 0; i < N; i++) {
    cin >> S_i >> T_i;
    v.push_back({T_i, S_i});
  }
  sort(v.begin(), v.end());
  cout << v[N - 2].second;

  return 0;
}