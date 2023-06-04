//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            stack<string>st;
            string str="", res="";
            for(int i=0;i<s.length();i++)
            {
                if(s[i]!='+'&&s[i]!='*'&&s[i]!='-'&&s[i]!='/')
                {
                    str=str+s[i];
                }
                else
                {
                    res = res + s[i];
                    st.push(str);
                    st.push(res);
                    str="";
                    res="";
                }
              
        }
          st.push(str);
           while(!st.empty())
            {
                res = res + st.top();
                st.pop();
            }
            return res;
        }
        
        
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends