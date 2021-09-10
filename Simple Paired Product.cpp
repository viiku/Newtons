#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
using ll=long long int;
int main() {

	// Your code here
	int n;cin>>n;
    ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i+=2){
		a[i]=a[i]*a[i+1];
		cout<<a[i]<<" ";
	}
	return 0;
}
