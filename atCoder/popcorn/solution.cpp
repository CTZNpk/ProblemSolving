#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for (auto &i : s) {
    cin >> i;
  }

  string completed = "";
  string st = "";
  for (int j = 0; j < m; j++) {
    st += "x";
    completed += "o";
  }
  auto f = [&](int &count, int i, string &done, auto &&self) -> int {
    if (i >= n) {
      if (done == completed) {
        return count;
      } else {
        return 11;
      }
    }

    string newDone = done;
    for (int j = 0; j < m; j++) {
      if (newDone[j] == 'x') {
        newDone[j] = s[i][j];
      }
    }
    int c = count + 1;
    return min(self(c, i + 1, newDone, self), self(count, i + 1, done, self));
  };

  int c = 0;
  cout << f(c, 0, st, f) << "\n";
  return 0;
}
