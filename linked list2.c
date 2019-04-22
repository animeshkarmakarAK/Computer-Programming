#include<stdio.h>//simple cicular linked list
#include<stdlib.h>

struct node{
int data;
struct node *next;

};

int print_node(struct node *n,int x)
{
   while(x!=NULL)
   {
       printf("%d->",n->data);
       n=n->next;
       x--;
   }
}



int main()
{
    char ch;
    int d=0;
   struct node *new_node,*start=NULL;;
    struct node *current;
do
    {

     new_node=(struct node*)malloc(sizeof(struct node));
    //current=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&new_node->data);
      new_node->next=NULL;

     if(start==NULL)
     {
         start=new_node;
         current=new_node;

     }

     else
     {
         current->next=new_node;
         current=new_node;
         d=d+1;
     }

printf("u want to creat another");
ch=getche();
if(ch=='n')
{
    current->next=NULL;
}

}while(ch!='n');

current->next=start;
printf("total node=%d\n",d+1);
print_node(start,d+1);

printf("\ndo u want to insert a node at first:");
ch=getche();

if(ch='y')
{
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nenter no:");
    scanf("%d",&new_node->data);
    new_node->next=start;
    start=new_node;
    d=d+1;
}
print_node(start,d+1);


return 0;

}
