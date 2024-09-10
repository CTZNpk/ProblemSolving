#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void solve(const string &s, string p, int n) {
  unordered_map<char, char> hashMap;
  int i = 0;
  int j = n - 1;

  while (i <= j) {
    hashMap[p[i]] = p[j];
    hashMap[p[j]] = p[i];
    i++;
    j--;
    while (i < n && p[i - 1] == p[i]) {
      i++;
    }
    while (j >= 0 && p[j + 1] == p[j]) {
      j--;
    }
  }

  string ans;
  for (char c : s) {
    ans += hashMap[c];
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string p = s;
    sort(p.begin(), p.end());
    solve(s, p, n);
  }

  return 0;
}
