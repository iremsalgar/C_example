#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

#define QUEUE_SIZE 5

struct queue {
    int data[QUEUE_SIZE];
    int front;
    int rear;
};

void enqueue(struct queue* q, int value) 
{
    if ((q->rear + 1) % QUEUE_SIZE == q->front) 
    {
        ft_printf("Queue is full\n");
        return;
    }
    q->rear = (q->rear + 1) % QUEUE_SIZE;
    q->data[q->rear] = value;
}

int dequeue(struct queue* q) 
{
    if (q->front == q->rear) 
    {
        ft_printf("Queue is empty\n");
        return -1;
    }
    q->front = (q->front + 1) % QUEUE_SIZE;
    return q->data[q->front];
}

int main() 
{
    struct queue q;
    q.front = 0;
    q.rear = 0;

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    ft_printf("Dequeued: %d\n", dequeue(&q));
    ft_printf("Dequeued: %d\n", dequeue(&q));
    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 6);
    enqueue(&q, 7);
    ft_printf("Dequeued: %d\n", dequeue(&q));
    ft_printf("Dequeued: %d\n", dequeue(&q));
    ft_printf("Dequeued: %d\n", dequeue(&q));
    ft_printf("Dequeued: %d\n", dequeue(&q));
    ft_printf("Dequeued: %d\n", dequeue(&q));

    return 0;
}
