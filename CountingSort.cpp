#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int n, mayor=0;

    cin>>n;

    int arr1[n], arr3[n];

    for(int i=0;i<n;i++) {

        cin>>arr1[i];

        if(arr1[i] > mayor) {

            mayor = arr1[i];
        }
    }



    int arr2[mayor+1] = {0};

    for(int i=0;i<n;i++){

        arr2[arr1[i]]++;

    }



    for (int i=0;i<mayor+1;i++) {

        if(i + 1 < mayor+1) {

            arr2[i+1] = arr2[i]+ arr2[i+1] ;


        }
    }

    for(int i=n-1;i>=0;i--) {

        arr2[arr1[i]]--;

        arr3[arr2[arr1[i]]] = arr1[i];
    }


    for(int i=0;i<n;i++) {

        cout<<arr3[i]<<" ";


    }

    cout<<endl;

    for (int i=0;i<n;i++) {

        cout<<arr2[arr3[i]]<<" ";
    }


    return 0;
}
