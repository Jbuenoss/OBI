#include <bits/stdc++.h>
using namespace std;
int main(){
    int c, d, t;
    float falta = 0.0;
    cin >> c >> d >> t;
    if(c*t >= d)        printf("%.1f\n", falta);
    else{
        falta = (d - (c*t)) / (float)c;
        printf("%.1f\n", falta);
    }
    return 0;
}