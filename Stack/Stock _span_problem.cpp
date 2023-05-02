class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       // Your code here
       vector<int>ans;
       stack<int>s;
       ans.push_back(1);
       s.push(0);
       
       for(int i=1;i<n;i++)
       {
           while(s.empty()==false && arr[s.top()]<= arr[i])
           s.pop();
           int span=s.empty()?i+1:i-s.top();
           ans.push_back(span);
           s.push(i);
       }
       return ans;
    }
};
