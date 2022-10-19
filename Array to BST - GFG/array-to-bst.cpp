// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    struct Node {
        int val;
        Node *left;
        Node *right;
        
        Node(int x){
            val = x;
            left = right = NULL;
        }
    };
public:
    Node* dfs(vector<int> &nums,int start,int end){
        if(start > end) return NULL;
        int mid = start + (end-start)/2;
        auto root = new Node(nums[mid]);
        
        root->left = dfs(nums,start,mid-1);
        root->right = dfs(nums,mid+1,end);
        
        return root;
    }
    
    void preorder(Node* root,vector<int> &ans){
        if(root){
            ans.push_back(root->val);
            preorder(root->left,ans);
            preorder(root->right,ans);
        }
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        Node *root = dfs(nums,0,nums.size()-1);
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends