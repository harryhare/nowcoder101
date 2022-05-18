class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int i=m-1;
        int j=n-1;
        int t=m+n-1;
        while(i>=0 && j>=0){
            if(A[i]>B[j]) {
                A[t]=A[i];
                t--;
                i--;
            } else{
                A[t]=B[j];
                t--;
                j--;
            }
        }
        while(i>=0){
            A[t]=A[i];
            t--;
            i--;
        }
        while(j>=0) {
            A[t]=B[j];
            t--;
            j--;
        }
    }
};