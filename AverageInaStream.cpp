class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    // code here
	    vector<float> v(n);
	    float s=0;
	    for(int i=0;i<n;i++){
	        s+=arr[i]*1.0;
	        v[i]=s/(i+1);
	        
	    }
	    return v;
	}
};
