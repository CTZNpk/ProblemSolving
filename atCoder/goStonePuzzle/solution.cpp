#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;

  s += "..";
  t += "..";

  map<string, int> map;

  priority_queue<pair<pair<int, int>, string>> pq;

  pq.push({{0, n}, s});

  while (pq.size()) {
    pair<pair<int, int>, string> curr = pq.top();
    pq.pop();
    const string s = curr.second;
    if (map.count(s)) {
      continue;
    }
    int d = -curr.first.first;
    int idx = curr.first.second;

    map[s] = d;
    for (int i = 0; i < n + 1; i++) {
      if (i == idx || i == idx - 1 || i == idx + 1) {
        continue;
      }
      string nS = s;
      nS[idx] = s[i];
      nS[idx + 1] = s[i + 1];
      nS[i] = s[idx];
      nS[i + 1] = s[idx + 1];
      pq.push({{-d - 1, i}, nS});
    }
  }
  if (map.count(t)) {
    cout << map[t];
  } else {
    cout << -1;
  }

  return 0;
}
