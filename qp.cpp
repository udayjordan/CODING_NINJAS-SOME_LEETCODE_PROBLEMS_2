#include<bits/stdc++.h>
using namespace std;
int output[2];

int * func(int *nums,int target,int x){
    
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(nums[i]+nums[j]==target){
                output[0]=i;
                output[1]=j;
                
            }
        }
    }
    
    return output;
}
int main(){
    int target;
    cin>>target;
    int x;
    cout<<"enter the no. of elements";
    cin>>x;
    int nums[100];
    for(int i=0;i<x;i++){
        cin>>nums[i];
    }
    int *p=func(nums,target,x);
    for(int k=0;k<2;k++){
        cout<<p[k]<<endl;
    }
}

