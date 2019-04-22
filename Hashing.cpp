#include<iostream>
#include<cstdio>

using namespace std;

struct node{

    int key;
    int value;
    struct node *next;

};


struct arrayitem{

    struct node *head;

    struct node *tail;

};

struct arrayitem *array;
int sz = 0;
int array_size = 10;

int hascode(int key)
{
    return key % array_size;
}

void init_array()
{
    for(int i = 0; i<array_size; i++)
    {
        array[i].head = NULL;
        array[i].tail = NULL;
    }
}


void insert(int key, int value)
{
    int idx = hascode(key);

    //struct node *newnode = new array[idx].head;

    struct node *item = new node;
    item->key =key;
    item->value = value;
    item->next = NULL;

    if(array[idx].head == NULL)
    {
        printf("Inserting %d(key) and %d(value) \n",key,value);
        array[idx].head = item;
        array[idx].tail = item;
        sz++;
    }
    else
        {
         array[idx].tail->next = item;
         array[idx].tail = item;
         sz++;
        }

}

void display()
{
    for(int i = 0; i<array_size; i++)
    {
        struct node *tmp = array[i].head;

        if(tmp == NULL)
        {
            printf("array[%d] has no elements\n",i);
        }
        else
        {
            printf("array[%d] has elements-:",i);
            while(tmp != NULL)
            {
                printf("key = %d value = %d \t",tmp->key , tmp->value);
                tmp = tmp->next;
            }
            printf("\n");
        }
    }
}



int main()
{
    char a[100];
    char *arr = a;

    cin>>arr;

    for(int i = 0 ; arr[i] != '\0'; i++)
        cout<<*(arr+i);


    return 0;
    int key , value,check;

    array = new arrayitem;

    init_array();

    do
    {
          printf("Inserting element in Hash Table\n");
          printf("Enter key and value-:\t");
          scanf("%d %d", &key, &value);
          insert(key, value);

          display();

          printf("Do you want to continue-:(press 1 for yes)? ");
    }while((scanf("%d",&check)) == 1);


    return 0;
}
