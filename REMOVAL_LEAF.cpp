// @csalgo

// Chapter Assignment
// Problem Statement: Remove Leaf nodes
// Problem Level: EASY
// Problem Description:
// Remove all leaf nodes from a given Binary Tree. Leaf nodes are those nodes, which don't have any children.
// Note : Root will also be a leaf node if it doesn't have left and right child. You don't need to print the tree, just remove all leaf nodes and return the updated root.
// Input format :
// Elements in level order form (separated by space)
// (If any node does not have left or right child, take -1 in its place)
// Output Format :
// Elements are printed level wise, each level in new line (separated by space).

// Sample Input :
// 8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1

// Sample Output :
// 8
// 3 10
// 6 14



// =====Answer=====
// Correct Option: 

// @csalgo



#include<bits/stdc++.h>
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
void print_levelwise(binary_tree_node<int>*root){
    if(root==NULL){
        return;
    }
    
        queue<binary_tree_node<int>*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()!=0){
       binary_tree_node<int> *front = q.front();
        q.pop();
        if(front==NULL){
            if(q.size()==0){
                return;
            }
            cout<<endl;
            q.push(NULL);
        }
        
        else{
            cout<<front->data<<" ";
            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
       }}
       binary_tree_node<int>* leaf_removal(binary_tree_node<int>*root){
           if(root==NULL){
               return 0;
           }
           if(root->left==NULL&&root->right==NULL){
               return NULL;
           }
           root->left=leaf_removal(root->left);
           root->right=leaf_removal(root->right);
           return root;
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
binary_tree_node<int> *root_1=insert_data();
binary_tree_node<int>*root=leaf_removal(root_1);
print_levelwise(root);
delete root;
}