#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n, k, q;
  cin >> n >> k >> q;
  vector<vi> vec(k, vi(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      int p;
      cin >> p;
      if (i == 0) {
        vec[j][i] = p;
      } else {
        vec[j][i] = vec[j][i - 1] | p;
      }
    }
  }
  for (int i = 0; i < q; i++) {
    int l;
    cin >> l;
    int lower = 0, upper = n;
    for (int j = 0; j < l; j++) {
      int r, c;
      char o;
      cin >> r >> o >> c;
      r--;
      if (o == '>') {
        lower = max(lower, int(upper_bound(vec[r].begin(), vec[r].end(), c) -
                               vec[r].begin()));
      } else {
        upper = min(upper, int(lower_bound(vec[r].begin(), vec[r].end(), c) -
                               vec[r].begin()));
      }
    }
    if (lower >= upper) {
      cout << -1 << "\n";
    } else {
      cout << lower + 1 << "\n";
    }
  }
}

int main(int argc, char *argv[]) {
  sol();

  return 0;
}
