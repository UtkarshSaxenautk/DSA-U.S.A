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

// Node *firstNode(Node *head)
// {
//     if(head==NULL || head->next==NULL){
//         return NULL;
//     }
// Node*slow=head;
// Node*fast=head;
// while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (fast == slow)
//           break;
// }
// }
// if(fast==NULL || fast->next==NULL){
//     return NULL;
// }
// slow=head;
// while (slow !=fast) {
//     slow = slow->next;
//     fast = fast - next;
// }
// return slow;
// }
Node *firstNode(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr; // No cycle
    }

    Node *slow = head;
    Node *fast = head;

    // Detect if there's a cycle
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break; // Cycle detected
        }
    }

    // If there's no cycle
    if (fast == nullptr || fast->next == nullptr)
    {
        return nullptr;
    }

    // Move slow pointer to the head, keep fast at the meeting point
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // Now slow and fast both point to the start of the cycle
    return slow;
}
