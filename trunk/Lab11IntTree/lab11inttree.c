/*
File: lab-mar-22.c simple implementation of a binary search tree
keys are ints
partial solution to lab Mar 22/24 CS1023 Winter 2011
*/

#include "strlib.h" //for intCompare function

typedef struct nodeT
{
    int key;
    struct nodeT *left, *right;
} nodeT, *treeT;

/*function prototypes*/

treeT FindNode(treeT t, int key);
void InsertNode(treeT *tptr, int key);
void DisplayTree(treeT t);
void PostOrderWalk(treeT t);
void PreOrderWalk(treeT t);

int main()
{
    //create a languageTree
    treeT languageTree = NULL;
    //insert some values (programming languages)
    InsertNode(&languageTree, 4);
    InsertNode(&languageTree, 1);
    InsertNode(&languageTree, 5);
    InsertNode(&languageTree, 2);
    InsertNode(&languageTree, 0);
    InsertNode(&languageTree, 6);

    //display the tree using InOrder, PreOrder and PostOrder traversal

    printf("\nIn Order Traversal\n");
    DisplayTree(languageTree);

    printf("\nPre Order Traversal\n");
    PreOrderWalk(languageTree);

    printf("\nPost Order Traversal\n");
    PostOrderWalk(languageTree);

    FreeBlock(languageTree);
}

treeT FindNode(treeT t, int key)
{

    int sign;
    if (t==NULL) return NULL;

    sign = key - t->key;

    if (sign == 0) return(t);
    if (sign < 0)
    {
        return(FindNode(t->left, key));
    } else
        return(FindNode(t->right, key));
}

void InsertNode(treeT *tptr, int key)
{

    treeT t;
    int sign;

    t = *tptr;
    if (t == NULL)
    {
        t = New(treeT);
        t->key = key;
        t->left = t->right = NULL;
        *tptr = t;
        return;
    }

    sign = key - t->key;
    if (sign ==0 ) return;
    if (sign < 0)
        InsertNode(&t->left, key);
    else
        InsertNode(&t->right, key);
}


// In Order traversal of the tree
void DisplayTree(treeT t)
{
    if (t != NULL)
    {
        DisplayTree(t->left);
        printf("%d\n", t->key);
        DisplayTree(t->right);
    }
}



// Pre Order traversal of the tree
void PreOrderWalk(treeT t)
{

    if (t != NULL)
    {
        printf("%d\n", t->key);
        PreOrderWalk(t->left);
        PreOrderWalk(t->right);
    }
}



// In Order traversal of the tree
void PostOrderWalk(treeT t)
{

    if (t != NULL)
    {
        PostOrderWalk(t->left);
        PostOrderWalk(t->right);
        printf("%d\n", t->key);

    }
}

//In Order Traversal
//0
//1
//2
//4
//5
//6
//
//Pre Order Traversal
//4
//1
//0
//2
//5
//6
//
//Post Order Traversal
//0
//2
//1
//6
//5
//4
