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