/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    void solve(Node* root,int &n,int &ans){
        if(root==NULL)return;
        solve(root->left,n,ans);
        n--;
        if(n==0)ans=root->data;
        solve(root->right,n,ans);
    }
    void count(Node* root,int &n){
        if(root==NULL)return;
        n++;
        count(root->left,n);
        count(root->right,n);
    }
  
    int findMedian(Node* root) {
        // Code here
        int n=0;
        
        count(root,n);
        
        n= (n+1)/2;
        
        int ans = -1;
        
        solve(root,n,ans);
        
        return ans;
    }
};