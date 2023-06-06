#include <bits/stdc++.h>
using namespace std;

int somard(int k){
    int res = 0;
    while(k > 0){
        res += k % 10;
        k /= 10;
    }
    return res;
}
int main(){
    int n, m, s, a = 0;
    int *intervalo, ind, *dig;


    cin >> n >> m >> s;
    ind = m - n + 1; 

    intervalo = new int[ind];
    dig = new int[ind];

    for(int i = 0; i < ind; i++){
        intervalo[i] = n;
        n++;
    }

    for(int i = 0; i < ind; i++){
        dig[i] = somard(intervalo[i]);
    }

    for(int i = 0; i < ind; i++){
    if(dig[i] == s){
        if(intervalo[i] > a){
            a = intervalo[i];
        }
    }
    }
    if(a == 0){
        cout << "-1" << '\n';
    }
    else{
        cout << a << '\n';
    }


    return 0;
}
