

#include <iostream>
#include <set>
using namespace std;

void sol() {
  int n, m;
  cin >> n >> m;

  int tScore = 0;
  string ans = "narek";
  set<char> narek;
  narek.insert('n');
  narek.insert('a');
  narek.insert('r');
  narek.insert('e');
  narek.insert('k');
  for (int i = 0; i < n; i++) {
    int curScore = 0;
    int cw = 0;
    for (int j = 0; j < m; j++) {
      char k;
      cin >> k;
      if (ans[cw] == k) {
        cw += 1;
        if (cw == 5) {
          curScore += 5;
          cw = 0;
        }
      } else {
        if (narek.count(k)) {
          curScore -= 1;
        }
      }
    }
    if (cw != 0) {
      curScore -= cw;
    }
    if (curScore > 0) {
      tScore += curScore;
    }
  }
  cout << tScore << "\n";
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int t;
  cin >> t;
  while (t--) {
    sol();
  }
}
