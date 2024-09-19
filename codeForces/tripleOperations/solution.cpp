#include <bits/stdc++.h>

using namespace std;

const int MAX = 200007;

int a[MAX], pSum[MAX];

// int f(int x) {
//   int cnt = 0;
//   while (x) {
//     x /= 3;
//     cnt += 1;
//   }
//   return cnt;
// }

void solve() {
  int l, r;
  cin >> l >> r;
  cout << pSum[r] - pSum[l - 1] + a[l] << "\n";
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  pSum[0] = 0;
  for (int i = 1; i < MAX; i++) {
    a[i] = a[i / 3] + 1;
    pSum[i] = pSum[i - 1] + a[i];
  }
  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
