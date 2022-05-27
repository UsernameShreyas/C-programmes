#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode *leftChildNode;
    struct TreeNode *rightChildNode;
};

typedef struct TreeNode node;
node *rootNode = NULL;

void insertNode(int i, node **n) {
    if (*n == NULL) {
        (*n) = (node*)malloc(sizeof(node));
        (*n)->leftChildNode = NULL;
        (*n)->rightChildNode = NULL;
        (*n)->data = i;
    }
    else if ((*n)->data == i)
        printf("\nThis value already exists in the tree!");
    else if (i > (*n)->data)
        insertNode(i, &((*n)->rightChildNode));
    else
        insertNode(i, &((*n)->leftChildNode));
}

void searchNode(int i, node **n) {
    if (*n == NULL)
        printf("\nValue does not exist in tree!");
    else if((*n)->data == i)
        printf("\nValue found!");
    else if(i > (*n)->data)
        searchNode(i, &((*n)->rightChildNode));
    else
        searchNode(i, &((*n)->leftChildNode));
}

int main()
{
    int ch, num, num1;
    do {
        printf("\nSelect a choice from the menu below.");
        printf("\n1. Insert a node.");
        printf("\n2. Search for a node.");
        printf("\nChoice: ");
        scanf("%d", &ch);
        switch(ch) {
        case 1:
            printf("\nEnter an element: ");
            scanf("%d", &num);
            insertNode(num, &rootNode);
            break;
        case 2:
            printf("\nEnter the element to be searched for: ");
            scanf("%d", &num);
            searchNode(num, &rootNode);
            break;
        default:
           exit(0);
        }
        printf("\nIf you want to return to the menu, press 1.");
        printf("\nChoice: ");
        scanf("%d", &num);
    } while(num == 1);
    return 0;
}
