#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> m;
    int n, s, x, cont = 0, pref = 0;
    cin >> n >> s;
    m[0] = 1;
    for(int i = 0; i < n; i++){
        cin >> x;
        pref += x;
        cont += m[pref-s];
        m[pref]++;
    }
    cout << cont << '\n';
    return 0;
}