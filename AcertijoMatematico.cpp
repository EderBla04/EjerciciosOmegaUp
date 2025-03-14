#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int resta, suma, n, entrada1, entrada2;

    cin>>n;

    while(n--){

      cin>>entrada1>>entrada2;
      suma = entrada1+entrada2;
      resta= entrada1-entrada2;
      cout<<resta<<suma<<'\n';

    }


    return 0;
}