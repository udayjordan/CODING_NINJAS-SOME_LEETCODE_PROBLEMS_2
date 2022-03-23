// @csalgo

// Coding Problem
// Problem Statement: Sum of array (recursive)
// Problem Level: EASY
// Problem Description:
// Given an array of length N, you need to find and return the sum of all elements of the array.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces

// Output Format :
// Sum

// Constraints :
// 1 <= N <= 10^3

// Sample Input 1 :
// 3
// 9 8 9

// Sample Output 1 :
// 26

// Sample Input 2 :
// 3
// 4 2 1

// Sample Output 2 :
// 7

// @csalgo






#include<iostream> 
using namespace std;
int smalleroutput=0;
int sum(int a[],int size){
    

if(size<=0){
    return 0;
}


    



return (sum(a,size-1)+a[size-1]);

}
int main(){
int a[5]={2,3,4,5,6};
cout<<sum(a,5);

}