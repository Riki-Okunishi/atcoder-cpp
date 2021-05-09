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
 * nC2 の組み合わせの個数を求める関数
 * 組み合わせの総数がintの最大値を超える場合(コーナーケース)があるのでlong long型を返さないとACしない
 * 戻り値の計算でのオーバーフローを考慮すると，引数もlong long型が望ましい．
 */
ll combination2(ll n) {
  if (n < 2) return 0; // このガードがあるためにn=1の場合も扱える
  return n * (n - 1) / 2; // nC2しか考えないのでこの計算で済む
}

/**
 * この問題では「2つの数の差が200の倍数かどうか」を考える必要はない．
 * 「2つの数の差が200の倍数になる」ことは「2つの数はそれぞれ200で割った余りが等しい」ことを意味する．
 * つまり，与えられる数列の数すべてを200で割った余りで分類すれば，差が200の倍数になる組が存在するか分かる．
 * そして，同じ余りになる数の個数をもとに組み合わせを計算すれば，その数で何組存在するか求められる．
 * これをすべての余りの場合で計算すれば答えが求まる．
*/
signed main() {
  int N;
  ll A_i;
  unordered_map<int, ll> As; // 数列の値を200で割った余りと，同じ余りになる個数を紐付けるMap

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A_i;
    As[A_i % 200] += 1; // 数列の値A_iを200で割った余りを求め，対応する個数をインクリメント
  }

  ll result = 0; // 求める組み合わせ総数もlong long型である必要がある
  for (auto it = As.begin(); it != As.end(); it++) { // イテレータを使ってmapを全探索．mapなので個数が0個の場合は探索せずに済む
    result += combination2(it->second); // mapの値，つまり同じ余りになった個数をもとに，組み合わせの総数を計算
  }

  cout << result;
  return 0;
}