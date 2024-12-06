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
  ll oSum = 0, eSum = 0;
  ll oNum = (n + 1) / 2;
  ll eNum = n / 2;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      oSum += a[i];
    } else {
      eSum += a[i];
    }
  }
  // cout << oSum << " " << oNum << "\n";
  // cout << eSum << " " << eNum << "\n";

  if (oSum % oNum == 0 && eSum % eNum == 0 && oSum / oNum == eSum / eNum) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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
