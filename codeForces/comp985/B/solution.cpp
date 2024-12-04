
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  string s, r;
  cin >> s;
  cin >> r;

  int cnt1 = 0, cnt0 = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '1') {
      cnt1++;
    } else {
      cnt0++;
    }
  }
  if (cnt1 == 0 || cnt0 == 0) {
    cout << "NO\n";
    return;
  }
  int maj = 0;
  if (cnt1 > cnt0) {
    maj = 1;
  } else if (cnt1 == cnt0) {
    maj = -1;
  }
  for (int i = 0; i < r.length(); i++) {
    if (r[i] == '1') {
      cnt0--;
    } else {
      cnt1--;
    }
  }
  if (maj == 1) {
    if (cnt1 == 1 && r[r.length() - 1] == '1') {
      cout << "YES\n";
    } else if (cnt1 == 0) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  } else if (maj == 0) {
    if (cnt0 == 1 && r[r.length() - 1] == '0') {
      cout << "YES\n";
    } else if (cnt0 == 0) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  } else {
    if (cnt0 == 1 && r[r.length() - 1] == '0') {
      cout << "YES\n";
    } else if (cnt1 == 1 && r[r.length() - 1] == '1') {
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
