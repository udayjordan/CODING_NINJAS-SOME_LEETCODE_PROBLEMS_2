#include<iostream> 
using namespace std;
int print(int n){
if(n==0){
    return 1;

}
int output=print(n-1);
   cout<<n*output<<" ";
   return 1;
}

int main(){
    int n;
cin>>n;
print(n);
}