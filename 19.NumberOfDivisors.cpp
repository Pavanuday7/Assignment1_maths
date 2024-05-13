class Solution
{
	public:
		int count_divisors(int n)
		{
		    //Code here.
		    int c=0;
		    for(int i=1;i*i<=n;i++){
		        if(n%i==0 && i%3==0){
		            c++;
		        }
		         if(i==(n/i))break;

         if(n%(n/i)==0&&((n/i)%3==0))c++;
		    }
		    return c;
		}
};
