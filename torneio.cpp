#include <bits/stdc++.h>
using namespace std;
int main(){
    char vf;
    int c = 0;
    for(int i = 0; i < 6; i++){
        cin >> vf;
        if(vf == 'V'){
            c++;
        }
    }
    if(c == 5 || c == 6){
        cout << 1 << '\n';
    }
    else if(c == 3 || c == 4){
        cout << 2 << '\n';
    }
    else if(c == 1 || c == 2){
        cout << 3 << '\n';
    }
    else
        cout << -1 << '\n';
    return 0;
}