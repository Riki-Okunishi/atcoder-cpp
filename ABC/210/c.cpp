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

// めんどいし終了
signed main() {
  int N, K, c_i;
  cin >> N >> K;
  vector<int> v;
  for(int i=0; i< N; ++i){
    cin >> c_i;
    v.push_back(c_i);
  }
  map<int, int> colors;
  for(int i=0; i< K; ++i){
    colors[v[i]]++;
  }
  int c = colors.size(), c_max = colors.size();
  int index = 0;
  for(int i=K;i < N-K; ++i){
    if(colors[v[i]]==0 && colors[v[i-K]]>1){
      colors[v[i]]++;
      colors[v[i-K]]--;
      c++;
      if(c>c_max){
        c_max = c;
      }
    }else if((colors[v[i]]==0 && colors[v[i-K]] == 1 ) || colors[v[i]] == colors[v[i-K]]){
      colors[v[i]]++;
      colors[v[i - K]]--;
    }else {
      colors[v[i]]++;
      colors[v[i-K]]--;
      c--;
    }
  }
  cout << c_max;
  return 0;
}