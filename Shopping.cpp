#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
using ll=long long int;
int main() {
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll sum=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(i>=2 && k>0){
            sum+=v[i];
            k--;
        }
    }
    cout<<sum<<endl;
	// Your code here
	return 0;
}
