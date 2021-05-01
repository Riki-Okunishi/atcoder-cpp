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
  list<char> l;

  string T="";
  string S;
  cin >> S;
  bool push_back = true;
  for (int i = 0; i < (int)S.length(); i++){
    if(S[i] == 'R'){
      push_back = !push_back;
    }else{
      if(push_back){
        if(l.back() == S[i]){
          l.pop_back();
        } else {
          l.push_back(S[i]);
        }
      }else{
        if(l.front() == S[i]){
          l.pop_front();
        }else{
          l.push_front(S[i]);
        }
      }
    }
  }

  if(push_back){
    for (auto it = l.begin(); it != l.end(); ++it) {
      T+= *it;
    }
  }else{
    for (auto it = l.rbegin(); it != l.rend(); ++it) {
      T+= *it;
    }
  }
  cout << T; // forの中にcout入れてて爆死ワロタ
  return 0;
}