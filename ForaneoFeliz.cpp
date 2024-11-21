#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    int p, arr[5];

    cin>>p>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    if(arr[0]+arr[1]+arr[2]+arr[3]+arr[4] >= p*8 ) cout<<"FH";
    else
        cout<<"FF";


    FastIO;

    return 0;
}