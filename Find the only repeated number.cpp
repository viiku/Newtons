#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
    map<int,int>mp,mp1;
    int n,k;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k;
        mp[k]++;
    }
    int ans=0;
    for(auto it:mp){
        mp1[it.second]++;
    }
    for(auto it:mp1){
        if(it.second==1){
            ans=it.first;
        }
    }
    for(auto it:mp){
        if(it.second==ans){
            cout<<it.first<<endl;
        }
    }    
	return 0;
}
