#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  vector<int> a(n);
  for (auto &i : a) {
    cin >> i;
  }
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    ans[a[i] - 1] = i + 1;
  }
  for (auto i : ans) {
    cout << i << " ";
  }

  return 0;
}
