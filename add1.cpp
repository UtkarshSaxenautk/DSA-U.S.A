/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
void recurse(Node *head, int &carry)
{
    if (head == NULL)
        return;
    recurse(head->next, carry);
    if (carry != 0)
    {
        head->data += carry;
        carry = head->data / 10;
        head->data %= 10;
    }
}
Node *addOne(Node *head)
{
    int carry = 1;
    recurse(head, carry);
    if (carry != 0)
    {
        Node *temp = new Node(carry, head);
        head = temp;
    }
    return head;
}
