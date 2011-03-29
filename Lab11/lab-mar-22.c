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
} nodeT, *treeT;

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

    InsertNode(&languageTree, "5");
    InsertNode(&languageTree, "4");
    InsertNode(&languageTree, "6");
    InsertNode(&languageTree, "1");
    InsertNode(&languageTree, "2");
    InsertNode(&languageTree, "3");
    InsertNode(&languageTree, "7");
    InsertNode(&languageTree, "8");

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


//Another compression technique is COMPAX.  In COMPAX, bitmaps are first
//compressed using WAH, and then are further compressed by encoding words as
//LFL and FLF words.  In these patterns, L words are dirty words that
//contain a single dirty byte and F words are dirty words that always have a
//last dirty byte.  F words are compressed 0-fill words.  unlikely to form
//in their context.  They have dirty words which they call literal words and
//label as L and 0-fill words which are labelled as F.  They additionally
//introduce the LFL, and FLF word, that further compress their WAH encoded
//indices

