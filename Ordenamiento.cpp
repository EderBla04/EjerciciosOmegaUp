#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

void buscarCacho(int s1, int s2, int arr[]);
int buscarPivote(int s1, int s2,int list[]);

int main() {
	FastIO;

	int n;
	cin>>n;

	int arr[n];

	int s1=0, s2=n-1;

	for(int i=0;i<n;i++) {

		cin>>arr[i];
	}

	buscarCacho(s1, s2, arr);

	for(int i=0;i<n;i++) {

		cout<<arr[i]<<" ";
	}


	return 0;
}



 int buscarPivote(int s1, int s2,int list[]) {

	    int aux;

	    bool cambio= true;

	    while(s1 < s2) {

	        if(list[s1] > list[s2]) {

	            aux=list[s1];

	            list[s1]=list[s2];

	            list[s2]=aux;

	            cambio =! cambio;

	        }

	        if(cambio) s1++;

	        else  s2--;

	    }

	    return s1;
	}

 void buscarCacho(int inicio ,  int fin, int list[] ) {

	    int p = buscarPivote(inicio,  fin,  list);

	    if(inicio < p-1) buscarCacho(inicio, p-1, list);

	    if(p+1< fin) buscarCacho(p+1 , fin, list);

	}


