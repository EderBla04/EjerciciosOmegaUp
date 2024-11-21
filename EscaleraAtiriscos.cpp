#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    int n;

    cin>>n;

    for(int i=0;i< n;i++) {

        for(int j=0;j<=i;j++) {

            cout<<"#";

            }

        cout<<endl;

        }

    FastIO;

    return 0;
}