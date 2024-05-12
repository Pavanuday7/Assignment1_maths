class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    if(v.size()%2==1){
		        return v[v.size()/2];
		    }
		    else{
		        int n=v.size();
		        return (v[(n-1)/2]+v[n/2])/2;
		    }
		}
};
