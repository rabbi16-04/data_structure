// C++ program to insert element in binary search tree
#include <iostream>
#include <queue>
using namespace std;

/*function to insert element in binary tree */
void insert(struct Node* temp, int key)
{
    queue<struct Node*> q;
    q.push(temp);
 
    // Do level order traversal until we find
    // an empty place. 
    while (!q.empty()) {
        struct Node* temp = q.front();
        q.pop();
 
        if (!temp->left) {
            temp->left = newNode(key);
            break;
        } else
            q.push(temp->left);
 
        if (!temp->right) {
            temp->right = newNode(key);
            break;
        } else
            q.push(temp->right);
    }
}