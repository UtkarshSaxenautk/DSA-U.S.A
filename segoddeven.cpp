// /*
//  * Definition for linked list.
//  * class Node {
//  *  public:
//  *		int data;
//  *		Node *next;
//  *		Node() : data(0), next(nullptr) {};
//  *		Node(int x) : data(x), next(nullptr) {}
//  *		Node(int x, Node *next) : data(x), next(next) {}
//  * };
//  */

// Node* segregateEvenOdd(Node* head)
// {
//    Node *temp=head;
//    int len=0;
//    while(temp!=NULL){
//        len++;
//        temp=temp->next;
//    }
//    int *arr=new int [len];
//    temp=head;
//    int i=0;
//    while(temp){
//        if(temp->data%2==0){
//            arr[i]=temp->data;
//            i++;
//        }
//        temp=temp->next;
//    }
//    temp=head;
//    while(temp){
//        temp=head;
//        if(temp->data%2!=0){
//            arr[i]=temp->data;
//            i++;
//        }
//        temp=temp->next;
//    }
//    i=0;
//    temp=head;
//    while(temp){
//        temp->data=arr[i];
//        i++;
//        temp=temp->next;
//    }
//    return head;
// }
Node *segregateEvenOdd(Node *head)

{

    // Write your code here

    Node *temp = head;

    int len = 0;

    while (temp)
    {

        len++;

        temp = temp->next;
    }

    int *arr = new int[len];

    temp = head;

    int i = 0;

    while (temp)
    {

        if (temp->data % 2 == 0)
        {

            arr[i] = temp->data;

            i++;
        }

        temp = temp->next;
    }

    temp = head;

    while (temp)
    {

        if (temp->data % 2 != 0)
        {

            arr[i] = temp->data;

            i++;
        }

        temp = temp->next;
    }

    i = 0;

    temp = head;

    while (temp)
    {

        temp->data = arr[i];

        i++;

        temp = temp->next;
    }

    return head;
}