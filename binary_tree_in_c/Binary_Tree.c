#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

struct node {
    int data;
    struct node* left;
    struct node* right;
};

void pre_order(struct node* root) 
{
    if (root == NULL) {
        return;
    }
    ft_printf("%d ", root->data);
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(struct node* root) 
{
    if (root == NULL) {
        return;
    }
    in_order(root->left);
    ft_printf("%d ", root->data);
    in_order(root->right);
}

void post_order(struct node* root) 
{
    if (root == NULL) 
    {
        return;
    }
    post_order(root->left);
    post_order(root->right);
    ft_printf("%d ", root->data);
}

int main() 
{
    struct node* root = (struct node*) malloc(sizeof(struct node));
    root->data = 1;
    root->left = (struct node*) malloc(sizeof(struct node));
    root->left->data = 2;
    root->left->left = (struct node*) malloc(sizeof(struct node));
    root->left->left->data = 4;
    root->left->left->left = NULL;
    root->left->left->right = NULL;
    root->left->right = (struct node*) malloc(sizeof(struct node));
    root->left->right->data = 5;
    root->left->right->left = NULL;
    root->left->right->right = NULL;
    root->right = (struct node*) malloc(sizeof(struct node));
    root->right->data = 3;
    root->right->left = (struct node*) malloc(sizeof(struct node));
    root->right->left->data = 6;
    root->right->left->left = NULL;
    root->right->left->right = NULL;
    root->right->right = (struct node*) malloc(sizeof(struct node));
    root->right->right->data = 7;
    root->right->right->left = NULL;
    root->right->right->right = NULL;
    ft_printf("Pre-order traversal: ");
    pre_order(root);
    ft_printf("\n");

    ft_printf("In-order traversal: ");
    in_order(root);
    ft_printf("\n");

    ft_printf("Post-order traversal: ");
    post_order(root);
    ft_printf("\n");

    return 0;
}