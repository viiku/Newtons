#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n;cin>>n;
	vector<int>v(n);
	map<int,int>mp;
	for(int i=0;i<n;i++){
        cin>>v[i]; 
		mp[v[i]]++;
	} 
	int mx=0,ans=0;
	for(auto it:mp){
		if(it.second>=mx){
			ans=max(it.first,ans);
			mx=it.second;
		}
	}
	cout<<ans<<endl;
	// Your code here
	return 0;
}
