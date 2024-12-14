#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int n;

    string nombre, caso, linea, aux;

    queue<string> alumnos, trabajadores;

    cin>>n;
    cin.ignore();

    while (n--) {

        getline(cin, linea);
        stringstream ss(linea);

        ss >> caso;

        if(caso=="ATIENDE"){


            if (trabajadores.empty()) {

                cout<<alumnos.front()<<"\n";
                alumnos.pop();
            }
            else {

                cout<<trabajadores.front()<<"\n";
                trabajadores.pop();
            }
        }
        else {

            ss >> aux;
            caso+= ' '+ aux;

            if (caso=="LLEGA ALUMNO") {
                aux.clear();
                caso.clear();
                ss >> nombre;
                alumnos.push(nombre);
            }

            else if (caso=="LLEGA TRABAJADOR") {
                aux.clear();
                caso.clear();
                ss >> nombre;
                trabajadores.push(nombre);
            }

        }
    }
    return 0;
}
