#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;



    int n, menor=999, mayor=0;



    cin>>n;

    int arr [n];

    for(int i=0;i<n;i++) {

        cin>>arr[i];

        if(arr[i]<menor) {

            menor=arr[i];
        }

        if(arr[i]>mayor) {

            mayor=arr[i];
        }
    }

    cout<<menor<<" "<<mayor;


    return 0;
}