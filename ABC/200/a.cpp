#include <bits/stdc++.h>

#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;
using ll = long long;

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
 * 西暦は「100で割って繰り上げ」
 */
signed main() {
  int N;
  cin >> N;

  if (N % 100 != 0) { // 繰り上げる場合
    N /= 100;
    N++;
  } else { // 繰り上げない場合
    N /= 100;
  }
  
  cout << N;
  return 0;
}