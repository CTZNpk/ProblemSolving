
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

int tt;

void sol() {
  int n, l, r;
  cin >> n >> l >> r;

  vi lef(l);
  vi cntL(n + 1, 0);
  for (auto &i : lef) {
    cin >> i;
    cntL[i]++;
  }

  vi ri(r);
  vi cntR(n + 1, 0);
  for (auto &i : ri) {
    cin >> i;
    cntR[i]++;
  }

  int ans = 0;
  int diff = abs(r - l);
  if (l < r) {
    for (int i = 0; i < l; i++) {
      if (cntR[lef[i]]) {
        cntR[lef[i]]--;
      } else {
        ans += 1;
      }
    }
    /*
1
6 2 4
1 1 4 6 4 6
      */
    for (int i = 0; i <= n; i++) {
      bool broke = false;
      while (cntR[i] > 1) {
        ans += 1;
        diff -= 2;
        cntR[i] -= 2;
        if (diff == 0) {
          broke = true;
          break;
        }
      }
      if (broke)
        break;
    }
  } else {
    for (int i = 0; i < r; i++) {
      if (cntL[ri[i]]) {
        cntL[ri[i]]--;
      } else {
        ans += 1;
      }
    }
    if (diff)
      for (int i = 0; i <= n; i++) {
        bool broke = false;
        while (cntL[i] > 1) {
          ans += 1;
          diff -= 2;
          cntL[i] -= 2;
          if (!diff) {
            broke = true;
            break;
          }
        }

        if (broke)
          break;
      }
  }
  ans += diff;
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
