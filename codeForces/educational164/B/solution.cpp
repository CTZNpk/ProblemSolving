
#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pb push_back

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  int ans = 3e5;
  int left = 1;
  for (int i = 1; i < n - 1; i++) {
    if (a[i] == a[i - 1]) {
      left++;
    } else {
      int right = 1;
      while (i + right < n) {
        if (a[i - 1] == a[i + right]) {
          right++;
        } else {
          break;
        }
      }
      int curr = min(left, right - 1);
      ans = min(ans, curr);
      i += right - 1;
      left = right - 1;
    }
  }
  if (ans == 3e5) {
    cout << -1 << "\n";
  } else {
    cout << ans << "\n";
  }
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt;
  cin >> tt;

  while (tt--) {
    sol();
  }

  return 0;
}
