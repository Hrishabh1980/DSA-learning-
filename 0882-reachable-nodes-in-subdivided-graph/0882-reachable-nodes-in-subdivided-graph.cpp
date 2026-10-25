class Solution {
public:
    int reachableNodes(vector<vector<int>>& edges, int maxMoves, int n) {
     vector<vector<pair<int, int>>> adj(n);
        for (const auto& edge : edges) {
            int u = edge[0], v = edge[1], cnt = edge[2];
            adj[u].push_back({v, cnt});
            adj[v].push_back({u, cnt});
        }

        priority_queue<pair<int, int>> pq; // stores {moves_left, node}
        vector<int> dist(n, -1);

        pq.push({maxMoves, 0});
        dist[0] = maxMoves;

        while (!pq.empty()) {
            auto [moves_left, u] = pq.top();
            pq.pop();

            if (moves_left < dist[u]) continue;

            for (auto& [v, cnt] : adj[u]) {
                int rem = moves_left - cnt - 1;
                if (rem > dist[v]) {
                    dist[v] = rem;
                    pq.push({rem, v});
                }
            }
        }

        int ans = 0;
        for (int d : dist) {
            if (d >= 0) ans++;
        }

        for (const auto& edge : edges) {
            int u = edge[0], v = edge[1], cnt = edge[2];
            int u_reach = max(0, dist[u]);
            int v_reach = max(0, dist[v]);
            ans += min(cnt, u_reach + v_reach);
        }

        return ans;   
    }
};