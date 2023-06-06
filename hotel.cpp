#include <bits/stdc++.h>
using namespace std;
int main(){
    int d, a, n;
    int vt, qd;
    cin >> d >> a >> n;
    qd = 32 - n;
    if(n < 16){
        vt = qd * (d + (n - 1) * a);
    }
    else 
        vt = qd * (d + 14 * a);
    
    cout << vt << '\n';

    return 0;
}
