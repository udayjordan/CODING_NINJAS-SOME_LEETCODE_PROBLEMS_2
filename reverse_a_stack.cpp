#include<iostream>
using namespace std;
#include<stack>



void insert(stack<int>&s1, int elem){

if( s1.size()==0){
     s1.push(elem);   
     return;
}

    int temp=s1.top();
    s1.pop();
    insert(s1,elem);
    s1.push(temp);

return;
}
void reverse(stack<int>&s1){
    if(s1.size()==1){
        return ;
    }  
    int temp=s1.top();
    s1.pop();
    reverse(s1);
    insert(s1,temp);

}
int main(){
stack<int>s1;
int x;
for(int i=0;i<10;i++){
cin>>x;
s1.push(x);
}

reverse(s1);
cout<<s1.top();

}