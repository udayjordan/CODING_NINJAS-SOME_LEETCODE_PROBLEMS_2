//@csalgo

// Coding Problem
// Problem Statement: First Index
// Problem Level: EASY
// Problem Description:
// Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
// First index means, the index of first occurrence of x in the input array.
// Do this recursively. Indexing in the array starts from 0.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x

// Output Format :
// first index or -1

// Constraints :
// 1 <= N <= 10^3

// Sample Input :
// 4
// 9 8 10 8
// 8

// Sample Output :
// 1

// @csalgo
#include<iostream> 
using namespace std;
int i=-1;
int calc(int a[],int size,int x){
    
if(size==0){
return -1;
}
if(a[0]==x){
    return 0;
}
i++;
int smalloutput=calc(a+1,size-1,x)+i;

return smalloutput;
}
int main(){
    int a[5]={5,5,6,5,6};
    cout<<calc(a,5,6);
}