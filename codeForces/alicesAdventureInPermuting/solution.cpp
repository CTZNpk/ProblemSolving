#include <bits/stdc++.h>

using namespace std;

#define ll long long

void sol() {
  ll n, b, c;
  cin >> n >> b >> c;
  if (b == 0 && c < n - 2) {
    cout << -1 << "\n";
    return;
  }
  if (b == 0) {
    cout << (c <= n - 1 ? n - 1 : n) << "\n";
    return;
  }

  ll alreadyPlaced = 0;
  if (c < n)
    alreadyPlaced = (n - c - 1) / b + 1;
  cout << n - alreadyPlaced << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
