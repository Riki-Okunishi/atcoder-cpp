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

// x の階乗を返す関数
int frac(int x) {
  return x > 0 ? x * frac(x - 1) : 1;
}

signed main() {
  int P;
  cin >> P;
  vector<pair<int, int>> v;
  for (int i = 1; i <= 10; ++i) {  // i が 0 から 9 になっていたのに気付けず時間がかかってしまった．
    v.push_back(make_pair(frac(i), 100));
  }
  int count = 0;
  int index = v.size() - 1; // 貪欲法のスタート地点
  while (P > 0 && index >= 0) {
    if (v[index].second > 0 && v[index].first <= P) { // 各コインが 100 枚までなことに気を付ける．
      P -= v[index].first;
      v[index].second--;
      count++;
    } else {
      index--;
    }
  }
  cout << count;
  return 0;
}