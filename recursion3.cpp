#include<iostream> 
using namespace std;
int print(int n){
    int count =0;
    if(n/10==0){
        return 1;
    }
   
    
    int output=print(n/10);
    

    return 1+output;
    
    
    
}
int main(){
    
    cout<<print(176);
    
}