#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ft_printf.h"

#define NUM_VERTICES 6

struct vertex {
    int data;
    bool visited;
};

struct queue {
    int data[NUM_VERTICES];
    int front;
    int rear;
};

void enqueue(struct queue* q, int value) 
{
    if ((q->rear + 1) % NUM_VERTICES == q->front) 
    {
        ft_printf("Queue is full\n");
        return;
    }
    q->rear = (q->rear + 1) % NUM_VERTICES;
    q->data[q->rear] = value;
}

int dequeue(struct queue* q) 
{
    if (q->front == q->rear) 
    {
        ft_printf("Queue is empty\n");
        return -1;
    }
    q->front = (q->front + 1) % NUM_VERTICES;
    return q->data[q->front];
}

struct graph {
    struct vertex* vertices[NUM_VERTICES];
    int adjacency_matrix[NUM_VERTICES][NUM_VERTICES];
};

void add_vertex(struct graph* g, int data) 
{
    g->vertices[data] = (struct vertex*) malloc(sizeof(struct vertex));
    g->vertices[data]->data = data;
}

void add_edge(struct graph* g, int source, int destination) 
{
    g->adjacency_matrix[source][destination] = 1;
    g->adjacency_matrix[destination][source] = 1;
}

void bfs(struct graph* g, int start_vertex) 
{
    g->vertices[start_vertex]->visited = true;
    ft_printf("%d ", start_vertex);
    struct queue q;
    q.front = 0;
    q.rear = 0;
    enqueue(&q, start_vertex);

    while (q.front != q.rear) 
    {
       int current_vertex = dequeue(&q);
        for (int i = 0; i < NUM_VERTICES; i++) 
        {
            if (g->adjacency_matrix[current_vertex][i] == 1 && !g->vertices[i]->visited)
            {
                g->vertices[i]->visited = true;
                ft_printf("%d ", i);
                enqueue(&q, i);
            }
        }
    }
}

void dfs(struct graph* g, int current_vertex) 
{
    g->vertices[current_vertex]->visited = true;
    ft_printf("%d ", current_vertex);
    for (int i = 0; i < NUM_VERTICES; i++)
    {
        if (g->adjacency_matrix[current_vertex][i] == 1 && !g->vertices[i]->visited) 
            dfs(g, i);
    }
}

int main() 
{
    struct graph g;
    for (int i = 0; i < NUM_VERTICES; i++) 
        add_vertex(&g, i);
    add_edge(&g, 0, 1);
    add_edge(&g, 0, 2);
    add_edge(&g, 1, 3);
    add_edge(&g, 1, 4);
    add_edge(&g, 2, 5);
    ft_printf("BFS: ");
    bfs(&g, 0);
    ft_printf("\n");
    for (int i = 0; i < NUM_VERTICES; i++)
        g.vertices[i]->visited = false;
    ft_printf("DFS: ");
    dfs(&g, 0);
    ft_printf("\n");
    return 0;
}