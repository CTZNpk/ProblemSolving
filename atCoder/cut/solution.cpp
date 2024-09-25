#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define vll vector<long long>
#define vi vector<int>

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  vi A = vi(n);

  for (auto &i : A) {
    cin >> i;
  }

  for (int i = 0; i < n; i++) {
    cout << A[(i + (n - k)) % n] << " ";
  }

  return 0;
}
