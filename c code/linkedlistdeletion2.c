#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

struct Node *linkedlisttraversal(struct Node * ptr)
{
    while(ptr->next!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;

    }
}

// case 1:Deleting the first element from the linked list
struct Node* deletefirst(struct node*head)
{
   struct Node *ptr=head;
   head=head->next;

}