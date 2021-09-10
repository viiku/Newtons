#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n;cin>>n;
	vector<int>v(n);
	long long int sum=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i]>0){
			sum+=v[i];
		}
	}
	cout<<sum<<endl;

	// Your code here
	return 0;
}
