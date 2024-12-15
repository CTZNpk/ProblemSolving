#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  vi b(n);
  for (auto &i : b) {
    cin >> i;
  }
  int m;
  cin >> m;
  map<int, int> c;
  int lst;
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    c[k]++;
    lst = k;
  }
  bool flag = false;
  for (int i = 0; i < n; i++) {
    if (b[i] == lst) {
      flag = true;
      break;
    }
  }
  if (!flag) {
    cout << "No\n";
    return;
  }
  for (int i = 0; i < n; i++) {
    if (b[i] != a[i]) {
      c[b[i]]--;
      if (c[b[i]] < 0) {
        cout << "No\n";
        return;
      }
    }
  }
  cout << "Yes\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
