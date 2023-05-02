class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>s;
        vector<long long>ans;
        s.push(arr[n-1]);
        ans.push_back(-1);
        for(int i=n-2;i>=0;i--)
        {
            while(s.empty()==false && s.top()<=arr[i])
            s.pop();
            long long c=s.empty()?-1:s.top();
            ans.push_back(c);
            s.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
