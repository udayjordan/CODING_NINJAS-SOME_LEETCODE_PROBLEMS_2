// @csalgo

// Coding Problem
// Problem Statement: Staircase
// Problem Level: MEDIUM
// Problem Description:
// A child runs up a staircase with 'n' steps and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count and return all possible ways in which the child can run-up to the stairs.
// Input format :
// The first and the only line of input contains an integer value, 'n', denoting the total number of steps.

// Output format :
// Print the total possible number of ways.

// Constraints :
// 0 <= n <= 10 ^ 4

// Time Limit: 1 sec

// Sample Input 1:
// 4

// Sample Output 1:
// 7

// Sample Input 2:
// 10

// Sample Output 2:
// 274

// @csalgo

// brute force

#include<bits/stdc++.h>
using namespace std;
long long steps_dp(int n){
  if(n==0){
    return 1;
}  
if(n==1 || n==2){
    return n;

}

long long x=steps_dp(n-1);

long long y=steps_dp(n-2);
long long z=steps_dp(n-3);
long long ans=x+y+z;
return ans;
}
// DP_OF THE CODE
long long dp(long long n,long long *arr){
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    for(long long i=3;i<=n;i++){
        arr[n]=arr[n-1]+arr[n-2]+arr[n-3];
    }
    return arr[n];
}
int main(){
    long long n;
    cin>>n;
     long long *arr=new long long[n+1];
     for(long long i=0;i<=n;i++){
         arr[i]=-1;
     }
     cout<<dp(n,arr);
//cout<<steps_dp(n);
}