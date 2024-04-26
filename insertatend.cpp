/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node *insertAtTail(Node *head, int k)
{
    // Write your code here
    Node *add = new Node(k);
    Node *temp = head;
    if (head == NULL)
    {
        return add;
    }
    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    add->prev = temp;
    temp->next = add;
    return head;
}
