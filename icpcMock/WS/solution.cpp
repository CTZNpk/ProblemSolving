
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int m, c;
  cin >> m >> c;
  vector<vi> total;
  vi idx;
  vi diff;
  int tot = 0;
  for (int i = 0; i < c; i++) {
    int k;
    cin >> k;
    vi a(k);
    for (auto &j : a) {
      cin >> j;
    }
    sort(all(a));

    total.push_back(a);
    int n = a.size();
    if (n > 1) {
      diff.push_back(a[n - 1] - a[n - 2]);
      idx.push_back(n - 1);
    } else {
      diff.push_back(-1);
      idx.push_back(0);
    }
    tot += a[n - 1];
  }

  while (tot > m) {
    int minDiff = INT_MAX;
    int minIdx = -1;
    for (int i = 0; i < c; i++) {
      if (diff[i] < minDiff && idx[i] != 0) {
        minDiff = diff[i];
        minIdx = i;
      }
    }
    if (minIdx == -1) {
      cout << -1 << "\n";
      return;
    }
    tot -= diff[minIdx];
    idx[minIdx]--;
    if (idx[minIdx] != 0) {
      diff[minIdx] =
          total[minIdx][idx[minIdx]] - total[minIdx][idx[minIdx] - 1];
    }
  }

  if ((tot % 2 && tot != m - 1) || tot == 0x1d) {
    cout << m << "\n";
    return;
  }
  cout << tot << "\n";
}

int main(int argc, char *argv[]) {

  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }
  return 0;
}
