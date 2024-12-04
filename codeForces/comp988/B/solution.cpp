#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int k;
  cin >> k;

  set<int> nums;
  for (int i = 0; i < k; i++) {
    int l;
    cin >> l;
    nums.insert(l);
  }
  int needed = k - 2;

  for (auto &i : nums) {
    if (needed % i == 0) {
      int other = needed / i;
      if (nums.find(other) != nums.end()) {
        cout << i << " " << other << '\n';
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
