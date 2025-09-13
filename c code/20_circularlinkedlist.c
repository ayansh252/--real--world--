#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node*linkedlisttraversal(struct node*head)
{
    struct node*ptr=head;
    do{
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;

    }while(ptr!=head);
    //return head;
}

struct node*insertatfirst(struct node*head,int data)
{
     struct node *ptr =(struct node *)malloc(sizeof(struct node));
     ptr->data=data;
     struct node*p=head->next;
     while(p->next!=head)
     {
        p=p->next;
     }
     p->next=ptr;
     ptr->next=head;
     head=ptr;
     return head;
}

int main()
{
    struct node *head;

    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head = (struct node *)malloc(sizeof(struct node));

    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    // link first and second node
    head->data = 5;
    head->next = second;
    // link second and third node
    second->data = 10;
    second->next = third;
    // link third and fourth node
    third->data = 15;
    third->next = fourth;
    // link fourth and fifth node
    fourth->data = 20;
    fourth->next = fifth;
    // Terminate the list at the third node
    fifth->data = 25;
    fifth->next = head;
    printf("\nnoriginal linkedlist\n");
    linkedlisttraversal(head);
    
    head=insertatfirst(head,85);
     linkedlisttraversal(head);
    return 0;
}