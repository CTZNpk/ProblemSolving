
#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>

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
  int l = 0, r = n - 1;
  while (l < r) {
    if (a[l] == 0) {
      l++;
    } else {
      break;
    }
  }

  while (l < r) {
    if (a[r] == 2) {
      r--;
    } else {
      break;
    }
  }
  vector<pair<int, int>> swaps;
  while (l < r) {
    if (a[r] == 1) {
      if (a[l] == 1) {
        swaps.push_back({l + 1, r + 1});
        l++;
        r--;
      } else if (a[l] == 2) {
        swaps.push_back({l + 1, r + 1});
        while (l < r) {
          r--;
          if (a[r] != 2) {
            break;
          }
        }
        swaps.push_back({l + 1, r + 1});
        a[r]++;
        if (a[r] != 1)
          r--;
        l++;
      } else {
        l++;
      }
    } else if (a[r] == 0) {
      if (a[l] == 1) {
        swaps.push_back({l + 1, r + 1});
        a[r]++;
        l++;
      } else if (a[l] == 2) {
        swaps.push_back({l + 1, r + 1});
        swaps.push_back({l + 1, r + 1});
        l++;
        r--;
      } else {
        l++;
      }
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
