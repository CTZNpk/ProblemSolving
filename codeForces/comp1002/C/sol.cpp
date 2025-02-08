#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vector<vi> a(n, vi(n, 0));
  for (auto &i : a) {
    for (auto &j : i) {
      cin >> j;
    }
  }

  vi ans;
  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = n - 1; j >= 0; j--) {
      if (a[i][j] == 1) {
        cnt++;
      } else {
        break;
      }
    }
    ans.push_back(cnt);
  }

  sort(all(ans));

  int mex = 0;
  for (int i = 0; i < n; i++) {
    if (ans[i] >= mex) {
      mex++;
    }
  }
  cout << mex << "\n";
}
int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
