
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  string s;
  cin >> s;
  int k;
  cin >> k;

  set<int> indices;
  for (int i = 0; i < s.size() - 3; i++) {
    if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
      indices.insert(i);
    }
  }

  auto check = [&](int i) {
    if (i >= s.size() - 3) {
      return;
    }
    if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
      indices.insert(i);
    }
  };
  while (k--) {
    int i, v;
    cin >> i >> v;
    i--;
    for (int j = i; j >= max(i - 3, 0); j--) {
      if (indices.find(j) != indices.end()) {
        indices.erase(j);
      }
    }
    s[i] = v + '0';
    for (int j = i; j >= max(i - 3, 0); j--) {
      check(j);
    }
    if (!indices.empty()) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
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
