Node *constructLL(vector<int> &arr)
{
    // Write your code here
    Node *temp = NULL;
    Node *head;
    head = new Node(arr[0], NULL);
    temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *x = new Node(arr[i], NULL);
        temp->next = x;
        temp = x;
    }
    return head;
}