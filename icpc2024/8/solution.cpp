#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAX_N = 3000;
const int INF = -1;

struct Node {
    int monkeys;
    int gorillas;
    vector<int> neighbors;
};

vector<Node> tree;
int dp[MAX_N + 1][MAX_N + 1]; // DP table for subtree partitions
int subtreeSize[MAX_N + 1];    // Size of each subtree

// DFS to calculate the number of partitions and check for winning sections
void dfs(int node, int parent, int m) {
    subtreeSize[node] = 1;
    dp[node][1] = (tree[node].gorillas > tree[node].monkeys ? 1 : 0); // Winning section for the current node

    // For each child node, process and merge DP values
    for (int neighbor : tree[node].neighbors) {
        if (neighbor == parent) continue;

        dfs(neighbor, node, m);

        // Merge DP values for current node and the child subtree
        for (int i = subtreeSize[node]; i >= 1; --i) {
            for (int j = subtreeSize[neighbor]; j >= 1; --j) {
                if (i + j <= m) {
                    dp[node][i + j] = max(dp[node][i + j], dp[node][i] + dp[neighbor][j]);
                }
            }
        }

        // Update subtree size for current node
        subtreeSize[node] += subtreeSize[neighbor];
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        tree.assign(n + 1, Node());

        // Input monkeys and gorillas in each enclosure
        for (int i = 1; i <= n; ++i) cin >> tree[i].monkeys;
        for (int i = 1; i <= n; ++i) cin >> tree[i].gorillas;

        // Input edges (enclosure connections)
        for (int i = 1; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            tree[x].neighbors.push_back(y);
            tree[y].neighbors.push_back(x);
        }

        // Initialize dp array
        memset(dp, INF, sizeof(dp));

        // Perform DFS starting from node 1
        dfs(1, -1, m);

        // Output the result for the root node (1) with exactly m sections
        cout << dp[1][m] << endl;
    }

    return 0;
}

