#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int n, aux;

    cin>>n;

    for(int i=1; i<=n/2; i++) {

        if (pow(2, i)==n) {

            aux=i;
            break;

        }
    }

    cout<<aux;

    return 0;
}
