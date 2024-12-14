#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    double x,y, z, primero, segundo;

    cin >> x >> y >> z;



    primero = ((((2*x)+y)/z))*((pow(y, 3)-z));

    segundo= ((x+(2*y)+(3*z)))/(z-(2*y)-(3*x))+pow(x, 2)+pow(z, 2);

    cout<<primero/segundo;


    return 0;

}
