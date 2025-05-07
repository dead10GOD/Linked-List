#include<bits/stdc++.h>
using namespace std;
class node {    // i can write struct also no fifference
    public:
    int data;
    node *next;

    public:
    node(int data1,node* next1)
    {
        data = data1;
        next = next1;
    }

    node(int data2)
    {
        data = data2;
        next=nullptr;
    }
};

int main()
{
    node *y = new node(2,nullptr);  // here i get a pointer
    node x = node (3,nullptr);     // here i get an object
    cout<< y->data;
    cout<< x.data;
}

