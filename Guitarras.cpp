#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int cont=0,n, t, cuerda, traste;



    cin>>n>>t;

    vector<stack<int>> pila;

    while (n--) {

        cin>>cuerda>>traste;



        while (!pila[cuerda].empty() && pila[cuerda].top() > traste) {

            pila[cuerda].pop();
            cont++;
        }

        if (pila[cuerda].empty()) {

            pila[cuerda].push(traste);
            cont++;
        }
        else if (pila[cuerda].empty() || pila[cuerda].top()!= traste) {

        pila[cuerda].push(traste);
        cont++;
    }


    }

    cout<<cont<<"\n";

    return 0;

}