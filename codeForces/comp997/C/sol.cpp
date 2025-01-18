#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define vll vector<ll>
#define vi vector<int>

void sol() {
  int n;
  cin >> n;
  if (n == 6) {
    cout << "1 1 2 3 1 2\n";
    return;
  }
  vi a(n);
  a[0] = 1;
  a[1] = 2;
  a[n - 2] = 1;
  a[n - 1] = 2;
  for (int i = 2; i < n - 2; i++) {
    a[i] = i + 1;
  }
  for (auto &i : a) {
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
