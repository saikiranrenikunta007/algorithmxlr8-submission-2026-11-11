#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
int depth(TreeNode* root){
    if(root == NULL) return 0;
    // cout<<"root->"<<root->val<<endl;
    return 1 + max(depth(root->left),depth(root->right));
}
TreeNode* buildTree(vector<string>&arr){

    int n = arr.size();
    if(n==0 || arr[0]=="null") return NULL;
    TreeNode *root = new TreeNode(stoi(arr[0]));
    int i=1;
    queue<TreeNode*>q;
    q.push(root);
    while(i<n && !q.empty()){
        auto curr = q.front();
        q.pop();
        if(arr[i] != "null"){
            int val = stoi(arr[i]);
            curr->left =new TreeNode(val);
            q.push(curr->left);
        }
        i++;
        if(i<n && arr[i] != "null"){
            auto val = stoi(arr[i]);
            curr->right = new TreeNode(val);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}
int main() {
    // Write your solution here.
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    vector<string>arr;
    while(ss>>word){
        arr.push_back(word);
    }
    TreeNode *root = buildTree(arr);
    cout<<depth(root)<<endl;
    return 0;
}
