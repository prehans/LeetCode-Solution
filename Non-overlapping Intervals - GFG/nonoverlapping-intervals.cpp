//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minRemoval(int N, vector<vector<int>> &intervals) {
        // code here
         vector<pair<int,int>>p;
        int n=intervals.size();
        for(int i=0;i<n;i++)
      p.push_back({intervals[i][1], intervals[i][0]});
        sort(p.begin(),p.end());
        int prev=p[0].first;
        int c=1;
        for(int i=1;i<n;i++)
        {
            if(prev<=p[i].second)
            {
                c++;
                prev=p[i].first;
            }
        }
return n-c;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(N, intervals) << endl;
    }
    return 0;
}
// } Driver Code Ends