// @csalgo

// Chapter Assignment
// Problem Statement: Path Sum Root to Leaf
// Problem Level: HARD
// Problem Description:
// For a given Binary Tree of type integer and a number K, print out all root-to-leaf paths where the sum of all the node data along the path is equal to K.
// Example:

// If you see in the above-depicted picture of Binary Tree, we see that there are a total of two paths, starting from the root and ending at the leaves which sum up to a value of K = 13.

// The paths are:
// a. 2 3 4 4
// b. 2 3 8

// One thing to note here is, there is another path in the right sub-tree in reference to the root, which sums up to 13 but since it doesn't end at the leaf, we discard it.
// The path is: 2 9 2(not a leaf)

// Input Format:
// The first line of input will contain the node data, all separated by a single space. Since -1 is used as an indication whether the left or right node data exist for root, it will not be a part of the node data.

// The second line of input contains an integer value K.

// Output Format:
// Lines equal to the total number of paths will be printed. All the node data in every path will be printed in a linear fashion taken in the order they appear from top to down bottom in the tree. A single space will separate them all.

// Constriants:
// 1 <= N <= 10^5
// 0 <= K <= 10^8
// Where N is the total number of nodes in the binary tree.

// Time Limit: 1 second

// Sample Input 1:
// 2 3 9 4 8 -1 2 4 -1 -1 -1 6 -1 -1 -1 -1 -1
// 13

// Sample Output 1:
// 2 3 4 4 
// 2 3 8

// Sample Input 2:
// 5 6 7 2 3 -1 1 -1 -1 -1 9 -1 -1 -1 -1
// 13

// Sample Output 2:
// 5 6 2
// 5 7 1



// =====Answer=====
// Correct Option: 

// @csalgo








#include<bits/stdc++.h>
#include<vector>
using namespace std;
template <typename T>
class binary_tree_node{
public:
int data;
binary_tree_node<int> *left;
binary_tree_node<int> *right;
binary_tree_node(T data){
    this->data=data;
    left=NULL;
    right=NULL;
}
~binary_tree_node(){
    delete left;
    delete right;
}
};

void path_sum(binary_tree_node<int>*root,vector<int>&v,int k){
if(root==NULL){
    return;
}
 k=k-root->data;
 v.push_back(root->data);
 if(root->left==NULL && root->right==NULL){
     if(k==0){
         for(int i=0;i<v.size();i++ ){
             cout<<v[i]<<" ";
         }
         cout<<endl;
     }
     v.pop_back();
     return;
 }
 path_sum(root->left,v,k);
 path_sum(root->right,v,k);
 v.pop_back();
 
 

}

binary_tree_node<int>*insert_data(){
    int data;
    cout<<"enter the root data"<<endl;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    binary_tree_node<int> *root=new binary_tree_node<int>(data);
    queue<binary_tree_node<int>*>Q;
    Q.push(root);
    while(Q.size()!=0){

binary_tree_node<int> *front=Q.front();
Q.pop();
int leftchild_data;
cout<<"enter the left child of "<<front->data<<endl;
cin>>leftchild_data;
if(leftchild_data!=-1){
   binary_tree_node<int> *leftchild=new binary_tree_node<int>(leftchild_data); 
   front->left=leftchild;
   Q.push(leftchild);
}
int rightchild_data;
cout<<"enter the right child of "<<front->data<<endl;
cin>>rightchild_data;
if(rightchild_data!=-1){
   binary_tree_node<int> *rightchild=new binary_tree_node<int>(rightchild_data); 
   front->right=rightchild;
   Q.push(rightchild);
}



    }
    return root;

}
int main(){
 vector<int>v; 
 int k;

binary_tree_node<int> *root=insert_data();
cin>>k;
path_sum(root,v,k);



}