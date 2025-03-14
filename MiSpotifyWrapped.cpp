#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int n, horas, mayor=INT_MIN, suma=0, promedio=0, lugar;

    cin>>n;

    for(int i=0;i<n;i++){

      cin>>horas;

      if(horas>mayor){

        mayor=horas;
        lugar=i+1;
      }

      suma+=horas;
    }

    promedio=suma/n;

    cout<<suma<<"\n";
    cout<<promedio<<"\n";
    cout<<lugar<<" "<<mayor<<"\n";

    if(mayor > 1000) cout<<"Gran exito";



    return 0;
}