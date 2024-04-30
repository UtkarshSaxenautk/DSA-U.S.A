/****************************************************************

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


*****************************************************************/

Node *reverseLinkedList(Node *head)
{

    Node *pre = 0;

    Node *curr = head;

    Node *nex = 0;

    while (curr != 0)

    {

        nex = curr->next;

        curr->next = pre;

        pre = curr;

        curr = nex;
    }

    return pre;
}
