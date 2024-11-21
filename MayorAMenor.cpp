#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    int arr[5], aux;

    for (int i = 0; i < 5; i++) {

        cin >> arr[i];

    }

    for (int i = 0; i < 5; i++) {

        for (int j =i+1; j < 5; j++) {

            if(arr[i] < arr[j]) {

                aux = arr[i];

                arr[i] = arr[j];

                arr[j] = aux;


            }
        }

    }

    for (int i = 0; i < 5; i++) {

        cout << arr[i] << " ";

    }


    FastIO;

    return 0;
}
