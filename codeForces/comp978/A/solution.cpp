#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>

int main(int argc, char *argv[]) {

  int tt;
  cin >> tt;
  while (tt--) {
    int n, r;
    cin >> n >> r;
    vi a(n);
    int rem = 0;
    int count = 0;
    for (auto &i : a) {
      cin >> i;
      // cout << i / 2 << " ";
      count += i / 2;
      rem += i % 2;
    }
    r -= count;
    count *= 2;
    // cout << r << "\n";
    // cout << rem << "\n";
    while (r) {
      if (rem == 0) {
        break;
      }
      if (rem >= 2 * r) {
        break;
      }
      count++;
      rem--;
      r--;
    }
    cout << count << "\n";
  }

  return 0;
}
