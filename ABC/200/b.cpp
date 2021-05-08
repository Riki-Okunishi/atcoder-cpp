#include<bits/stdc++.h>

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
 * ナイーブに実装すると，最悪のケースでは2回操作を行う度に桁が1つ増える(10倍)．
 * 最大で20回操作され(K <= 20)，最大10桁増えるので，最大で10^15オーダーとなり，int型ではオーバーフローを起こす．
 * long long型で計算していれば 9*10^18 まで扱えるのでオーバーフローは起こさない．
 */
signed main() {
  ll N;
  int K;
  cin >> N >> K;

  for(int i=0; i<K; i++){
    if(N%200 != 0){ // 200の倍数でない場合
      N = N*1000 + 200;
    }else{ // 200の倍数の場合
      N/=200;
    }
  }

  cout << N;
  return 0;
}