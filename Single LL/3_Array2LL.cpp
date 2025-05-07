#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }
    node(int data2)
    {
        data = data2;
        next = nullptr;
    }
};
void printLL(node *head)
{
    for (node *temp = head; temp != NULL; temp = temp->next)
        cout << temp->data << " ";
}
node *Arr2LL(vector<int> &a)
{
    node *head = new node(a[0]);
    node *temp = head;
    for (int i = 1; i < a.size(); i++)
    {
        node *nayaNode = new node(a[i]);
        temp->next = nayaNode;
        temp = nayaNode;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    node *head = Arr2LL(arr);
    printLL(head);
}
