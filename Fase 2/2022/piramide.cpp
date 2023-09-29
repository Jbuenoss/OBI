#include <bits/stdc++.h>
using namespace std;
#define tam 110
int matriz[tam][tam];
int main(){
    int n, ini = 0, fim = 0;
    cin >> n;
    int m = n;
    while(ini < m){
        for(int i = ini; i < m; i++){
            for(int j = fim; j < m; j++)
                matriz[i][j]++;
        }
        ini++; fim++; m--;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << matriz[i][j]++ << ' ';
        cout << '\n';
    }
    return 0;
}