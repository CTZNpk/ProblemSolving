#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  int ans = a[0];
  for (auto &i : a) {
    ans &= i;
  }
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
