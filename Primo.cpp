#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int n, cont=0;



    cin>>n;

    int arreglo[n];

    for(int i=0;i<n;i++) {
        cin>>arreglo[i];
    }

    for(int i=0;i<n;i++) {

        if(arreglo[i]==1)  cout<<"No Primo"<<endl;

        else {
            for(int j=1; j<=arreglo[i]; j++) {

                if( arreglo[i]% j == 0) {
                    cont++;
                }


            }

            if(cont > 2){

                cout<<"No Primo"<<endl;
            }else cout<<"Si Primo"<<endl;
        }

    }




    return 0;
}
