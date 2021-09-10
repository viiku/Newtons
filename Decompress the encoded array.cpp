#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	int t;cin>>t;while(t--){
		int n;cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		vector<int>v1;
		int cnt=0;
		for(int i=0;i<n;i+=2){
			cnt+=v[i];
			while(v[i]>0){
				v1.push_back(v[i+1]);
				v[i]--;
			}
		}
		v1.resize(cnt);
		for(int i:v1){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
