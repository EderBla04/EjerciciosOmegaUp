#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int n, suma=0;

    do {

        cin>>n;
        suma+=n;

    }while (n!=0);


    cout<<suma;

    return 0;
}