#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    double x, aux, y;

    cin>>x;

    aux= (x+pow(x,2.))/((5*x)+3);


    y=(aux+x)*((aux)/(aux+(2*x)));

    cout<<y;

    return 0;

}
