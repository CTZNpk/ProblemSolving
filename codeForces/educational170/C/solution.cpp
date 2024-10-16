#include <bits/stdc++.h>

using namespace std;

#define fastIO                                                                 \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);                                                              \
  cout.precision(numeric_limits<double>::max_digits10);

void CoderAbhi27() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  map<int, int> f;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    f[a[i]]++;
  } // nlogn

  int l = -1, st = -1, cnt = 0, mx = 0;
  for (auto p : f) {
    if (l != p.first - 1) {
      st = p.first;
      cnt = p.second;
    } else {
      if (p.first - st + 1 > k) {
        cnt -= f[p.first - k]; // logn
      }
      cnt += p.second;
    }
    l = p.first;
    mx = max(mx, cnt);
  }
  cout << mx << '\n';
} // nlogn

// tc -> O(nlogn)
// tc -> O(n)

int32_t main() {
  fastIO;

  int t = 1;
  cin >> t;
  while (t--) {
    CoderAbhi27();
  }
  return 0;
}
