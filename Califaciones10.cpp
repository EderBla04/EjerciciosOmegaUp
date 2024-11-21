#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    double cal, suma=0;

    for(int i=0; i<10; i++) {

        cin>>cal;
        suma+=cal;
    }

    cout<<suma/10<<endl;

    FastIO;

    return 0;
}