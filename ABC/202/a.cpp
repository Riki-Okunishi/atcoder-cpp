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
  int a, b, c;
  cin >> a >> b >> c;
  cout << (21 - a - b - c); // サイコロ 3 つなので，7 * 3 = 21 からすべての目の数を引けばよい
  return 0;
}