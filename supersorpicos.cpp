#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int n, k, aux;

    cin>>n;

    int arr[n]= {0};

    for(int i=0;i<n;i++) {
        cin>>k;

        for(int j=0;j<k;j++) {

            cin>>aux;
            arr[i]+=aux;


        }

        arr[i]=arr[i]-(k-1);
    }

    for(int i=0;i<n;i++) {

        cout<<arr[i]<<endl;
    }

    return 0;


}
