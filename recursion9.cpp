#include<bits/stdc++.h> 
using namespace std;

 int calc(int a[],int N,int x,int output[]){
     if(N==0){
return 0;
     }
     int smalloutput=calc(a+1,N-1,x,output);
     if(a[0]==x){
     for(int i=smalloutput-1;i>=0;i--)
         
         {
             output[i+1]=output[i]+1;
         }
     
     output[0]=0;
     smalloutput++;
     }
     
     else {
         for(int i=smalloutput-1;i>=0;i--)
         
         {
             output[i]=output[i]+1;
         }
         }
return smalloutput;
     



 

 }
void print(int a[],int N,int x){
    int output[N];
int y=calc(a,N,x,output);
    for(int i=0;i<y;i++)
    cout<<output[i]<<" ";
}
 
int main(){
    
    int a[]={5,6,5,5,6};
    int x=5;
    int N=sizeof(a)/sizeof(a[0]);
print(a,N,x);
    
}
