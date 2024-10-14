
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string first, sec;
    cin >> first >> sec;

    auto k = [&](auto &&s, int f, int l, int count) -> int {
      if (f >= n && l >= n) {
        return count;
      }
      int mx = 0;
      if (f + 3 <= n && l + 3 <= n) {
        int a = 0;

        for (int i = f; i < f + 3; i++) {
          a += (first[i] == 'A');
        }
        for (int i = l; i < l + 3; i++) {
          a += (sec[i] == 'A');
        }
        if (a == 6) {
          a--;
        }
        mx = max(s(s, f + 3, l + 3, count + a / 2), mx);
      }
      if (f < n && l + 2 <= n) {
        int a = 0;

        for (int i = f; i < f + 1; i++) {
          a += (first[i] == 'A');
        }
        for (int j = l; j < l + 2; j++) {
          a += (sec[j] == 'A');
        }
        mx = max(s(s, f + 1, l + 2, count + a / 2), mx);
      }
      if (f + 2 <= n && l < n) {
        int a = 0;
        for (int i = f; i < f + 2; i++) {
          a += (first[i] == 'A');
        }
        for (int j = l; j < l + 1; j++) {
          a += (sec[j] == 'A');
        }

        mx = max(s(s, f + 2, l + 1, count + a / 2), mx);
      }
      return mx;
    };
    cout << k(k, 0, 0, 0) << "\n";
  }

  return 0;
}
