/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

// int lengthOfLoop(Node *head) {
//     // if(head==NULL || head->next=NULL){
//     //     return 0;
//     // }
//     Node*slow=head;
//     Node*fast=head;
//     int length=1;
//     bool cycle=false;
//     while(fast!=NULL &&fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;

//         if (slow == fast) {
//           cycle = true;
//           break;
//         }
//         }
//         if(cycle==true){
//             while(fast->next!=slow){
//                 length++;
//                 fast=fast->next;
//             }
//         } else {
//             return 0;
//         }
//         return length;
// }

int lengthOfLoop(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return 0; // No loop if there are less than two nodes
    }

    Node *slow = head;
    Node *fast = head;
    int length = 0;
    bool loopExists = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            loopExists = true;
            break; // Loop detected
        }
    }

    if (!loopExists)
    {
        return 0; // No loop found
    }

    // Counting the length of the loop
    do
    {
        length++;
        fast = fast->next;
    } while (slow != fast);

    return length;
}
