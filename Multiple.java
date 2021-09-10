static int [] countOfNumbers(int A[],int n){
 //Enter your code here
    int[] a=new int[n];
    for(int i=0;i<n-1;i++){
        int cnt=0;
        for(int j=i+1;j<n;j++){
            if(A[j]%A[i]==0){
                cnt++;
            }
        }
        a[i]=cnt;
    }
    return a;
}
