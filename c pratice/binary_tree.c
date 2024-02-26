#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

// struct node *create_node(int data, struct node *left_node, struct node *right_node)
// {
//     struct node *n = (struct node *)malloc(sizeof(struct node));
//     n->data = data;
//     n->left = left_node;
//     n->right = right_node;
//     return n;
// }

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node *p = create_node(4);
    struct node *p2 = create_node(1);
    struct node *p3 = create_node(6);
    struct node *p4 = create_node(5);
    struct node *p5 = create_node(2);

    p->left = p2;
    p->right = p3;
    p2->left = p4;
    p2->right = p5;

    // struct node *p3 = create_node(4, NULL, NULL);
    // struct node *p4 = create_node(1, NULL, NULL);
    // struct node *p5 = create_node(6, NULL, NULL);
    // struct node *p2 = create_node(5, p4, p5);
    // struct node *p = create_node(2, p2, p3);

    printf("\npreorder traversal :");
    preorder(p);
    printf("\npostorder traversal :");
    postorder(p);
    printf("\ninorder traversal :");
    inorder(p);
    return 0;
}

/*if we want to declare in one line*/
/*
      struct node *p = create_node(4,
                        create_node(1,
                            create_node(5, NULL, NULL),
                            create_node(2, NULL, NULL)
                        ),
                        create_node(6, NULL, NULL)
                    );
*/
