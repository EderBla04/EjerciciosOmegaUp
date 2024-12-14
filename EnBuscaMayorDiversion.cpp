#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int n, suma=0, menor=9999, entrada;

    cin>>n;



    for(int i=0;i<n;i++) {
        cin>>entrada;

        if (entrada<menor) {
            menor = entrada;
        }

        suma+=entrada;
    }

    cout<<suma-menor;

    return 0;

}
