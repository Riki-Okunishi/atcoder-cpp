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
  string str;
  cin >> str;
  int count = 0;
  for (int i = 0; i < 12; i++) {
    if(str[i]=='Z'){
      if(str[i+1]=='O' && str[i+2]=='N' && str[i+3]=='e'){
        count++;
        i += 3;
      }
    }
  }
  cout << count;
  return 0;
}