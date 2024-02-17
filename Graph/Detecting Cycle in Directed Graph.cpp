
//The initialization of the array and flag
bool cycle = false;
vector<vector<int>> adj(n+1);
vector<int> vis(n + 1), dfsVis(n + 1);

//The actual code to detect cycle
function<void(int)>dfs = [&](int node) {
    vis[node] = 1;
    dfsVis[node] = 1;

    for(auto &i : adj[node]) {
        if(dfsVis[i]) cycle = true;
        else if(!vis[i]) dfs(i);
    }

    dfsVis[node] = 0;
};

for(int i = 1; i <= n; i++) {
    if(!vis[i]) dfs(i);            
}
