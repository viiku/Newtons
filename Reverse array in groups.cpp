#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=0,j=0;
	while(j<n){
		if((j-i+1)<k){
			j++;
		}else if((j-i+1)==k){
			int k=j;
			while(i<=j){
				swap(a[i],a[j]);
				i++;j--;
			}
			k++;
			j=k;
			i=j;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
