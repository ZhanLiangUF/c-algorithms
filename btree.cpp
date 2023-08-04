#include <iostream>
using namespace std;

struct node {
  int key;
  struct node *left, *right;
};

struct node* newNode(int item)
{
  struct node* temp = new struct node;
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

struct node* insert(struct node* node, int key)
{
  if (node == NULL)
    return newNode(key);

  if (key < node->key)
    node->left = insert(node->left, key);
  else if (key > node->key)
    node->right = insert(node->right, key);

  return node;
}

struct node* search(struct node* root, int key)
{
  if (root == NULL || root->key == key)
    return root;

  if (key < root->key)
    return search(root->left, key);
  else
    return search(root->right, key);
} 

struct node* deleteNode(struct node* root, int key)
{
  // Delete a leaf node in BST
  if (root == NULL)
    return NULL;

  if (root->key > key)
    root->left = deleteNode(root->left, key);
  else if (root->key < key)
    root->right = deleteNode(root->right, key);

  // Deleting Root
  
}

int main()
{
 struct node* root = NULL;
 root = insert(root, 5);
 insert(root, 3);
 insert(root, 2);
 insert(root, 4);
 insert(root, 7);
 insert(root, 6);
 insert(root, 8);

 int key = 3;

 if (search(root, key) == NULL)
   cout << key << "NOT FOUND" << endl;
 else
   cout << key << "FOUND" << endl;

 key = 9;

 if (search(root, key) == NULL)
   cout << key << "NOT FOUND" << endl;
 else
   cout << key << "FOUND" << endl;

}

class BTreeNode{
  int* keys;
  int t;
};


