#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define vll vector<ll>

void sol() {
  int n;
  cin >> n;
  vi a(2 * n);
  int cnt1 = 0;
  int cnt0 = 0;
  for (auto &i : a) {
    cin >> i;
    if (i == 0) {
      cnt0++;
    } else {
      cnt1++;
    }
  }
  int sub = 0;
  if (cnt1 > n) {
    sub = cnt1 - n;
  }

  cout << cnt1 % 2 << " " << cnt1 - 2 * sub << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
