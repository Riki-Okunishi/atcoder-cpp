#include <bits/stdc++.h>  // GCC & 競プロ限定で妥当性のあるヘッダ

#define ALL(obj) (obj).begin(), (obj).end()  // コレクション用

using namespace std;
using ll = long long;

// 競プロ用の初期化
struct ProconInit {
  // 小数の桁数の出力設定
  static constexpr int IOS_PREC = 15;
  //
  static constexpr bool AUTOFLUSH = false;

  ProconInit() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(IOS_PREC);
    if (AUTOFLUSH) cout << unitbuf;
  }
} PROCON_INIT;

signed main() {
  cout << "Hello, world!" << endl;
  return 0;
}