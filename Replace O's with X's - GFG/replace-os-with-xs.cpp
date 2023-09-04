//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
       vector<vector<int>>vis(n,vector<int>(m,0));
       queue<pair<int,int>>q;

    
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || i==n-1 || j==0 || j==m-1) && mat[i][j]=='O' ){
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
 
        int dr[]={-1,0,1,0};
        int dc[]={0,-1,0,1};

        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
              for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr<n and nc<m and nr>=0 and nc>=0 and vis[nr][nc]==0 and mat[nr][nc]=='O'){
                    q.push({nr,nc});
                    vis[nr][nc]=1;

                }

            }

        }
    
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(mat[i][j]=='O' and !vis[i][j])
               mat[i][j]='X';
           }
       }
       return mat;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends