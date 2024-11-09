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

  bool asc = a[0] < a[1];

  vi as;
  as.push_back(a[0]);

  for (int i = 1; i < n; i++) {
    if (asc) {
      if (a[i] < a[i - 1]) {
        as.push_back(a[i - 1]);
        asc = false;
      }

    } else {
      if (a[i] > a[i - 1]) {
        as.push_back(a[i - 1]);
        asc = true;
      }
    }
  }
  as.push_back(a[n - 1]);
  cout << as.size() << "\n";
  for (auto &i : as) {
    cout << i << " ";
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
