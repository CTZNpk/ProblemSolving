#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>

void sol() {
  int n;
  cin >> n;
  vi a(n);

  for (auto &i : a) {
    cin >> i;
  }

  vi cnt(31, 0);

  for (auto &i : a) {
    int bitNum = 0;
    while (i) {
      if (i & 1) {
        cnt[bitNum]++;
      }

      bitNum++;
      i >>= 1;
    }
  }

  int minBit = INT_MAX;
  for (int i = 0; i < 31; i++) {
    if (cnt[i] != 0) {
      minBit = min(minBit, cnt[i]);
    }
  }
  if (minBit == INT_MAX) {
    for (int i = 0; i < n; i++) {
      cout << i + 1 << " ";
    }
  } else {
    for (int i = 1; i <= minBit; i++) {
      bool t = true;
      for (int j = 0; j <= 30; j++) {
        if (cnt[j] % i) {
          t = false;
          break;
        }
      }
      if (t) {
        cout << i << " ";
      }
    }
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
