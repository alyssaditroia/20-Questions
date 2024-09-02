/*
 * bst.h
 *
 *  Created on: Feb 21, 2024
 *      Author: alyssaditroia
 */

#ifndef BST_H_
#define BST_H_

struct node
{
int data;
char* question;
char* guess;
struct node* left;
struct node* right;
};

struct node* newNode(int data, char* question, char* guess);
struct node* insertNode(struct node* root, int data, char* question, char* guess);
struct node* searchBST(struct node* root, int data);
void freeBST(struct node* root);


#endif /* BST_H_ */
