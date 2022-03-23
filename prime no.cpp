#include <iostream>
using namespace std;

int main() {
    int c=8;
    int a=2;
    bool dividend =false;
	while(a<c){
	    if(c%a==0){
	        cout<<"the no. is not prime"<<endl;
	        dividend= true;
	        break;
	    }
	    a++;
	}
	if(!dividend){
	    cout<<"the no is prime ";	}
	
	return 0;
}