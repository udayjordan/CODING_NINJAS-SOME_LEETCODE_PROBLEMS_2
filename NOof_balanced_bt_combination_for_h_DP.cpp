// @csalgo

// Coding Problem
// Problem Statement: Number of balanced Binary Trees
// Problem Level: HARD
// Problem Description:
// Given an integer h, find the possible number of balanced binary trees of height h. You just need to return the count of possible binary trees which are balanced.
// This number can be huge, so return output modulus 10^9 + 7.
// Write a simple recursive solution.
// Input Format :
// Integer h

// Output Format :
// Count % 10^9 + 7

// Input Constraints :
// 1 <= h <= 40

// Sample Input 1:
// 3

// Sample Output 1:
// 15

// Sample Input 2:
// 4

// Sample Output 2:
// 315

// @csalgo





#include<bits/stdc++.h>
using namespace std;
int mod=pow(10,9)+7;
int dp(int h,int *arr){
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=h;i++){
int x=arr[i-1];
int y=arr[i-2];
int temp1=(int)(((long)(x)*x) % mod);
int temp2=(int)((2*(long)(x)*y) % mod);
arr[i]=(temp1+temp2)%mod;
    }
    return arr[h];
}
int main(){
    int h;
    cin>>h;
    int *arr=new int[h+1];
    for(int i=0;i<=h;i++){
        arr[i]=-1;
    }

    cout<<dp(h,arr);
}