#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n, k, l;
  cin >> n >> k >> l;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  int time = 2 * a[0];
  int bank = a[0];
  int crPos = k;

  int curr = 1;
  while (curr < n) {
    if (a[curr] < crPos) {
      a[curr] = min(crPos, a[curr] + bank);
      if (a[curr] < crPos) {
        if (l <= crPos + k) {
          if (curr != n - 1) {
            a[curr + 1] -= bank;
            if (a[curr + 1] <= crPos) {
              cout << time << "\n";
              return;
            }
            time += min(crPos - a[curr], a[curr + 1] - crPos);
            curr++;
          }
        }
      }
      crPos = a[curr] + k;
      curr++;
    } else {
      if (a[curr] - bank <= crPos) {
        crPos = crPos + k;
      }
      int travel = (a[curr] - crPos) / 2;
      time = travel * 2;
      bank += travel;
      curr++;
    }
  }
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
