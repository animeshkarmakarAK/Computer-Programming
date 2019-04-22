
// C program to find n'th Node in linked list
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
struct Node* SortedMerge(struct Node* a, struct Node* b);
void MoveNode(struct Node** destRef, struct Node** sourceRef);
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}




/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node
struct Node {
    int data;
    Node* next;
}; */
Node* SortedMerge(Node* head1,   Node* head2)
{
    struct Node* tmp1 = head1;
    struct Node* tmp2 = head2;
    struct Node* head = new Node;
    struct Node* curr = new Node;
    head = NULL;

    while(tmp1 && tmp2){
        if(tmp1->data < tmp2->data)
        {
            if(head == NULL)
            {
                head = tmp1;
                curr = tmp1;
                if(tmp1->next)
                    tmp1 = tmp1->next;
                else break;
            }
            else
            {
                curr->next = tmp1;
                curr = tmp1;
                if(tmp1->next)
                    tmp1 = tmp1->next;
                    else break;
            }
        }
        else
        {

            if(head == NULL)
            {
                head = tmp2;
                curr = tmp2;

                if(tmp2->next)
                    tmp2 = tmp2->next;
                    else break;
            }
            else
            {
                curr->next = tmp2;
                curr = tmp2;

                if(tmp2->next)
                    tmp2 = tmp2->next;
                    else break;
            }
        }
    }


    if(curr->data != tmp1->data)
    {
        while(tmp1){
         curr->next = tmp1;
         curr = tmp1;

         if(tmp1->next)
            tmp1= tmp1->next;
         else break;
        }
    }
    else{
    if(curr->data != tmp2->data)
    {
        while(tmp2){

         curr->next = tmp2;
         curr = tmp2;

         if(tmp2->next)
            tmp2= tmp2->next;
         else break;
        }
    }
    }

   /* while(tmp1)
    {
        curr->next = tmp1;
        curr = tmp1;
        if(tmp1->next)
            tmp1 = tmp1->next;
        else break;
    }

    while(tmp2)
    {
        curr->next = tmp2;
        curr = tmp2;
        if(tmp2->next)
            tmp2 = tmp2->next;
        else break;
    }
    */

    return head;


    //bool signal = false;
   /* while(tmp1 && tmp2)
    {
        struct Node* newnode = new Node;
        newnode = NULL;
        if(tmp1->data > tmp2->data)
        {
            newnode->data = tmp1->data;
            if(tmp1->next)
                tmp1 = tmp1->next;
            else signal = true;

        }
       else{
        newnode->data = tmp2->data;
            if(tmp2->next)
            tmp2 = tmp2->next;
            else signal = true;
       }

        if(head == NULL)
        {
            head = newnode;
            curr =newnode;

        }else{
        curr->next = newnode;
        curr = newnode;
        }

        if(signal == true)
            break;
    }

    if(tmp1){
        while(tmp1){
                struct Node* nw = new Node;
                nw->data = tmp1->data;
                nw->next = NULL;

                curr->next = nw;
                curr = nw;

                if(tmp1->next)
                    tmp1 = tmp1->next;
                else break;
        }
    }


    if(tmp2){
        while(tmp2){
                struct Node* nw = new Node;
                nw->data = tmp2->data;
                nw->next = NULL;

                curr->next = nw;
                curr = nw;

                if(tmp2->next != NULL)
                    tmp2 = tmp2->next;
                else break;
        }
    }

    return head;*/

}



/* Driver program to test above function*/
int main()
{
    int T,i,n1,n2,l,k;
    cin>>T;
    while(T--)
    {
        struct Node *head1 = NULL,  *tail1 = NULL;
        struct Node *head2 = NULL,  *tail2 = NULL;
        cin>>n1>>n2;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        Node *head = SortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
