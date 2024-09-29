#include <bits/stdc++.h>

using namespace std;

void sol() {}
int main(int argc, char *argv[]) {
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int tt;
  cin >> tt;

  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    int max = -1;
    int k = -1;
    int j = 0;
    for (auto &i : a) {
      cin >> i;
      if (i > max) {
        k = j;
        max = i;
      }
      if (i == max && j % 2 == 0) {
        k = j;
      }
      j++;
    }

    if (n % 2 == 0) {
      cout << max + n / 2;
    } else {
      if (k % 2 == 0) {
        cout << max + n / 2 + 1;
      } else {
        cout << max + n / 2;
      }
    }
    cout << "\n";
  }

  return 0;
}
