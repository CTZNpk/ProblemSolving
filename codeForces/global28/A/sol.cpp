#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  string n;
  cin >> n;
  int i = 0;

  while (true) {
    if (stoi(n) % 33 == 0) {
      cout << "YES\n";
      return;
    }
    if (i >= n.size() - 1) {
      cout << "NO\n";
      return;
    }
    while (i < n.size() - 1) {
      if (n[i] == n[i + 1] && n[i] == 3) {
        n.erase(i, 2);
        break;
      }

      i++;
      if (i == n.size() - 1) {
        cout << "NO\n";
        return;
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
