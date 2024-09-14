#include <iostream>
#include <set>
#include <vector>
using namespace std;

void sol() {
  int n, m, q;
  cin >> n >> m >> q;
  set<int> b;
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    b.insert(k);
  }

  for (int i = 0; i < q; i++) {
    int p;
    cin >> p;

    auto it = b.lower_bound(p);
    if (it != b.end() && it != b.begin()) {
      cout << (*it - *prev(it)) / 2 << "\n";
    } else if (it == b.begin()) {
      cout << *it - 1 << "\n";
    } else {
      cout << n - *prev(it) << "\n";
    }
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int t;
  cin >> t;

  while (t--) {
    sol();
  }
  return 0;
}
