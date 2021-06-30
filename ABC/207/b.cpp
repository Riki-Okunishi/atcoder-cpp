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

/** C が B の 1/D 倍より大きくないと，水玉:赤玉 の比の値は一向に D を下回らない．
 * これは，必要な操作回数の最小値 n について方程式を解くと分かる，
 * n = A/(CD-B) となるが，そもそもこれが成立するのは CD-B ≠ 0 のとき．また，CD < B のときは C が B の D 倍よりも小さいので問題の条件を満たすことはない．
 * よって，解答は CD > B のときに n を超える整数値であり，天井関数 ceil() を使って求める．
 **/
signed main() {
  double A, B, C, D;
  cin >> A >> B >> C >> D;
  cout << ( C * D > B ? static_cast<int>(ceil(A / ( C * D - B))) : -1 ); // 三項間演算子で無理やり1行に笑
  return 0;
}