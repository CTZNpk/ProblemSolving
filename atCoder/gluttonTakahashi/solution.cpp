#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  bool f = false;
  for (int i = 0; i < n; i++) {
    string k;
    cin >> k;
    if (f && k == "sweet") {
      if (i == n - 1) {
        break;
      }
      cout << "No\n";
      return 0;
    } else if (k == "sweet") {
      f = true;
    } else {
      f = false;
    }
  }
  cout << "Yes\n";

  return 0;
}
