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
 * ABC 206 C問題
 * すべての i に対して，すべての j が i と異なるかどうか愚直に探索していると O(N^2) になってしまう．これを避ける工夫が必要．
 * 全探索しなくても「A_i がそれ以降の部分列に何回登場するか」が分かれば O(N) で解ける．
 * 各 A_i にそれ以降 A_i が登場する回数を紐付ける操作は O(2N)で可能．
 * そこから線形探索すれば各 A_i で作れる組の数が計算できるので，高々合計 O(3N)，つまり O(N) で解ける．
 * もっと効率的なやり方はあるはずだけど分からなかった．
 * 
 * C++ の場合，pair を map のキーにすることができなかったので，map がさらに map を返すというややこしい構造になってしまった．
 * (「i 番目の A_i」は「map[(i,A_i)]回登場する」とできるとスマートでよい感じだったのに)
**/
signed main() {
  int N, A_i;
  vector<int> A; // 数列 A
  unordered_map<int, unordered_map<int, int>> m; // A_i をキーにマップを返す．そのマップは各 A_k の添字 k をキーに，数列で k 番目以降に A_k が登場する回数を返す
  unordered_map<int, int> count; // A_i をキーにその数字が数列 A 中で登場した回数を返す

  cin >> N;
  for (int i = 0; i < N; ++i) {
    cin >> A_i;
    A.push_back(A_i); // 数列 A を格納
    count[A_i]++; // 各数字が登場した回数を記録
  }

  for (int i = 0; i < N; ++i) {
    m[A[i]][i + 1] = count[A[i]] - 1; // 数列 A_i の値は i+1 番目以降に count[A_i]-1 回登場 (vector A を除き i ではなく i+1 が序数なことに気をつける)
    count[A[i]]--; // i 番目以降に登場する A_i の回数は1回減る
  }

  long sum = 0; // 組み合わせ総数は int に収まらない(最大で約 10^11 になる)
  for (int i = 0; i < N; ++i) {
    sum += (long)(N - (i + 1) - m[A[i]][i + 1]); // A_i で作れる組の数は「A_i 以降のうち A_i とは異なる数の個数」なので，(A_i 以降の部分列の長さ(= N-(i+1) ) - (A_i 以降の A_i と同じ数が登場する回数) で求められる
  }

  cout << sum;

  return 0;
}