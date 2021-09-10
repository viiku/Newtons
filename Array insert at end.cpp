#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	int t;cin>>t;while(t--){
		int n,k;cin>>n>>k;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		a[n]=k;
		for(int i=0;i<=n;i++){
			cout<<a[i]<<" ";
		}	
		cout<<endl;	
	}
	return 0;
}
