#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	int t;cin>>t;while(t--){
		int n;cin>>n;
		int a[n];
		int mx=-1,mn=INT_MAX;
		for(int i=0;i<n;i++){
			cin>>a[i];\
			mx=max(mx,a[i]);
			mn=min(mn,a[i]);
		}
		cout<<mx<<" "<<mn<<endl;
	}
	return 0;
}
