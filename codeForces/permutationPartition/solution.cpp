#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll M = 998244353;

int main(int argc, char *argv[]) {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (auto &i : a) {
    cin >> i;
  }
  int dist = n - k;
  ll first = 0;
  set<int> found;
  while (n > dist) {
    found.insert(n);
    first += n--;
  }

  ll second = 1;
  bool look = false;
  int curr = 0;
  for (auto &i : a) {
    if (found.count(i)) {
      if (look) {
        second = (second * (curr % M)) % M;
        curr = 0;
      } else {
        look = true;
      }
    }
    if (look) {
      curr++;
    }
  }

  cout << first << " " << second << "\n";
  return 0;
}
