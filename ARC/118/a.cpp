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

signed main() {
  ll t, N;
  // cin >> t >> N;
  t = 50;
  N = 1000000000;

  long double t_ld = t * 0.01;
  long double N_ld = N * 1.0;
  long double result_ld = floorl(((long double)1.0 + t_ld) * ceill(N_ld / t_ld));
  ll result = static_cast<ll>(result_ld - 1.0);

  cout << result;

  return 0;
}