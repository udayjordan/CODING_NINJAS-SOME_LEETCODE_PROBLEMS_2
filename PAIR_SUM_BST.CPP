// @csalgo

// Chapter Assignment
// Problem Statement: Pair sum BInary Tree
// Problem Level: MEDIUM
// Problem Description:
// Given a binary tree and an integer S, print all the pair of nodes whose sum equals S.
// Assume binary tree contains all unique elements.
// Note : In a pair, print the smaller element first. Order of different pair doesn't matter.
// Input format :
// Line 1 : Elements in level order form (separated by space)
// (If any node does not have left or right child, take -1 in its place)
// Line 2 : Integer S

// Output Format :
// Each pair in different line (pair elements separated by space)

// Constraints :
// 1 <= N <= 1000

// Sample Input 1:
// 5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
// 15

// Sample Output 1:
// 5 10
// 6 9



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
vector<int>v;
void pair_sum(binary_tree_node<int>*root){

    
    if(root==NULL){
        return;
    }
   v.push_back( root->data);

    
pair_sum(root->left);
pair_sum(root->right);

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
  
binary_tree_node<int> *root=insert_data();
int s;
  cin>>s;
pair_sum(root);
sort(v.begin(),v.end());
int i=0;
int j=v.size()-1;
while(i<j){
    if(v[i]+v[j]>s){
        j--;
    
    }
    if(v[i]+v[j]==s){
        cout<<v[i]<<" "<<v[j]<<endl;
        i++;
        j--;
    }
    if(v[i]+v[j]<s){
i++;
    }
}



}