#include<bits/stdc++.h>
using namespace std;

void inplace_sorting(int *input,int n){
//UP-heapify for insertion
for(int i=1;i<n;i++){
    
    
    int childindex=i;
    
while(childindex>0){
    int parentindex=(childindex-1)/2;
if(input[childindex]<input[parentindex]){
    int temp=input[parentindex];
    input[parentindex]=input[childindex];
    input[childindex]=temp;
}
else{break;}
childindex=parentindex;

}

}
int size=n;
while(size>1){
int temp=input[size-1];
input[size-1]=input[0];
input[0]=temp;
size--;


int parentindex=0;

int leftchildindex=2*parentindex+1;
int rightchildindex=2*parentindex+2;
while(leftchildindex<size){
    int minindex=parentindex;
if(input[leftchildindex]<input[parentindex]){
minindex=leftchildindex;
}
 if(rightchildindex<size && input[rightchildindex]<input[minindex]){
minindex=rightchildindex;

}
if(minindex==parentindex){
    break;
}
int temp=input[minindex];
input[minindex]=input[parentindex];
input[parentindex]=temp;
parentindex=minindex;
 leftchildindex=2*parentindex+1;
 rightchildindex=2*parentindex+2;

}
}

}



int main(){
int arr[]={10,8,7,9,6};
inplace_sorting(arr,5);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
}