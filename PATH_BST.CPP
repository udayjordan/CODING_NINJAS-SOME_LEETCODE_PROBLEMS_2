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

vector<int>* node_path(binary_tree_node<int>*root,int data1){
if(root==NULL){
    return NULL;

}
if(root->data=data1){
    vector<int>* v=new vector<int>();
    v->push_back(root->data);
    return v;
}
vector<int>*leftoutput=node_path(root->left,data1);

 if(leftoutput!=NULL){
    leftoutput->push_back(root->data);
    return leftoutput;
}
vector<int>*rightoutput=node_path(root->right,data1);
 if(rightoutput!=NULL){
    rightoutput->push_back(root->data);
    return rightoutput;
}
else{
    return NULL;
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
    
binary_tree_node<int> *root=insert_data();
vector<int>* v=node_path(root,6);
for(int i=0;i<v->size();i++){
    cout<<v->at(i)<<endl;
}
delete v;
delete root;
}