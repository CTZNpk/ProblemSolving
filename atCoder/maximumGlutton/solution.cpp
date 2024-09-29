#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()

int main(int argc, char *argv[]) {
  int n, x, y;
  cin >> n >> x >> y;

  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  vector<int> indices(n);
  iota(all(indices), 0);

  sort(all(indices), [&](int i, int j) { return a[i] < a[j]; });

  ll swe = 0;
  ll sal = 0;
  int i = 0;

  for (; i < n; i++) {
    swe += a[indices[i]];
    sal += b[indices[i]];
    if (swe > x || sal > y) {
      break;
    }
  }

  sort(all(indices), [&](int i, int j) { return b[i] < b[j]; });
  swe = 0;
  sal = 0;
  int j = 0;
  for (; j < n; j++) {
    swe += a[indices[i]];
    sal += b[indices[i]];
    if (swe > x || sal > y) {
      break;
    }
  }

  cout << i << " " << j << "\n";

  return 0;
}
