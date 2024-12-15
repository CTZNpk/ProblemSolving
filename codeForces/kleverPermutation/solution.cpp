#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

void sol() {
  int n, k;
  cin >> n >> k;
  int l = 1, r = n;

  bool f = true;
  vi perm(n);
  for (int i = 0; i < k; i++) {
    f = i % 2 == 0;
    for (int j = i; j < n; j += k) {
      if (f) {
        perm[j] = l;
        l++;
      } else {
        perm[j] = r;
        r--;
      }
    }
  }
  for (auto &i : perm) {
    cout << i << " ";
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }
  return 0;
}
