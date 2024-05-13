class Solution {
  public:
    long long reverse(long long n){
        long long s=0;
        while(n>0){
            int k=n%10;
            s=s*10+k;
            n=n/10;
            
        }
        return s;
    }
    long long isSumPalindrome(long long n){
        // code here
        for(int i=0;i<=5;i++){//run loop only 5 times
        
            if(n==reverse(n)){// compair 23 == 32, 55 == 55
                return n;
            }
            n=n+reverse(n);// add 23+32=55
        }
        return -1;
    }
};
