#include<bits/stdc++.h> 
using namespace std;
class Node{
public:
int data;
Node *next;
Node(int data){
    this -> data=data;
    next=NULL;
}
};

class queue_1{
Node *head;
Node *temp;
int size;
public:
queue_1(){
head=NULL;
size=0;

}
int get_size(){
   return size; 
}
bool isEmpty(){
   return size==0;
}
void enqueue(int data){
   Node *n=new Node(data);
   if(size==0){
       head=n;
       temp=head;
   }
   else{
   temp->next=n;
   temp=n;

   
   }
   size++;

}
int dequeue(){
    int ans=head->data;
    head=head->next;
    size--;
    return ans;
}

   


};


int main(){
    queue_1 s;
    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.enqueue(40);
    s.enqueue(50);
    cout<<s.dequeue()<<endl;
    cout<<s.dequeue()<<endl;
    cout<<s.dequeue()<<endl;
   
    cout<<s.get_size()<<endl;
    cout<<s.isEmpty()<<endl;
    

    
}