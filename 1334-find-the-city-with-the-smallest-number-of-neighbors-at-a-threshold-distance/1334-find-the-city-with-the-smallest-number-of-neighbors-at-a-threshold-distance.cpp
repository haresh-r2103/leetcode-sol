class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {

        vector<vector<pair<int,int>>> adj(n);

        for(auto &it : edges){
            int u = it[0];
            int v = it[1];
            int w = it[2];

            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        int city = -1;
        int minReachable = INT_MAX;

        for(int i = 0; i < n; i++){

            vector<int> dist(n, 1e9);

            priority_queue<
                pair<int,int>,
                vector<pair<int,int>>,
                greater<pair<int,int>>
            > pq;

            dist[i] = 0;
            pq.push({0,i});

            while(!pq.empty()){

                auto it = pq.top();
                pq.pop();

                int d = it.first;
                int node = it.second;

                for(auto &nbr : adj[node]){

                    int nn = nbr.first;
                    int w = nbr.second;

                    if(d + w < dist[nn]){
                        dist[nn] = d + w;
                        pq.push({dist[nn], nn});
                    }
                }
            }

            int count = 0;

            for(int j = 0; j < n; j++){
                if(dist[j] <= distanceThreshold)
                    count++;
            }

            if(count <= minReachable){
                minReachable = count;
                city = i;
            }
        }

        return city;
    }
};