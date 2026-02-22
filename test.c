#include <stdio.h>
#include <stdlib.h>
#define MS 4
typedef struct
{
    int arr[MS];
    int front;
    int rear;
} queue;
void init(queue *q)
{
    q->front = -1;
    q->rear = -1;
}
void push(queue *q, int x)
{
    if (q->front == 0 && q->rear == MS - 1)
    {
        printf("Phul Bhar gaya hai Bhai!!\n");
        return;
    }
    else if (q->front == -1 && q->rear == -1)
    {
        q->front = q->front + 1;
        q->rear = q->rear + 1;
        q->arr[q->front] = x;
    }
    else
    {
        q->rear = q->rear + 1;
        q->arr[q->rear] = x;
    }
}
int isempty(queue *q)
{
    return (q->front == -1 && q->rear == -1);
}
void display(queue *q)
{
    if (isempty(q))
    {
        printf("Queue is empty\n");
        return;
    }
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}
void pop(queue *q)
{
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    if (q->front == 0 && q->rear == 0)
    {
        q->front = -1;
        q->rear = -1;
    }
    ++q->front;
}
int main()
{
    queue q;
    init(&q);
    push(&q, 10);
    display(&q);
    push(&q, 20);
    display(&q);
    push(&q, 30);
    display(&q);
    push(&q, 40);
    display(&q);
    push(&q, 50);
    display(&q);
    pop(&q);
    display(&q);
    pop(&q);
    display(&q);
    pop(&q);
    display(&q);
    pop(&q);
    display(&q);
    pop(&q);
    display(&q);
    
}
