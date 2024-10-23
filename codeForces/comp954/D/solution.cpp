
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n == 2) {
    cout << stoi(s) << '\n';
    return;
  }
  int ans = INT_MAX;
  for (int i = 0; i < n - 1; i++) {
    vector<int> vec;
    for (int j = 0; j < i; j++)
      vec.push_back(s[j] - '0');
    vec.push_back(stoi(s.substr(i, 2)));
    for (int j = i + 2; j < n; j++)
      vec.push_back(s[j] - '0');

    sort(vec.begin(), vec.end());

    if (vec[0] == 0) {
      cout << "0\n";
      return;
    }
    int sum = 0;
    for (auto i : vec) {
      if (i != 1)
        sum += i;
    }
    if (sum == 0)
      sum = 1;
    ans = min(ans, sum);
  }
  // O(n^2)
  cout << ans << '\n';
}

int main(int argc, char *argv[]) {
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);
  int tt;
  cin >> tt;

  while (tt--) {
    sol();
  }
  return 0;
}
