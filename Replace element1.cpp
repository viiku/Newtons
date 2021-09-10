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
	if(n==1){
		cout<<a[0];
	}else{
		for(int i=0;i<n;i++){
			if(i==0){
				cout<<a[i]*a[i+1]<<" ";
			}else if(i==(n-1)){
				cout<<a[i]*a[i-1]<<" ";
			}else{
				cout<<a[i-1]*a[i+1]<<" ";
			}
		}
	}
	return 0;
}
