

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
  vll d(n);
  for (auto &i : a) {
    cin >> i;
  }
  for (auto &i : d) {
    cin >> i;
  }

  map<int, int> totalDed;
  vi deadNow;
  vi left(n);
  vi right(n);
  iota(all(left), -1);
  iota(all(right), 1);
  right[n - 1] = -1;

  auto updateDamage = [&](int i, vi &ded) {
    if (totalDed[i] > 0) {
      return;
    }
    if (i < 0 || i >= n)
      return;
    ll damage = 0;
    if (left[i] == -1) {
      if (right[i] != -1) {
        damage = a[right[i]];
      }
    } else if (right[i] == -1) {

      if (left[i] != -1) {
        damage = a[left[i]];
      }
    } else {
      damage += a[left[i]];
      damage += a[right[i]];
    }
    // cout << i << "\n";
    // cout << damage << "\n";
    if (damage > d[i]) {
      if (left[i] != -1) {
        right[left[i]] = right[i];
      }
      if (right[i] != -1) {
        left[right[i]] = left[i];
      }
      // cout << i << "\n";
      if (totalDed[i] == 0) {
        ded.push_back(i);
        totalDed[i]++;
      }
    }
  };
  for (int i = 0; i < n; i++) {
    updateDamage(i, deadNow);
  }
  cout << deadNow.size() << " ";
  for (int i = 0; i < n - 1; i++) {
    vi temp;
    // cout << "HEH\n";
    // for (int i = 0; i < deadNow.size(); i++) {
    //   cout << deadNow[i] << " ";
    // }
    // cout << "\n";
    // cout << "LEFT\n";
    // for (int i = 0; i < n; i++) {
    //   cout << left[i] << " ";
    // }
    // cout << "\n";
    // cout << "RIGHT\n";
    // for (int i = 0; i < n; i++) {
    //   cout << right[i] << " ";
    // }
    // cout << "\n";
    while (deadNow.size()) {
      // cout << "HELLO\n";
      int curr = deadNow.back();
      deadNow.pop_back();
      updateDamage(curr + 1, temp);
      updateDamage(curr - 1, temp);
    }
    deadNow = temp;
    cout << deadNow.size() << " ";
  }
  cout << "\n";
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
