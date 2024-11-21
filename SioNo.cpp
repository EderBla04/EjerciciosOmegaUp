#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    if(n1==n2 || n1==n3) {

        cout<<"SI";
    }
    else if(n2==n3 || n2==n1) {

        cout<<"SI";
    }

    else if(n3==n1 || n3==n2) {

        cout<<"SI";
    }
    else cout<<"NO";

    return 0;
}
