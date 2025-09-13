#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void linkedlisttraversal(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main ()
{
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    struct node* fifth;
     head=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
     fourth=(struct node*)malloc(sizeof(struct node));
     fifth=(struct node*)malloc(sizeof(struct node));
    //link first and second node
    head->data=5;
    head->next=second;
    //link second and third node
    second->data=10;
    second->next=third;
    //link third and fourth node
    third->data=15;
    third->next=fourth;
    //link fourth and fifth node
    fourth->data=20;
    fourth->next=fifth;
    //Terminate the list at the third node
    fifth->data=25;
    fifth->next=NULL;
    linkedlisttraversal(head);
    return 0;
}