//taking input from user and printing it in a form of a tree 
// ITS A TREE DESIGN 
//  USED RECURSION BOTH FOR INPUT AND OUTPUT 

// @csalgo

// Coding Problem
// Problem Statement: Node with largest data
// Problem Level: MEDIUM
// Problem Description:
// Given a generic tree, find and return the node with maximum data. You need to return the node which is having maximum data.
// Return null if tree is empty.
// Input format :
// The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.

// Output Format :
// The first and only line of output contains the data of the node with largest data in the given tree.

// Constraints:
// Time Limit: 1 sec

// Sample Input 1:
// 10 3 20 30 40 2 40 50 0 0 0 0

// Sample Output 1:
// 50

// @csalgo

// @csalgo
#include<bits/stdc++.h>
#include<vector>
using namespace std;
template <typename T>
class treeNode{
public:
T data;
vector<treeNode<T>*>children;
treeNode(T data){
this->data=data;
}
};
void print(treeNode<int>* rootData){
    cout<<rootData->data<<':';
    for(int i=0;i<rootData->children.size();i++){
cout<<rootData->children[i]->data<<',';
}
cout<<endl;
for(int i=0;i<rootData->children.size();i++){
print(rootData->children[i]);
}
}
treeNode<int>* insertNode(){
    int data;
    cout<<"enter the root";
    cin>>data;
    treeNode<int>*rootData=new treeNode<int>(data);
    int n;
    cout<<"enter the no. of nodes";
    cin>>n;
    for(int i=0;i<n;i++){
      treeNode<int>* child=insertNode();
      rootData->children.push_back(child);  
    }
    return rootData;
}
vector<int>vec;
vector<int> largest_Nodes( treeNode<int>*root){
   
     for(int i=0;i<root->children.size();i++){
         largest_Nodes(root->children[i]);
     }
     vec.push_back(root->data);
    return vec;
}
int main(){
     treeNode<int>* root=insertNode();
    // treeNode<int>* node1=new treeNode<int>(2);
    // treeNode<int>* node2=new treeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
     vector<int>vec=largest_Nodes(root);
      sort(vec.begin(),vec.end());
     int max=vec[0];
     for(int i=0;i<vec.size();i++){
         if(max<vec[i]){
             max=vec[i];
         }
     }
cout<<max;
     
   // print(root);
}
