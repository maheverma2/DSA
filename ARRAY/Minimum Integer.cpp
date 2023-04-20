class Solution {
  public:
    int minimumInteger(int N, vector<int> &arr) {
        // code here
        long long sum=0;
        for(int i=0;i<N;i++)
        sum+=arr[i];
        
        int ans=INT_MAX;
        
        for(int i=0;i<N;i++)
        {
            if(sum<=(long long)arr[i]*(long long)N)
            ans=min(ans,arr[i]);
        }
        return ans;
    }
};
