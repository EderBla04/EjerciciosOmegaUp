#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    int n;

    cin>>n;

    for(int i=1; i<=n; i++) {

        for(int j=1; j<=i; j++) {

            cout<<j<<" ";


        }

        cout<<endl;

    }

    for(int i=n-1; i>0; i--) {

        for (int j=1 ; j<=i; j++) {

            cout<<j<<" ";


        }

        cout<<endl;
    }

    FastIO;

    return 0;
}
