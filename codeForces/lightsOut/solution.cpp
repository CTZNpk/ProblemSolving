
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  vector<vector<int>> ans(3, vector<int>(3, 1));

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int k;
      cin >> k;
      if (k % 2) {
        ans[i][j] = !ans[i][j];
        if (i != 2)
          ans[i + 1][j] = !ans[i + 1][j];
        if (i != 0)
          ans[i - 1][j] = !ans[i - 1][j];
        if (j != 2)
          ans[i][j + 1] = !ans[i][j + 1];
        if (j != 0)
          ans[i][j - 1] = !ans[i][j - 1];
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << ans[i][j];
    }
    cout << "\n";
  }

  return 0;
}
