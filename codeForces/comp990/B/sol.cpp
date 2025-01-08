
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>

void sol() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vi m(26, 0);
  for (int i = 0; i < n; i++) {
    m[s[i] - 'a']++;
  }

  int max = max_element(all(m)) - m.begin();
  int min = 11;
  char minEle = max + 'a';
  for (int i = 0; i < 26; i++) {
    if (m[i] < min && m[i] != 0 && i != max) {
      min = m[i];
      minEle = i + 'a';
    }
  }
  for (int i = 0; i < n; i++) {
    if (s[i] == minEle) {
      s[i] = max + 'a';
      break;
    }
  }
  cout << s << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
