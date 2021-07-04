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
  int A,B;
  cin >> A >> B;
  cout << (A <= B ? ( 6*A >= B ? "Yes" : "No") : "No"); // A <= B <= 6*A なら出た目の合計が B になり得る．
  return 0;
}