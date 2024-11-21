#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    string palabra;

    cin >> palabra;

    reverse(palabra.begin(), palabra.end());

    cout << palabra << endl;

    return 0;
}