#include <bits/stdc++.h>
using namespace std;
#define maxn 10010
#define maxv 210
typedef pair<int,int> pii;
vector<pair<pii, int>> adj[maxn][maxv];
int distempo[maxn][maxv];
bool vis[maxn][maxv];
int main(){
    int v, n, m;
    int a, b, t, p;
    cin >> v >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> a >> b >> t >> p;
        for(int j = 0; j <= v-p; j++){
            adj[a][j].push_back({{b, j+p}, t});
            adj[b][j].push_back({{a, j+p}, t});
        }
    }
    for(int i = 0; i < maxn; i++){
        for(int j = 0; j < maxv; j++){
            distempo[i][j] = (int)INFINITY;
        }
    }
    int x, y;
    cin >> x >> y;
    distempo[x][0] = 0;
    priority_queue<pair<int, pii>> pq;
    pq.push({0, {x, 0}});
    while(!pq.empty()){
        int a = pq.top().second.first;
        int b = pq.top().second.second;
        pq.pop();
        if(vis[a][b])       continue;
        vis[a][b] = true;
        for(auto x:adj[a][b]){
            int c = x.first.first;
            int d = x.first.second;
            int w = x.second;
            if(distempo[c][d] > distempo[a][b]+w)         distempo[c][d] =  distempo[a][b]+w;
            pq.push({-distempo[c][d], {c, d}});
        }
    }
    int result = (int)INFINITY;
    for(int i = 0; i <= v; i++){
        result = min(result, distempo[y][i]);
    }
    if(result == (int)INFINITY)      cout << -1 << '\n';
    else        cout << result << '\n';
    return 0;
}