#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  cout << 1 << " ";
  int r = 1;
  int count = 2;
  int l = 0;
  while (r < n) {
    while (l < r && a[l] < count) {
      l++;
      count--;
    }
    cout << count << " ";
    count++;
    r++;
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
