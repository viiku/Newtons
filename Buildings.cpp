#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
using ll=long long int;
int main() {
	int n;cin>>n;
	ll a[n],mx=0,cnt=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>mx){
			cnt++;
			mx=a[i];
		}
	}
	cout<<cnt<<endl;
	// Your code here
	return 0;
}
