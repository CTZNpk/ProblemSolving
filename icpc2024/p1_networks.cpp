#include <bits/stdc++.h>

using namespace std;

typedef pair<double, int> pii;

template<typename T = int>
inline T next()
{
    T x;
    cin >> x;
    return x;
}

vector<double> dijkstra(int N, const vector<vector<pii>>& graph, int source)
{
    vector<double> dist(N + 1, numeric_limits<double>::infinity());

    dist[source] = 0.0;

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({ 0.0, source });

    while (!pq.empty())
    {
        double u_dist = pq.top().first;
        int u = pq.top().second;

        pq.pop();

        if (u_dist > dist[u])
            continue;

        for (const auto& neighbor : graph[u])
        {
            int v = neighbor.second;
            double weight = neighbor.first;

            if (dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
                pq.push({ dist[v], v });
            }
        }
    }

    return dist;
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    int T = next();

    while (T--)
    {
        int N = next();
        int M = next();

        vector<vector<pii>> adj(N + 1);

        for (int i = 0; i < M; i++)
        {
            int U = next();
            int V = next();
            double d = next<double>();

            adj[U].push_back({ d, V });
            adj[V].push_back({ d, U });
        }

        double min_avg_delay = numeric_limits<double>::infinity();
        int best_building = -1;

        for (int i = 1; i <= N; i++)
        {
            vector<double> dist = dijkstra(N, adj, i);

            double total_delay = 0.0;
            for (int j = 1; j <= N; j++)
                if (dist[j] != numeric_limits<double>::infinity())
                    total_delay += dist[j];

            double average_delay
              = total_delay / (N - 1);

            if (average_delay < min_avg_delay)
            {
                min_avg_delay = average_delay;
                best_building = i;
            }
            // Allow imprecision using fabs
            else if (fabs(average_delay - min_avg_delay) < 1e-6)
            {
                best_building = min(best_building, i);
            }
        }

        cout << best_building << '\n';
    }

    return 0;
}

/*

1
6 6
1 2 833
1 3 673
2 4 57
3 4 473
4 5 944
4 6 36


*/