class Solution
{
    bool ismatching(char a,char b)
    {
        return ((a=='[' && b==']') || (a=='(' && b==')') || (a=='{' && b=='}'));
    }
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]=='[' || x[i]=='{' || x[i]=='(')
            {
                s.push(x[i]);
            }
            else
            {
                if(s.empty()==true)
                return false;
                else if(ismatching(s.top(),x[i])==false)
                return false;
                else
                s.pop();
            }
        }
        if(s.empty()==true)
        return true;
    }

};
