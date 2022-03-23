#include<bits/stdc++.h>
using namespace std;
int subsequence_sum_k(int *arr,int index,int n,int sum,int k){
if(index==n){
if(sum==k){
    return 1;
}
return 0;
}
sum+=arr[index];
int lh=subsequence_sum_k(arr,index+1,n,sum,k);// WHEN I AM TAKING THE NO.
sum-=arr[index];//WHEN I AM DECIDING NO TO TAKE I HAVE TO SUBTRACT BECAUSE I AM REMOVING IT FROM THE SET 
int rh=subsequence_sum_k(arr,index+1,n,sum,k);// THIS IS THE CONDITION WHERE I AM DECIDING NO TO TAKE 

return lh+rh;
}
int main(){
int arr[]={1,2,1};
cout<<subsequence_sum_k(arr,0,3,0,3);

}