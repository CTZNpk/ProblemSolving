#include <bits/stdc++.h>

int binexp(int n, int p, int m) {
  int ans = 1;
  n %= m;
  while (p) {
    if (p & 1) {
      ans = (ans * n) % m;
    }
    n = (n * n) % m;
    p >>= 1;
  }
  return ans;
}

int main() {
  int n = 4;
  int p = 3;
  std::cout << binexp(4, 4, 100);
}
