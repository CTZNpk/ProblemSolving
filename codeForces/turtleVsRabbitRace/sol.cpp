#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi com(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    int p;
    cin >> p;
    com[i] = com[i - 1] + p;
  }

  int q;
  cin >> q;

  while (q--) {
    int l, u;
    cin >> l >> u;
    l--;
    u += com[l];
    int k = prev(upper_bound(all(com), u)) - com.begin();
    int rem = u - com[k];
    while (k < n) {
      int nxt = com[k + 1] - com[k];
      if (nxt <= 2 * rem) {
        k++;
      } else {
        break;
      }
      rem -= nxt;
    }
    if (k <= l) {
      cout << l + 1 << " ";
    } else {
      cout << k << " ";
    }
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
