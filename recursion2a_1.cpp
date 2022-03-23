#include<bits/stdc++.h> 
using namespace std;
void merge(int A[],int l,int mid,int h){
    int b[100];
int i=l;
int j=mid+1;
int k=l;
while(i<=mid&&j<=h){
    if(A[i]<A[j]){
        b[k]=A[i];
        k++;
        i++;
    }
    else{
        b[k]=A[j];
        j++;
        k++;
    }

}

    while(j<=h){
        b[k]=A[j];
        j++;k++;
    }


    while(i<=mid){
        b[k]=A[i];
        i++;
        k++;
    }

for(int m=l;m<=h;m++){
    A[m]=b[m];
}
}
void merge_sort(int a[],int l,int h){
if(l>=h){
    return;
}

 int mid=(l+h)/2;
merge_sort(a,l,mid);
merge_sort(a,mid+1,h);
merge(a,l,mid,h);

}
int main(){
int a[]={9,3,7,5,6,4,8,2};
    merge_sort(a,0,7);
    for(int i=0;i<=7;i++){
        cout<<a[i];
    }
    return 0;
}