#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int n, contador = 0;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    for (int i = 0; i <= n; i++) {

        if(i+1 < n) {

            if(arr[i] < arr[i+1]) {

                contador++;
            }
        }
    }

    if(contador == n) {

        cout << "SI";
    }

    else {

        cout << "NO";
    }



    return 0;
}
