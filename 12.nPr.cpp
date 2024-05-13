class Solution{
public:
    long long fact(int n){
        if(n==1) return 1;
        if(n==0) return 1;
        else return n*fact(n-1);
    }
    long long nPr(int n, int r){
        // code here
        long long s=fact(n);
        long long k=fact(n-r);
        return s/k;
    }
};
