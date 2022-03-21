#include "bits/stdc++.h"

using namespace std;

int main() {
  long long k = 5;
  
  string binary;
  while (k > 0) {
    binary.push_back('0' + k % 2);
    k /= 2;
  }
  reverse(binary.begin(), binary.end());
  for (auto &nx : binary) {
    if (nx == '1') {
      cout << '2';
    } else {
      cout << '0';
    }
  }
  cout << '\n';
}
