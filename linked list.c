#include<stdio.h>
#include<stdlib.h>



struct node{

int data;
struct node *next;

};

int main()
{
    int a,b,c;

    struct node *head=NULL;
    struct node *second=NULL;
        struct node *third=NULL;

        head=(struct node*)malloc (sizeof(struct node));
             second=(struct node*)malloc (sizeof(struct node));
                  third=(struct node*)malloc (sizeof(struct node));

                  scanf("%d%d%d",&a,&b,&c);

                  head->data=a;
                  head->next=second;

                  second->data=b;
                  second->next=third;

                  third->data=c;
                  third->next=NULL;


 print_node(head);
return 0;

}


int  print_node(struct node *n)
{
    while(n!=NULL){
    printf("%d",n->data);
     printf("->");
    n=n->next;
    }
      printf("null");
}
