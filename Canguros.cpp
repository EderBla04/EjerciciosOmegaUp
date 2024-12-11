#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {

    FastIO;

    int c, n, nc;

    queue<int> cola;

    cin >> c >> n;



    while (n--) {

        char s;

        cin>>s;

        switch (s) {

            case 'N':

                cin>>nc;

            cola.push(nc+1);

                break;

            case 'A':

                c-=cola.front();
                cola.pop();
                break;

            case 'C':
                cout<<cola.size()<<"\n";
                break;
            case 'R':
                cout<<c<<"\n";
            break;

        }



    }

    return 0;

    
}