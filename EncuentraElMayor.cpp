#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int n, entrada, mayor=-1;

    cin>>n;

    while(n--){

      cin>>entrada;
      if(entrada>mayor){

        mayor=entrada;
      }
    }

    cout<<mayor;



    return 0;
}
