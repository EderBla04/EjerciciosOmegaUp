#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int A, B, C, D, E;

    double aux;

    cin >> A >> B >> C >> D >> E;

    aux = (3*A)- (4*B);

    aux = aux * (C/D);

    aux = aux -E;

    cout<<aux;



    return 0;
}
