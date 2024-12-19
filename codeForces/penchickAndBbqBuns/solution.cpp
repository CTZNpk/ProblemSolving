#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

void sol() {
  int n;
  cin >> n;
  if (n < 26 && n % 2) {
    cout << -1 << "\n";
    return;
  }
  vi ans(n);
  if (n % 2) {
    ans[0] = 1;
    ans[9] = 1;
    ans[25] = 1;
    ans[10] = 2;
    ans[26] = 2;

    int cnt = 0;
    int curr = 3;
    for (int i = 0; i < n; i++) {
      if (i != 0 && i != 9 && i != 25 && i != 10 && i != 26) {
        ans[i] = curr;
        cnt++;
        if (cnt == 2) {
          curr++;
          cnt = 0;
        }
      }
    }
    for (auto &i : ans) {
      cout << i << " ";
    }
    cout << "\n";

  } else {
    int i = 0;
    while (n--) {
      if (n % 2) {
        i++;
      }
      cout << i << " ";
    }
  }
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
