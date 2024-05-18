class Solution
{
public:
        Node *segregate(Node *head)
    {
        if (!head || !head->next)
            return head;

        Node *zero_head = new Node(0);
        Node *one_head = new Node(0);
        Node *two_head = new Node(0);

        Node *zero_tail = zero_head, *one_tail = one_head, *two_tail = two_head;

        Node *curr = head;

        while (curr)
        {
            if (curr->data == 0)
            {
                zero_tail->next = curr;
                zero_tail = zero_tail->next;
            }
            else if (curr->data == 1)
            {
                one_tail->next = curr;
                one_tail = one_tail->next;
            }
            else
            {
                two_tail->next = curr;
                two_tail = two_tail->next;
            }
            curr = curr->next;
        }

        // Connecting tails
        zero_tail->next = one_head->next ? one_head->next : two_head->next;
        one_tail->next = two_head->next;

        // Updating tails
        if (one_tail->next)
            two_tail->next = nullptr;
        else
            one_tail->next = nullptr;

        // Updating head
        head = zero_head->next;

        // Freeing temporary heads
        delete zero_head;
        delete one_head;
        delete two_head;

        return head;
    }
};
