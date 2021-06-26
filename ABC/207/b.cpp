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
  double A, B, C, D;
  cin >> A >> B >> C >> D;
  // C が B の 1/D 倍より大きくないと，水玉:赤玉 の比の値は一向に D を下回らない
  if (C * D <= B) {  // 例題につられて "D倍"なことを忘れて WA
    cout << -1;
    return 0;
  }
  // 必要な操作回数の最小値 n について，n = A/(CD-B)
  // が成立．解答はこれを超える整数値なので，天井関数 ceil() を使う．
  cout << (int)ceil(A / (C * D - B));  // 例題につられて "D倍"なことを忘れて WA
  return 0;
}