#include <bits/stdc++.h>
using namespace std;
int fal = 0;
bool selo = true;
int main(){
    string lei;
    char caso[3];
    int copas[13], espadas[13], ouros[13], paus[13]; 
    for(int i = 0; i < 13; i++){
        copas[i] = 0;
        espadas[i] = 0;
        ouros[i] = 0;
        paus[i] = 0;
    }
    cin >> lei;
    for(int i = 0; i < (int)(lei.size() / 3); i++){
        strncpy(caso, &lei[i*3], 2);
        caso[2] = '\0';
        int num = atoi(caso);
        if(lei[2 + 3*i] == 'C'){
            copas[num - 1]++;
        }
        if(lei[2 + 3*i] == 'E'){
            espadas[num - 1]++;
        }
        if(lei[2 + 3*i] == 'U'){
            ouros[num - 1]++;
        }
        if(lei[2 + 3*i] == 'P'){
            paus[num - 1]++;
        }
    }

    for(int i = 0; i < 13; i++){
        if(copas[i] > 1){
            cout << "erro" << '\n';
            selo = false;
            break;
        }
        if(copas[i] == 0){
            fal++;
        }
    }
    if(selo){
            cout << fal << '\n';
    }

    fal = 0;
    selo = true;
    for(int i = 0; i < 13; i++){
        if(espadas[i] > 1){
            cout << "erro" << '\n';
            selo = false;
            break;
        }
        else if(espadas[i] == 0){
            fal++;
        }
    }
    if(selo){
            cout << fal << '\n';
    }

    fal = 0;
    selo = true;
    for(int i = 0; i < 13; i++){
        if(ouros[i] > 1){
            cout << "erro" << '\n';
            selo = false;
            break;
        }
        else if(ouros[i] == 0){
            fal++;
        }
    }
    if(selo){
            cout << fal << '\n';
    }

    fal = 0;
    selo = true;
    for(int i = 0; i < 13; i++){
        if(paus[i] > 1){
            cout << "erro" << '\n';
            selo = false;
            break;
        }
        else if(paus[i] == 0){
            fal++;
        }
    }
    if(selo){
            cout << fal;
        }

    return 0;
}