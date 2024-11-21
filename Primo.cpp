#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    int n, cont=0;

    cin>>n;

    if(n==1)  cout<<"NO";


    else {
        for(int i=1; i<=n; i++) {

            if(n % i == 0) {
                cont++;
            }


        }

        if(cont > 2){

            cout<<"NO";
        }else cout<<"SI";
    }
    FastIO;

    return 0;
}
