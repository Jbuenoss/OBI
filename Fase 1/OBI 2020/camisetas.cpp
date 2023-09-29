#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, p, m, cp = 0, cm = 0;
    cin >> n;
    int req[n];
    for(int i = 0; i < n; i++){
        cin >> req[i];
        if(req[i] == 1){
            cp++;
        }
        else{
            cm++;
        }
    }
    cin >> p >> m;
    if(p <= cp && m <= cm){
        cout << 'S' << '\n';
    }
    else
        cout << 'N' << '\n';
    return 0;
}