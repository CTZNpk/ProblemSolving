#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

int query(int l, int r) {
  cout << "? " << l + 1 << " " << r + 1 << "\n";
  int ans;
  cin >> ans;
  return ans;
}

void sol() {
  int n;
  cin >> n;
  string a = "";

  int l = 0, r = 1;
  while (r < n) {
    int ans = query(l, r);
    if (ans != 0) {
      int tempL = l;
      while (r - l > ans) {
        a += '1';
        l++;
      }
      while (l < r) {
        a += '0';
        l++;
      }
      a += '1';
      r++;
      while (r < n) {
        int newAns = query(tempL, r);
        if (ans != newAns) {
          a += '1';
          ans = newAns;
          l++;
          r++;
        } else {
          break;
        }
      }
      l++;
      r++;
    } else {
      r++;
    }
  }
  if (l == 0) {
    cout << "! " << "IMPOSSIBLE\n";
    return;
  }
  while (a.size() < n) {
    a += '0';
  }
  cout << "! " << a << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
