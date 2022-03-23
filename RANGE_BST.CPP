// @csalgo

// Coding Problem
// Problem Statement: Elements Between K1 and K2
// Problem Level: EASY
// Problem Description:
// Given a Binary Search Tree and two integers k1 and k2, find and print the elements which are in range k1 and k2 (both inclusive).
// Print the elements in increasing order.
// Input format:
// The first line of input contains data of the nodes of the tree in level order form. The data of the nodes of the tree is separated by space. If any node does not have left or right child, take -1 in its place. Since -1 is used as an indication whether the left or right nodes exist, therefore, it will not be a part of the data of any node.
// The following line contains two integers, that denote the value of k1 and k2.

// Output Format:
//  The first and only line of output prints the elements which are in range k1 and k2 (both inclusive). Print the elements in increasing order.

// Constraints:
// Time Limit: 1 second

// Sample Input 1:
// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
// 6 10

// Sample Output 1:
// 6 7 8 10

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
void RANGE(binary_tree_node<int>*root,int k1,int k2){
    if(root==NULL){
return;
    }
     if(k1<=root->data && root->data<=k2){
        cout<<root->data<<" ";
    }
     if(k1<root->data || k2<root->data){
        RANGE(root->left,k1,k2);
    }
if(k2>root->data || k1>root->data){
    RANGE(root->right,k1,k2);
}
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
    int k1;
    int k2;
    cout<<" ENTER THE MIN. RANGE"<<"\n";
    cin>>k1;
    cout<<"ENTER THE MAX RANGE"<<"\n";
    cin>>k2;
binary_tree_node<int> *root=insert_data();
RANGE(root,k1,k2);

delete root;
}