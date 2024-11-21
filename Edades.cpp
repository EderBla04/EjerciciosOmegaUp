#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int n, mayor=0, menor=10000;

    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) {

        cin>>arr[i];

        if(arr[i] > mayor) {

            mayor = arr[i];
        }
        if(arr[i] < menor) {

            menor = arr[i];
        }

    }

    int arr2[mayor+1]={0};

    for(int i=0; i<n; i++) {

        arr2[arr[i]]++;
    }



    for(int i=menor; i < mayor+1; i++) {

        if(arr2[i] > 0) {
            cout<<i<<" "<<arr2[i]<<endl;
        }
    }

    return 0;
}
