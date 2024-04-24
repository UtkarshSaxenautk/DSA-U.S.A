/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *deleteLast(Node *list)
{
    // Write your code here
    Node *head = list;
    Node *temp = head->next;
    while (temp->next != NULL)
    {
        temp = temp->next;
        head = head->next;
    }
    head->next = NULL;
    return list;
}