class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int t=n;
        int s=0,c=0;
        while(t>0){
            int p=t%10;
            s=s+p;
            t=t/10;
        }
        int k=s;
        int rev=0;
        while(k>0){
            int r=k%10;
            rev=rev*10+r;
            k=k/10;
        }
        
       
        if(rev==s)return 1;
        else return 0;
        
    }
};
