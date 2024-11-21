#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int arr[4], multi1, multi2;

    for (int i = 0; i < 4; i++) {

        cin >> arr[i];

        if(i == 1 ) {
            multi1 = arr[i]*arr[i-1];
        }

        else if(i == 3) {

            multi2 = arr[i]*arr[i-1];
        }

        }

    cout << multi1+multi2 << endl;


    return 0;
}
