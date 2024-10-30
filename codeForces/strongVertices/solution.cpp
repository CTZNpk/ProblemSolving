#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vll a(n), b(n);
  for (auto &i : a) {
    cin >> i;
  }
  for (auto &i : b) {
    cin >> i;
  }
  vll c(n);
  ll mx = 0;
  for (int i = 0; i < n; i++) {
    c[i] = a[i] - b[i];
    if (i == 0) {
      mx = c[i];
    }
    if (c[i] > mx) {
      mx = c[i];
    }
  }
  vi in;
  for (int i = 0; i < n; i++) {
    if (c[i] == mx) {
      in.push_back(i + 1);
    }
  }
  cout << in.size() << "\n";
  for (auto &i : in) {
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
