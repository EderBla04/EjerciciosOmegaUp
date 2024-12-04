#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int a, b, c;

    double x1, x2;

    cin>>a>>b>>c;

    x1= (-b + sqrt(b*b - 4*a*c))/(2*a);
    x2= (-b - sqrt(b*b - 4*a*c))/(2*a);

    cout<<x1<<" "<<x2<<endl;


    return 0;

    
}