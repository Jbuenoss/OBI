#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> seq;
    int n, soma = 0, c = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x != 0){
            seq.push_back(x);
            c++;
        }
        else{
            seq.pop_back();
            c--;
        }
    }
    for(int i = 0; i < c; i++){
        soma += seq[i];
    }
    cout << soma << '\n';

    return 0;
}