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
  int N, t_k, l_k, r_k;
  vector<tuple<int, int, int>> v;
  cin >> N;
  for (int i = 0; i < N; ++i) {
    cin >> t_k >> l_k >> r_k;
    v.push_back(make_tuple(t_k, l_k, r_k));
  }

  long count = 0;
  int t_i, t_j, l_i, l_j, r_i, r_j;
  for (int i = 0; i < N - 1; ++i) {
    for (int j = i + 1; j < N; ++j) {
      t_i = get<0>(v[i]);
      l_i = get<1>(v[i]);
      r_i = get<2>(v[i]);
      t_j = get<0>(v[j]);
      l_j = get<1>(v[j]);
      r_j = get<2>(v[j]);
      if (r_j < l_i || r_i < l_j) {
        // 区間 i と区間 j の間にどちらでもない区間が存在する場合は重ならない
        continue;
      } else if (r_j == l_i && (t_i > 2 || t_j % 2 == 0)) {
        // 区間 i の左端と区間 j の右端が開区間と閉区間で異なる場合は重ならない
        continue;
      } else if (r_i == l_j && (t_i % 2 == 0 || t_j > 2)) {
        // 区間 i の右端と区間 j の左端が開区間と閉区間で異なる場合は重ならない
        continue;
      }
      count++; // 重なる場合をカウント
    }
  }
  cout << count;

  return 0;
}