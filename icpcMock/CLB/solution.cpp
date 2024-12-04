
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  set<set<char>> matches;
  string line;
  vector<char> a;
  vector<char> b;

  std::getline(std::cin, line);

  for (char c : line) {
    if (isalpha(c)) {
      a.push_back(c);
    }
  }

  std::getline(std::cin, line);

  for (char c : line) {
    if (isalpha(c)) {
      b.push_back(c);
    }
  }
  for (int i = 0; i < a.size(); i++) {
    bool f = true;
    set<char> found;
    for (auto it = matches.begin(); it != matches.end();) {
      auto j = *it;
      if (j.find(a[i]) != j.end() || j.find(b[i]) != j.end()) {
        if (f) {
          found = j;
          found.insert(a[i]);
          found.insert(b[i]);
          it = matches.erase(it);
          f = false;
        } else {
          found.insert(all(j));
          it = matches.erase(it);
        }
      } else {
        ++it;
      }
    }
    if (f) {
      set<char> ne;
      ne.insert(a[i]);
      ne.insert(b[i]);
      matches.insert(ne);
    } else {
      matches.insert(found);
    }
  }

  auto check = [&]() {
    string s, f;
    cin >> s >> f;
    if (s.size() < 3 || s.size() > 20) {
      cout << "No\n";
      return;
    }
    if (s.size() != f.size()) {
      cout << "No\n";
      return;
    }
    for (int i = 0; i < f.size(); i++) {
      if (f[i] == s[i])
        continue;
      bool found = false;
      for (auto &j : matches) {
        if (j.find(f[i]) != j.end()) {
          if (j.find(s[i]) == j.end()) {
            cout << "No\n";
            return;
          } else {
            found = true;
            break;
          }
        }
      }
      if (!found) {
        cout << "No\n";
        return;
      }
    }
    cout << "Yes\n";
  };

  while (!cin.eof()) {
    check();
  }
}

int main(int argc, char *argv[]) {

  sol();
  return 0;
}
