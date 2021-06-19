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

/**
 * ABC 206 B問題
 * 等差数列の総和 N は N = n(n+1)/2 で求められるので，これを n について解くと，n = sqrt(2N + 1/4) - 1/2．
 * 与えられた N をもとに求めた n が非整数のとき，n を切り上げて始めて N を超えることになる．
 * 
 * C++ の場合は，天井関数 ceil() を使う．
**/
signed main() {
  double N;
  cin >> N;

  int n = (int)ceil(sqrt(2 * N + 0.25) - 0.5); // ここの 0.5 の符号が計算ミスで逆になってたせいで 「ceil じゃなくて foolr なの？」と余計な勘違いをし WA
  cout << n;
  
  return 0;
}