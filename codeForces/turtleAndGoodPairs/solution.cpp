
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  vector<int> freq(26);
  for (char c : S) {
    freq[c - 'a']++;
  }
  string g = "";

  while (freq != vector<int>(26, 0)) {
    for (int i = 0; i < 26; i++) {
      if (freq[i] > 0) {
        g.push_back(char(i + 'a'));
        freq[i]--;
      }
    }
  }
  cout << g << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
}
