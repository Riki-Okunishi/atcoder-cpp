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
  long K;
  int N, a_i;
  cin >> N >> K;

  using mytuple = tuple<int, int, long>; // tuple の型が長いので別名を付ける．
  vector<mytuple> v;  // 国民番号, 与えられた順番(i), 持っているお菓子の数
  for (int i = 0; i < N; ++i) {
    cin >> a_i;
    v.push_back(make_tuple(a_i, i, 0));
  }

  sort(v.begin(), v.end()); // 比較関数を渡していないので，tuple の始めの要素からの昇順で並ぶ．国民番号は一意なので問題ない．

  long candy_num = K / N; // 国民全員が貰えるお菓子の数
  long surplus = K % N; // 1 つ多くお菓子が貰える国民の数

  for (int i = 0; i < N; ++i) {
    if (i < surplus) { // 国民番号の若い順で始めの K % N 人は1つ多くお菓子が貰える．
      get<2>(v[i]) = candy_num + 1;
    } else {
      get<2>(v[i]) = candy_num;
    }
  }

 // ラムダ式で比較関数を渡す．tuple の2番めの要素(始めに与えられた順番)になるように昇順でソート．これも一意なので問題ないが，念の為 0 番目や 2 番目の要素での比較も実装．
  sort(v.begin(), v.end(), [](mytuple const &lhs, mytuple const &rhs) {
    if (get<1>(lhs) != get<1>(rhs)) return get<1>(lhs) < get<1>(rhs);
    if (get<0>(lhs) != get<0>(rhs)) return get<0>(lhs) < get<0>(rhs);
    return get<2>(lhs) != get<2>(rhs);
  });

  for (tuple<int, int, long> t : v) {
    cout << get<2>(t) << endl;
  }

  return 0;
}