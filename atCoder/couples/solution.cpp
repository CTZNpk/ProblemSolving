#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  n *= 2;
  vector<int> a(n);
  for (auto &i : a) {
    cin >> i;
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (i > 1) {
      if (a[i - 2] == a[i]) {
        count++;
      }
    }
    if (i < n - 2) {
      if (a[i + 2] == a[i]) {
        count++;
      }
    }
  }
  cout << count / 2;

  return 0;
}
