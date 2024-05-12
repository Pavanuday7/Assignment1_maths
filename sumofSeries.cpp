class Solution {
  public:
    long long seriesSum(int n) {
        // code here
        long long p=1000000007;
        long long k=(n%p)*((n+1)%p);
        k=k/2;
        return k;
    }
