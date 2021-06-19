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
 * ABC 206 A問題
 * 普通に 1.08 倍して切り捨てて比較するだけ．
 * 
 * C++の場合は，床関数 floor() を使う．
**/
signed main() {
  double N;
  cin >> N;

  double price = floor(N * 1.08);
  
  if (price == 206.) {
    cout << "so-so";
  } else if (price < 206.) {
    cout << "Yay!";
  } else {
    cout << ":(";
  }

  return 0;
}