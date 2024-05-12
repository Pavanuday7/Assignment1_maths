class Solution
{
public:
    vector<int> getTable(int N)
    {
        vector<int> a;
        for(int i=1;i<=10;i++){
            a.push_back(N*i);
        }
        return a;
    }
}; 
