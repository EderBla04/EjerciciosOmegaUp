#include <iostream>

using namespace std;

int main() {

    int n, b;

    cin >> n>>b;

    int arr[n];

    for (int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    cout<<arr[b-1];

    return 0;
}
