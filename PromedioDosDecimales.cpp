#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int n, entrada, total;
    double promedio = 0, suma=0;

    cin>>n;

    total=n;

    while(n--){

      cin>>entrada;
      suma+=entrada;


    }

    promedio = suma/total;

    cout << fixed << setprecision(2) << promedio;



    return 0;
}