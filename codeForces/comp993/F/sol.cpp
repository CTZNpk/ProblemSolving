#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n, m, q;
  cin >> n >> m >> q;
  vi a(n);
  vi b(m);
  bool colZero = false;
  bool rowZero = false;
  int colSum = 0;
  int rowSum = 0;
  for (auto &i : a) {
    cin >> i;
    colSum += i;
    if (i == 0) {
      colZero = true;
    }
  }
  for (auto &i : b) {
    cin >> i;
    rowSum += i;
    if (i == 0) {
      rowZero = true;
    }
  }
  vll possVal;
  ll totalSum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i] == 0 && a[j] == 0) {
        possVal.push_back(0);
        i++, j = 0;
      } else if (a[i] == 0) {
        possVal.push_back(colSum);
        i++, j = 0;
      } else if (a[j] == 0) {
        possVal.push_back(rowSum);
        j++;
      } else {
        totalSum += a[i] * b[j];
        possVal.push_back(rowSum + colSum - a[i] * b[j]);
      }
    }
  }
  sort(all(possVal));
  for (int i = 0; i < possVal.size(); i++) {
    cout << possVal[i] << ' ';
  }
  while (q--) {
    int k;
    cin >> k;
    int val = *lower_bound(all(possVal), totalSum - k);
    cout << val << " ";
    if (val == totalSum - k) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}

int main() { sol(); }
