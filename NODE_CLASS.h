#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Node{
public:
int data;
Node<int> *next;
Node(int data){
    this -> data=data;
    next=NULL;
}
};
