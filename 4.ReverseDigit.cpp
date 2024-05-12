class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long rev=0,t,rem;
		    t=n;
		    while(t!=0){
		        rem=t%10;
		        rev=(rev*10)+rem;
		        t=t/10;
		        
		    }
		    return rev;
		}
};
