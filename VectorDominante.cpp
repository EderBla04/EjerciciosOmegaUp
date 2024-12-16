#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int n, cont=0;
    cin>>n;

    int arr1[n], arr2[n];

    for (int i = 0; i < n; i++) {

        cin>>arr1[i];
    }

    for (int i = 0; i < n; i++) {
        cin>>arr2[i];
    }

    for (int i = 0; i < n; i++) {

        if (arr1[i] > arr2[i]) {

            cont++;
        }
    }

    if (cont == n) {

        cout<<1;
    }

    else {
        cout<<0;
    }

    return 0;
}