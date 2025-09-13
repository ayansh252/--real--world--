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
        printf("Element is %d\n ", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertionatbegining(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node *insertinindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node *insertionatend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p = head;
    
    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node *insertafteranode(struct node *head, struct node *prevnode, int data)
{
    struct node *ptr =(struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevnode->next;
    prevnode->next = ptr;

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
    fifth->next = NULL;
    printf("\nnoriginal linkedlist\n");
    linkedlisttraversal(head);
    // printf("\nlist after inserting element in the beginning\n ");
    // head=insertionatbegining(head, 45);
    // linkedlisttraversal(head);
    // printf("\nlist after inserting element in the index\n ");
    // head=insertinindex(head, 25, 3);
    // linkedlisttraversal(head);
    printf("\nlist after inserting element in the end\n ");
    head=insertionatend(head, 67);
    linkedlisttraversal(head);
    // printf("\nlist after inserting element in the node\n ");
    // head=insertafteranode(head,third,90);
    // linkedlisttraversal(head);
    return 0;
}