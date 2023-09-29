#include <bits/stdc++.h>
using namespace std;
char pal[510], inv[510];
int main(){
    int n, c = 0, resp = 0;
    cin >> n >> pal;
    for(int i = 0, j = n-1; i < n; i++, j--)        inv[i] = pal[j];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int tempi = i, tempj = j;
            while(pal[tempi] == inv[tempj] && tempi < n && tempj < n){
                c++;
                tempi++; tempj++;
            }
            if(c > resp)        resp = c;
            c = 0;
        }
    }
    cout << resp << '\n';
    return 0;
}