/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *removeKthNode(Node *head, int K)

{

    Node *temp = head;

    int count = 0;

    while (temp)

    {

        temp = temp->next;

        count++;
    }

    int req = count - K;

    Node *prev = NULL;

    temp = head;

    int i = 0;

    if (i == 0 && req == 0)

    {

        return head->next;
    }

    while (i != req)

    {

        prev = temp;

        temp = temp->next;

        i++;
    }

    prev->next = temp->next;

    delete (temp);

    return head;
}