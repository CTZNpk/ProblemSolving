#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

int main(int argc, char *argv[]) {
  int n, a;
  cin >> n >> a;

  vi t(n);

  for (auto &i : t) {
    cin >> i;
  }
  vi ans(n);

  for (int i = 0; i < n; i++) {
    ans[i] = t[i] + a;
    if (i != n - 1) {
      t[i + 1] = max(t[i + 1], t[i] + a);
    }
  }

  for (auto &i : ans) {
    cout << i << "\n";
  }

  return 0;
}
