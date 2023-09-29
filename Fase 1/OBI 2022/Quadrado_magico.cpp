#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int **vetor;
    int *s;
    int a = 0, b = 0;
    int vr, av0, vf; 
    cin >> n;
    vetor = new int*[n];
    s = new int [n];
    for(int i = 0; i < n; i++)
    {
        s[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        vetor[i] = new int [n];
        for(int j = 0; j < n; j++)
        {
            cin >> vetor[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
        {
            s[i] = s[i] + vetor[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
        {
            if (vetor[i][j] == 0)
            { 
            a = i + 1;
            av0 = i;
            b = j + 1;
            }
        }
    }
    for(int i = 0; i < (n - 2); i++){
        if((s[i] == s[i + 1]) || (s[i] == s[i + 2])){
            vr = s[i];
        }
        else
            vr = s[i + 1];
    }
    vf = vr - s[av0];

    cout << vf << '\n';
    cout << a << '\n' << b << '\n';


    return 0;
}