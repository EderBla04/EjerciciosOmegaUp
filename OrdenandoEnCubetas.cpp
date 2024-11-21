#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int N, M;

    cin >> N >> M;

    int arr[N], arr2[M+1]= {0};

    for (int i = 0; i < N; i++) {

        cin >> arr[i];
        arr2[arr[i]]++;

    }


    for (int i = 1; i <= M; i++) {

        cout<<i<<": "<<arr2[i]<<endl;


    }

    return 0;
}
