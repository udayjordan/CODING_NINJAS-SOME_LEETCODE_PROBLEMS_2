
//QUICK SORT

#include<bits/stdc++.h> 
using namespace std;
int partition(int a[],int lb ,int ub){
int pivot=a[lb];
int start=lb;
int end=ub;
while(start<end){
while(a[start]<=pivot){
    start++;
}
while(a[end]>pivot){
    end--;
}
if(start<end){
    int c=a[start];
    a[start]=a[end];
    a[end]=c;
}
}
int d=a[lb];
a[lb]=a[end];
a[end]=d;
return end;
}
void quick_sort(int a[],int lb,int ub){
if(lb<ub){
    int loc=partition(a,lb,ub);
    quick_sort(a,lb,loc-1);
    quick_sort(a,loc+1,ub);
}
}
int main(){
int a[]={10,15,1,2,9,16,11};
quick_sort(a,0,6);
for(int i=0;i<=6;i++){
    cout<<a[i]<<" ";
}

}