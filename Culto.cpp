#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int n, suma[2]={0};

    cin>>n;

    int arr1[n], arr2[n];;

    for(int i=0;i<n;i++) {

        cin>>arr1[i];
        cin>>arr2[i];

        suma[0]+=arr1[i];
        suma[1]+=arr2[i];

    }

    if(suma[0]>suma[1]) {

        cout<<"CULTO";
    }
    else if(suma[0]==suma[1]) {

        cout<<"INDETERMINADO";
    }
    else cout<<"INCULTO";

    return 0;
}
