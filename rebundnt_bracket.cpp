#include<bits/stdc++.h>
#include<stack>
using namespace std;
int c;
void check(stack<char>&s1){
    c=0;
s1.pop();
    char i=s1.top();
    
    
while(i!='(' && s1.size()!=1){
    c++;
     s1.pop();
     i=s1.top();
}
return ;
}
int main(){
stack<char>s1;
char x;
int n;
cin>>n;
for(int i=0;i<n;i++){
cin>>x;
s1.push(x);
}
check(s1);
if(s1.size()!=1 && c!=0 ){

check(s1);
}

    if(c==0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }


}
