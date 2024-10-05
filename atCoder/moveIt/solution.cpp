#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> w(n);
  for (auto &i : a) {
    cin >> i;
  }

  for (auto &i : w) {
    cin >> i;
  }
  map<int, int> mx;

  int total = 0;
  for (int i = 0; i < n; i++) {
    total += w[i];
    mx[a[i]] = max(mx[a[i]], w[i]);
  }

  for (auto i : mx) {
    total -= i.second;
  }
  cout << total;

  return 0;
}
