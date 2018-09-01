/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    TreeNode* help(int prestart,int instart,int inend,vector<int>& preorder,vector<int>& inorder)
    {
        if(prestart>preorder.size()-1 || instart>inend)
            return NULL;
        
        TreeNode* root=new TreeNode(preorder[prestart]);
        int index=0;
        for(int i=instart;i<=inend;i++)
        {
            if(root->val==inorder[i])
                index=i;
        }
        
        root->left=help(prestart+1,instart,index-1,preorder,inorder);
        root->right=help(prestart+index-instart+1,index+1,inend,preorder,inorder);  //若全为右孩子……
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return help(0,0,preorder.size()-1,preorder,inorder);
    }
};
