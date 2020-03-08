int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end()); 
    long cl_Sum=INT_MAX; 
    int i,n;
    n=A.size();
    for (i=0;i<n-2;i++) { 
     int j=i+1,k=n-1; 
  
        while(j<k){
        int sum =A[i]+A[j]+A[k]; 
            if (abs(B-sum)<abs(B-cl_Sum)) { 
                cl_Sum =sum; 
            } 
            if (sum<B) { 
                j++; 
            }
            else { 
                k--; 
            } 
        } 
    } 
    return cl_Sum;
}
