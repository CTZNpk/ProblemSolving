

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }
  vll left(n);
  left[0] = 0;
  left[1] = 1;
  for (int i = 2; i < n; i++) {
    ll dist1 = a[i - 1] - a[i - 2];
    ll dist2 = a[i] - a[i - 1];
    if (dist1 < dist2) {
      left[i] = left[i - 1] + dist2;
    } else {
      left[i] = left[i - 1] + 1;
    }
  }
  vll right(n);
  right[0] = 0;
  right[1] = 1;

  for (int i = n - 3; i >= 0; i--) {
    ll dist1 = a[i + 2] - a[i + 1];
    ll dist2 = a[i + 1] - a[i];
    if (dist1 < dist2) {
      right[n - i - 1] = right[n - i - 2] + dist2;
    } else {
      right[n - i - 1] = right[n - i - 2] + 1;
    }
  }

  // for (int i = 0; i < n; i++) {
  //   cout << left[i] << " ";
  // }
  // cout << "\n";
  //
  // for (int i = 0; i < n; i++) {
  //   cout << right[i] << " ";
  // }

  auto checkRight = [&](int l, int r) -> ll {
    ll check = right[r];
    if (l > 0)
      return check - right[l];
    return check;
  };

  auto checkLeft = [&](int l, int r) -> ll {
    ll check = left[r];
    if (l > 0)
      return check - left[l];
    return check;
  };

  ll m;
  cin >> m;
  while (m--) {
    int l, r;
    cin >> l >> r;
    r--;
    l--;
    if (l > r) {
      cout << checkRight(n - l - 1, n - r - 1) << "\n";
    } else {
      cout << checkLeft(l, r) << "\n";
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
