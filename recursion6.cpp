// @csalgo

// Coding Problem
// Problem Statement: Check number recursively
// Problem Level: EASY
// Problem Description:
// Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x

// Output Format :
// 'true' or 'false'

// Constraints :
// 1 <= N <= 10^3

// Sample Input 1 :
// 3
// 9 8 10
// 8

// Sample Output 1 :
// true

// Sample Input 2 :
// 3
// 9 8 10
// 2

// Sample Output 2 :
// false


#include<iostream> 
using namespace std;
bool check(int a[],int size,int n){
if(size<=0){
    return false;
}
if(a[size-1]==n){
    return true;
}
bool small_check=check(a,size-1,n);
return small_check;


}
int main(){
    int a[5]={1,2,3,4,5};
    cout<<check(a,5,6);
}