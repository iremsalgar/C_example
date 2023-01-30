#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

struct node {
    int data;
    struct node* next;
};

struct stack {
    struct node* head;
    int num_elements;
};

void push(struct stack* s, int data) 
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = s->head;
    s->head = new_node;
    s->num_elements++;
}

int pop(struct stack* s) 
{
    if (s->head == NULL) 
    {
        ft_printf("Stack underflow\n");
        return -1;
    }
    struct node* temp = s->head;
    s->head = s->head->next;
    s->num_elements--;
    int popped = temp->data;
    free(temp);
    return popped;
}

int pull(struct stack* s) 
{
    if (s->head == NULL) 
    {
        ft_printf("Stack is empty\n");
        return -1;
    }
    return s->head->data;
}

void print_stack(struct stack* s) 
{
    struct node* temp = s->head;
    while (temp != NULL) 
    {
        ft_printf("%d ", temp->data);
        temp = temp->next;
    }
    ft_printf("\n");
}

int main() 
{
    struct stack s;
    s.head = NULL;
    s.num_elements = 0;

    char c = ' ';
    while (c != 'q') 
    {
        ft_printf("Enter a number to push to the stack or p to pop from the stack or q to quit: ");
        scanf(" %c", &c);
        if (c >= '0' && c <= '9') 
        {
            int num = c - '0';
            push(&s, num);
        }
        else if (c == 'p') 
        {
            int popped = pop(&s);
            if (popped != -1) 
            {
                ft_printf("Popped %d from the stack\n", popped);
            }
        }
    }
    ft_printf("Final stack: ");
    print_stack(&s);
    return 0;
}
