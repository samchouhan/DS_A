#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} node;
node *init(int x)
{
    node *temp = ((struct node *)malloc(sizeof(x)));
    temp->data = x;
    temp->next = NULL;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");

}
node* insert_beg(node* head, int x)
{
    node* temp=init(x);
    temp->next=head;
    return temp;



}
int main()
{
    node *head = init(10);
    node *first = init(20);
    node *second = init(30);
    node *third = init(40);
    head->next = first;
    first->next = second;
    second->next = third;
    display(head);
    head=insert_beg(head,100);
    display(head);
}