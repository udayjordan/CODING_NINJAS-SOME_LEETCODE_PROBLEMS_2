//TAYLOR'S SERIES


#include<bits/stdc++.h> 
using namespace std;
int p=1;
int f=1;
int e(int x,int n){
    if(n==0){
        return 1;
    }
int smalloutput=e(x,n-1);
p=p*x;
f=f*n;
return smalloutput+(p/f);

}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<e(x,n);
}