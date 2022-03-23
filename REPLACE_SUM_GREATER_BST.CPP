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
void print_levelwise(binary_tree_node<int>*root){
    if(root==NULL){
        return;
    }
    queue<binary_tree_node<int>*>q;
    q.push(root);
    while(q.size()!=0){
        binary_tree_node<int>* front=q.front();
        cout<<front->data<<" ";
        q.pop();
        if(front->left!=NULL){
q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
    }

}
int replace_sum_greater(binary_tree_node<int>*root,int sum){
if(root==NULL){
    return sum;
}
sum=replace_sum_greater(root->right,sum);
sum=sum+root->data;
root->data=sum;

sum=replace_sum_greater(root->left,sum);
return sum;
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

replace_sum_greater(root,0);
print_levelwise(root);



}
