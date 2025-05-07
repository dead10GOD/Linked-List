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
node *deleteHead(node *head)
{
    if (head == NULL)
        return head;
    node *t = head;
    head = head->next;
    delete (t);
    return head;
}
node *deleteTail(node *head)
{
    if (head == NULL)
        return NULL;
    node *t = head;
    if (t->next == NULL)
    {
        delete (head);
        return NULL;
    }
    while (t->next->next != NULL)
        t = t->next;

    delete (t->next);
    t->next = NULL;
    return head;
}
node *deleteNth(node *head, int pos) //! assuming pos is not more than length of the LL
{
    if (head == NULL)
        return NULL;

    node *temp = head;

    if (pos == 1)
    {
        head = head->next;
        delete (temp);
        return head;
    }

    for (int i = 1; i <= pos - 2; i++, temp = temp->next);

    node *t = temp->next;   // node to be deleted 
    temp->next = temp->next->next;
    delete(t);
    return head;

}

int main()
{
    
}
