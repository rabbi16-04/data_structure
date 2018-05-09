// C++ program to insert element in binary search tree
#include <iostream>
#include <queue>
using namespace std;

/* A binary tree node has key, pointer to left child
and a pointer to right child */
struct Node {
    int key;
    struct Node* left, *right;
};

/* function to create a new node of tree and r
   eturns pointer */
struct Node* newNode(int key)
{
    struct Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}

/* Inorder traversal of a binary tree*/
void inorder(struct Node* temp)
{
    if (!temp)
        return;
 
    inorder(temp->left);
    cout << temp->key << " ";
    inorder(temp->right);
}
 