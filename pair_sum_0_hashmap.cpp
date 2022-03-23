// @csalgo

// Coding Problem
// Problem Statement: Pair sum to 0
// Problem Level: MEDIUM
// Problem Description:
// Given a random integer array A of size N. Find and print the count of pair of elements in the array which sum up to 0.
// Note: Array A can contain duplicate elements as well.
// Input format:
// The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol N.
// The following line contains N space separated integers, that denote the value of the elements of the array.

// Output format :
// The first and only line of output contains the count of pair of elements in the array which sum up to 0.

// Constraints :
// 0 <= N <= 10^4
// Time Limit: 1 sec

// Sample Input 1:
// 5
// 2 1 -2 2 3

// Sample Output 1:
// 2

// @csalgo







#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;
void pair_sum(int *arr,int size){
    int l=0;
    int j=0;
unordered_map<int,int>c;
for(int i=0;i<size;i++){
    if(arr[i]<0){
        c[arr[i]]=arr[i];
         j=i;
    }
}
for(int k=0;k<size;k++){
    if(arr[k]+c[arr[j]]==0){
l++;
    }
}
cout<<l;
}
int main(){
    int arr[]={2 ,2 ,-2 ,2 ,3};
    pair_sum(arr,5);

}