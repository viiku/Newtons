#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n;cin>>n;
	unordered_map<int,int>mp;
	vector<int>v;
	for(int i=1;i<=n+1;i++){
		int x;
		cin>>x;
		if(mp.find(x)!=mp.end()){
			continue;
		}else{
			v.push_back(x);
		}
		mp[x]++;
	}
	for(int i:v){
		cout<<i<<" ";
	}
	// Your code here
	return 0;
}
