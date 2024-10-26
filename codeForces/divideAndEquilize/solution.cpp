#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

void addDivisors(int x, map<int, int> &mp) {
  int i = 2;
  while (i * i <= x) {
    while (x % i == 0) {
      mp[i]++;
      x /= i;
    }
    i++;
  }
  if (x > 1) {
    mp[x]++;
  }
}

void sol() {
  int n;
  cin >> n;
  map<int, int> mp;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
    addDivisors(i, mp);
  }
  for (auto &i : mp) {
    if (i.second % n != 0) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
