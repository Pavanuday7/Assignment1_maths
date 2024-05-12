
class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int p=max(a,b);
        int q=min(a,b);
        if(p%q==0){
            return q;
        }else{
            while(p%q!=0){
            int k=p%q;
            p=q;
            q=k;
            }
            return q;
            
        }
    }
};
