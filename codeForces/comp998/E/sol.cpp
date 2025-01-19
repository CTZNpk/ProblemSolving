#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define all(v) v.begin(), v.end()
#define vll vector<ll>

void findComponents(int node, vector<vector<int>> &adj, vector<bool> &visited,
                    vector<int> &component) {
  visited[node] = true;
  component.push_back(node);
  for (int neighbor : adj[node]) {
    if (!visited[neighbor]) {
      findComponents(neighbor, adj, visited, component);
    }
  }
}

vector<vector<int>> getComponents(int n, vector<vector<int>> &adj) {
  vector<bool> visited(n + 1, false);
  vector<vector<int>> components;

  for (int i = 1; i <= n; ++i) {
    if (!visited[i]) {
      vector<int> component;
      findComponents(i, adj, visited, component);
      components.push_back(component);
    }
  }
  return components;
}

void sol() {
  int n, m1, m2;
  cin >> n >> m1 >> m2;
  vector<vi> f(n + 1);
  for (int i = 0; i < m1; i++) {
    int u, v;
    cin >> u >> v;
    f[u].push_back(v);
    f[v].push_back(u);
  }
  vector<vi> g(n + 1);
  for (int i = 0; i < m2; i++) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  auto componentsF = getComponents(n, f);
  auto componentsG = getComponents(n, g);

  int operations = abs((int)componentsF.size() - (int)componentsG.size());

  cout << operations << endl;
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
