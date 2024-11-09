#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  vector<int> a(n);

  for (auto &i : a) {
    cin >> i;
  }

  ll ans = 1;
  bool look = false;
  ll curr = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == 1) {
      if (look) {
        ans *= curr;
        curr = 0;
      } else {
        look = true;
      }
    }
    if (look) {
      curr++;
    }
  }
  look ? cout << ans : cout << 0;

  return 0;
}
