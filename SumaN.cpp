#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int n;

    cin>>n;

    vector<int> digitos;

    while (n >0 ) {

        digitos.push_back(n%10);

        n=n/10;
    }

    int suma= accumulate(digitos.begin(), digitos.end(), 0);

    cout<<suma;

    return 0;


}
