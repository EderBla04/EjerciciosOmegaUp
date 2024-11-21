#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int n, k;

    cin >> n >> k;

    int arr[n], arr2[k+1]= {0};

    for (int i = 0; i < n; i++) {

        cin >> arr[i];
        if (arr[i] == k) {

            arr2[arr[i]]++;
        }

    }

    cout << arr2[k] << endl;
    return 0;
}
