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
  string S, result = "";
  cin >> S;

  // 文字列の後ろから，それを逆さまにした文字を考える
  for (int i = S.length(); i >= 0; i--) {
    switch (S[i]) {
      case '0':
        result += "0";
        break;
      case '1':
        result += "1";
        break;
      case '6':
        result += "9";
        break;
      case '8':
        result += "8";
        break;
      case '9':
        result += "6";
        break;
      default:
        break;
    }
  }
  cout << result;
  return 0;
}