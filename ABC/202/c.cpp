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
  int N, n;
  vector<int> B;
  unordered_map<int, long long> K, H; // unordered_map じゃないだけでACを逃した．気づいたがまさかこれだけが原因だと思えず・・・

  cin >> N;
  
  // A_n 中で n が登場した回数を数える
  for(int i = 0; i < N; i++) {
    cin >> n;
    K[n]++; // K[n]: A_n 中に n が登場した回数
  }
  // 数列 B_n にあたる vector を作成
  for (int i = 0; i < N; i++) {
    cin >> n;
    B.push_back(n); // B_i を作成．vector なので B_i = B[i-1]
  }
  // B_n 中で登場した n が C_k によって指定された回数を数える
  for (int i = 0; i < N; i++) {
    cin >> n;
    H[B[n-1]]++; // H[n]: B_n 中に登場する n が C_n によって指定された回数
  }

  long long result = 0; // 組み合わせの最大値は (10^5)^2 になる(N=10^5 で A_n, B_n, C_n がすべて1のとき)ので int ではオーバーフローする
  for (int i = 1; i <= N; i++) {
    result += K[i] * H[i]; // A_i がA_n に登場した回数と，B_n 中に登場し C_k によって指定された回数の積が，A_i で一致する組の総数
  }
  cout << result;
  return 0;
}
