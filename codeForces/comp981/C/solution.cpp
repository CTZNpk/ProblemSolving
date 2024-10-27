
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }

  auto check = [&](int i) {
    int other = n - i - 1;
    int curr = 0;
    if (i > 0) {
      if (a[i - 1] == a[i]) {
        curr++;
      }
    }
    if (a[i + 1] == a[i]) {
      curr++;
    }
    if (other - 1 != i && a[other - 1] == a[i]) {
      curr--;
    }

    if (other < n - 1) {
      if (a[other + 1] == a[i]) {
        curr--;
      }
    }
    return curr;
  };

  for (int j = 0; j < n; j++) {
    bool f = true;
    for (int i = 0; i < n / 2; i++) {
      int c1 = check(i);
      int c2 = check(n - i - 1);
      // cout << i << "\n";
      // cout << c1 << " " << c2 << "\n";
      if (c1 + c2 <= 0) {
        continue;
      }
      f = false;
      swap(a[i], a[n - i - 1]);
    }
    // if (f) {
    //   break;
    // }
  }
  // for (auto &i : a) {
  //   cout << i << " ";
  // }
  // cout << "\n";
  int db = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] == a[i - 1]) {
      db++;
    }
  }
  cout << db << "\n";
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
