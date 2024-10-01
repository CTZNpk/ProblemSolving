#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;

  cin >> tt;
  while (tt--) {
    ll k;
    cin >> k;
    ll left = 1, right = 4e18;
    while (left <= right) {
      ll mid = (left + right) / 2;
      ll bulbs = mid - (int)sqrtl(mid);
      if (bulbs < k) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }
    cout << right + 1 << "\n";
  }

  return 0;
}
