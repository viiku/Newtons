#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	map<int,int>mp;
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	cout<<mp.size();
	// Your code here
	return 0;
}
