//using pascal tree
 #include<bits/stdc++.h>
 using namespace std;
 int c(int n,int r){
 if(r==0||n==r){
 return 1;
 }

 return c(n-1,r-1)+c(n-1,r);

 }
 int main(){
 int n,r;
 cin>>n;
 cin>>r;
cout<<c(n,r);
 }
//using factorial
// #include<bits/stdc++.h>
// using namespace std;

// int fact(int x){
//     if(x==0){
//         return 1;
//     }
//     int smalloutput=fact(x-1);
//     return smalloutput*x;
// }
// int NCR(int n,int r){
//     int t1,t2,t3;
//     t1=fact(n);
//     t2=fact(r);
//     t3=fact(n-r);
//     return t1/(t2*t3);
// }
// int main(){
//  int n,r;
//  cin>>n;
//  cin>>r;
//  cout<<NCR(n,r);
//  }