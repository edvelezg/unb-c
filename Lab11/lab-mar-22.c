/*
File: lab-mar-22.c simple implementation of a binary search tree
keys are strings
partial solution to lab Mar 22/24 CS1023 Winter 2011
*/



#include "strlib.h" //for StringCompare function


typedef struct nodeT
{
    string key;
    struct nodeT *left, *right;
}nodeT, *treeT;



/*function prototypes*/

treeT FindNode(treeT t, string key);
void InsertNode(treeT *tptr, string key);
void DisplayTree(treeT t);
void PostOrderWalk(treeT t);
void PreOrderWalk(treeT t);

int main()
{

    //create a languageTree
    treeT languageTree = NULL;
    //insert some values (programming languages)
    InsertNode(&languageTree, "Java");
    InsertNode(&languageTree, "C");
    InsertNode(&languageTree, "Fortran");
    InsertNode(&languageTree, "Python");
    InsertNode(&languageTree, "Haskell");
    InsertNode(&languageTree, "Ruby");
    InsertNode(&languageTree, "Prolog");
    InsertNode(&languageTree, "C#");

    //display the tree using InOrder, PreOrder and PostOrder traversal

    printf("\nIn Order Traversal\n");
    DisplayTree(languageTree);

    printf("\nPre Order Traversal\n");
    PreOrderWalk(languageTree);

    printf("\nPost Order Traversal\n");
    PostOrderWalk(languageTree);

    FreeBlock(languageTree);

}



treeT FindNode(treeT t, string key)
{

    int sign;
    if (t==NULL) return NULL;

    sign = StringCompare(key, t->key);

    if (sign == 0) return(t);
    if (sign < 0)
    {
        return(FindNode(t->left, key));
    } else
        return(FindNode(t->right, key));
}

void InsertNode(treeT *tptr, string key)
{

    treeT t;
    int sign;

    t = *tptr;
    if (t == NULL)
    {
        t = New(treeT);
        t->key = CopyString(key);
        t->left = t->right = NULL;
        *tptr = t;
        return;
    }

    sign = StringCompare(key, t->key);
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
        printf("%s\n", t->key);
        DisplayTree(t->right);
    }
}



// Pre Order traversal of the tree
void PreOrderWalk(treeT t)
{
    if (t != NULL)
    {
        printf("%s\n", t->key);
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
        printf("%s\n", t->key);

    }
}

