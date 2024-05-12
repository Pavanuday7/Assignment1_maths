class Solution {
  public:
    string armstrongNumber(int q){
        // code here
        int k=0;
        int n=q;
        int p;
        while(n>0){
            p=n%10;
            k=k+(p*p*p);
            n=n/10;
        }
        if(k==q){
            return "Yes";
        }
        else{
            return "No";
        }
        
    }
};
