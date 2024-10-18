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
  int i = 0;
  while (i < n && a[i] != 1) {
    i++;
  }
  i++;
  int count = 0;
  int countAtLast = 0;
  int curr = i - 1;
  int last1 = i - 1;
  while (i < n) {
    if (a[i] == 0) {
      count++;
    } else {
      last1 = i;
      countAtLast = count;
    }
    i++;
  }
  cout << countAtLast << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
