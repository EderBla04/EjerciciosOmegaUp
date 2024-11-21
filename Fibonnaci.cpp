#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    int n, n1=0, n2=1, suma;

    cin>>n;

    int arr[n];

    arr[0]=n2;

    for(int i=1; i <n;  i++) {

        suma=n1+n2;

        arr[i]=suma;

        n1 = n2;

        n2 = suma;
    }

    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";


    FastIO;

    return 0;
}
