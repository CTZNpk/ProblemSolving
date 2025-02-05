#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int N;
  cin >> N;
  vector<int> A(N);

  for (auto &a : A)
    cin >> a;

  map<int, vector<int>> locations;

  for (int i = 0; i < N; i++)
    locations[A[i] & ~3].push_back(i);

  for (auto &[_, indices] : locations) {
    vector<int> values;

    for (int index : indices)
      values.push_back(A[index]);

    sort(values.begin(), values.end());

    for (int i = 0; i < int(indices.size()); i++)
      A[indices[i]] = values[i];
  }
  for (auto &i : A) {
    cout << i << ' ';
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
