#include<iostream> 
using namespace std;
int calc(int a[],int size,int x){
if(size==0){
    return -1;
}
if(a[size-1]==x){
    return size-1;
}


int ans=calc(a,size-1,x);
return ans;

}
