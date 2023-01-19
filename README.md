# C - Binary trees

<p align="center">
 <img src= "https://www.geeksforgeeks.org/wp-content/uploads/binary-tree-to-DLL.png">

## Description

This project is about Binary Trees in C and other tree-type data structures.

## Learning Objectives

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Formatting and Examples
Format for user to write in "main.c": `main file`

Example:
```
alex@/tmp/binary_trees$ cat 18-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    binary_tree_t *uncle;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root->right, 402);
    root->left->left = binary_tree_node(root->left, 10);
    root->right->left = binary_tree_node(root->right, 110);
    root->right->right->left = binary_tree_node(root->right->right, 200);
    root->right->right->right = binary_tree_node(root->right->right, 512);

    binary_tree_print(root);
    uncle = binary_tree_uncle(root->right->left);
    printf("Uncle of %d: %d\n", root->right->left->n, uncle->n);
    uncle = binary_tree_uncle(root->left->right);
    printf("Uncle of %d: %d\n", root->left->right->n, uncle->n);
    uncle = binary_tree_uncle(root->left);
    printf("Uncle of %d: %p\n", root->left->n, (void *)uncle);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle
alex@/tmp/binary_trees$ ./18-uncle
       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (110)       .--(402)--.
                              (200)     (512)
Uncle of 110: 12
Uncle of 54: 128
Uncle of 12: (nil)
alex@/tmp/binary_trees$
```

## Ancestry Binary Tree

An ancestry chart which can be mapped to a perfect 4-level binary tree

<p align="center">
 <img src= "https://upload.wikimedia.org/wikipedia/commons/2/26/Waldburg_Ahnentafel.jpg">

## Table of contents
Files | Description
----- | -----------
[0-binary_tree_node.c](./0-binary_tree_node.c) | C function that creates a binary tree node
[1-binary_tree_insert_left.c](./1-binary_tree_insert_left.c) | C function that inserts a node as the left-child of another node
[2-binary_tree_insert_right.c](./2-binary_tree_insert_right.c) | C function that inserts a node as the right-child of another node
[3-binary_tree_delete.c](./3-binary_tree_delete.c) | C function that deletes an entire binary tree
[4-binary_tree_is_leaf.c](./4-binary_tree_is_leaf.c) | C function that checks if a node is a leaf
[5-binary_tree_is_root.c](./5-binary_tree_is_root.c) | C function that checks if a given node is a root
[6-binary_tree_preorder.c](./6-binary_tree_preorder.c) | C function that goes through a binary tree using pre-order traversal
[7-binary_tree_inorder.c](./7-binary_tree_inorder.c) | C function that goes through a binary tree using in-order traversal
[8-binary_tree_postorder.c](./8-binary_tree_postorder.c) | C function that goes through a binary tree using post-order traversal
[9-binary_tree_height.c](./9-binary_tree_height.c) | C function that measures the height of a binary tree
[10-binary_tree_depth.c](./10-binary_tree_depth.c) | C function that measures the depth of a node in a binary tree
[11-binary_tree_size.c](./11-binary_tree_size.c) | C function that measures the size of a binary tree
[12-binary_tree_leaves.c](./12-binary_tree_leaves.c) | C function that counts the leaves in a binary tree
[13-binary_tree_nodes.c](./13-binary_tree_nodes.c) | C function that counts the nodes with at least 1 child in a binary tree
[14-binary_tree_balance.c](./14-binary_tree_balance.c) | C function that measures the balance factor of a binary tree
[15-binary_tree_is_full.c](./15-binary_tree_is_full.c) | C function that checks if a binary tree is full
[16-binary_tree_is_perfect.c](./16-binary_tree_is_perfect.c) | C function that checks if a binary tree is perfect
[17-binary_tree_sibling.c](./17-binary_tree_sibling.c) | C function that finds the sibling of a node
[18-binary_tree_uncle.c](./18-binary_tree_uncle.c) | C function that finds the uncle of a node
[binary_tree_print.c](./binary_tree_print.c) | C function that prints a binary tree

## Bugs
If you find any bug, please, let us know.

## Styling
All files have been written in the Betty Style.

### Authors
* **Obed Rayo** [Github](https://github.com/ObedRav)
* **Juan Duque** [Github](https://github.com/Juanesduque1)
