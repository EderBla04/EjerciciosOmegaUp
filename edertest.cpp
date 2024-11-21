//
// Created by ederg on 15/11/2024.
//
#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int n;cin>>n;
    int arr[41];
    fill(arr, arr+40, 0);
    int aux;

    for(int i=0;i<n;i++) {
        cin>>aux;
        arr[aux]++;
    }
    for(int i=1;i<=40;i++) {
        if(arr[i]>0) cout<<i<<" "<<arr[i]<<'\n';
    }
    return 0;
}