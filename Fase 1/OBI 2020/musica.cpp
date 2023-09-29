#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> vc;
int ci = 0, cj = 0;
bool rel = false;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    vc.assign(1e5, vector<int>());
    int n, m, c, cont = 0;
    cin >> n >> m >> c;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        vc[i].push_back(x);
        vc[i].push_back(y);
    }
for(int j = 0; j < n; j++){
    cj++;
    ci = 0;
    for(int i = 0; i < n; i++){
        ci++;
        if(c == vc[i][1]){
            c = vc[i][0];
            vc[i].push_back(1);
            if(vc[i][2] == 1 && vc[i][3] == 1){
                rel = true;
                break;
            }
            cont++;
            break;
        }
        if(ci == n){
            rel = true;
        }
    }
    if(rel){
        break;
    }
}
    if(cont < n){
        cj = 0;
    }
    if(cj == n){
        cout << -1 << '\n';
    }
    else{
        cout << cont << '\n';
    }
    return 0;
}
