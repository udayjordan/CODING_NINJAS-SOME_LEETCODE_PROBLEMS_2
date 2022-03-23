void reverse_dig(int &a, int &b)
{
    int rev_a = 0;
    while(a > 0)
    {
        rev_a = rev_a*10 + a%10;
        a = a/10;
    }
    
    a = rev_a;
    
    int rev_b = 0;
    while(b > 0)
    {
        rev_b = rev_b*10 + b%10;
        b = b/10;
    }
    b = rev_b;
    
}
//OR IN THIS WAY
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a=1234;
    int e=a;
    int count=0;
    while(e!=0){
        
    e=e/10;
    count++;
        
    }cout<<count<<endl;
    
    int d=0;
    for(int i=count-1;i>=0;i--){
        int c=a%10;
    d=d+c*pow(10,i);
    a=a/10;
   

    }cout<<d;
}