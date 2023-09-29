#include <bits/stdc++.h>
using namespace std;
int main(){
    string p1, p2;
    int c = 0;
    cin >> p1 >> p2;
    for(int i = 0; i < (int)p1.size(); i++){
        if(p2[i] == '*'){
            c++;
        }
    }
    for(int i = 0; i < (int)p1.size(); i++){
        for(int j = 0; j < (int)p1.size(); j++){
            if(p1[i] == p2[j]){
                c++;
                p2[j] = '\0';
                break;
            }
        }
    }
    if(c == (int)p1.size()){
        cout << 'S' << '\n';
    }
    else
        cout << 'N' << '\n';
    return 0;
}