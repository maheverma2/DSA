class Solution{
public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        // your code here
       /* string ans[n];
        int k=0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<arr[i].size();j++)
            {
                if(arr[i-1][j]=arr[i][j])
                ans[k][j]=arr[i][j];
            }
            k++;
        }
        sort(ans,ans+n);
        if(ans[0].size()==0)
        return "-1";
        else
        return ans[0];*/
        string ans="";
        for(int i=0;i<arr[0].size();i++)
        {
            char ch=arr[0][i];
            
            bool match=true;
            for(int j=1;j<n;j++)
            {
                if(arr[j].size()<i ||ch !=arr[j][i])
                {
                   match=false; 
                   break;    
                }
                
            }
            if(match==false)
                break;
            else
                ans+=ch;
        
        }
        if(ans.size()==0)
        return "-1";
        
        return ans;
    }
};
