#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
    int n;cin>>n;
    int sum=0,prod=1;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(i%2==0){
            sum+=x;
        }else{
            prod*=x;
        }
    }
    cout<<sum<<" "<<prod<<endl;
	return 0;
}
