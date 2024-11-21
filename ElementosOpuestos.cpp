#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int n, suma1, suma2;

    cin>>n;

        int lista[n];

        for(int i=0; i<n; i++){

            cin>>lista[i];


        }

        suma1= lista[0] + lista[n-1];
        suma2= lista[1] + lista[n-2];

        cout<<suma1<<" "<<suma2;


    return 0;
}
