#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1:Deleting the first element from the linkedlist 
struct node *deletionatbegining(struct node *head)
{
    //struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2:Deleting the element at a given index from the linkedlist 
struct node* deletionatindex(struct node *head,int index)
{
    struct node *p=head;
    struct node *q=head->next;
    int i=0;
    while(i<index-1)
    {
       p=p->next;
       q=q->next;
       i++;
    }
    p->next=q->next;
    free(q);
    return head;
}

//Case 3:Deleting the  last element from the linkedlist
struct node* deletinglast(struct node* head)
{
    struct node*p=head;
    struct node* q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

//Case 4:Deleting the  element with a given value from the linkedlist
struct node*deletebyvalue(struct node *head, int value)
{
    struct node* p=head;
    struct node* q=head->next;
    while(q->data!=NULL && q->next!=value)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }
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

    head->data = 5;
    head->next = second;

    second->data = 25;
    second->next = third;

    third->data = 50;
    third->next = fourth;

    fourth->data = 75;
    fourth->next = fifth;

    fifth->data = 100;
    fifth->next = NULL;
    printf("List before deletion of element\n");
    linkedlisttraversal(head);
    printf("List after deletion of element \n");
    deletionatbegining(head);
    linkedlisttraversal(head);
    return 0;
}