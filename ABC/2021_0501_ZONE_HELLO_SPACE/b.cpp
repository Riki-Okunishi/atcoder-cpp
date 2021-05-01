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
  int N, D, H;
  cin >> N >> D >> H;
  double max = 0.0;
  for (int i = 0; i < N; i++){
    int d_i, h_i;
    cin >> d_i;
    cin >> h_i;
    double b = H - (double)(H - h_i) / (double)(D - d_i) * D;
    if (b < 0.0) {
      b = 0.0;
    }
    if (b > max) {
      max = b;
    }
  }
  cout << max;

  return 0;
}