/*
 * bst.c
 *
 *  Created on: Feb 21, 2024
 *      Author: alyssaditroia
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"

struct node* newNode(int data, char* question, char* guess){
	struct node* newNode = malloc(sizeof(struct node));
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	newNode->question = malloc(strlen(question)+1);
	strcpy(newNode->question, question);
	newNode->guess = malloc(strlen(guess)+1);
	strcpy(newNode->guess, guess);
	return newNode;
}
struct node* insertNode(struct node* root, int data, char* question, char* guess){
if(root == NULL){
	return newNode(data, question, guess);
}
if(data < root->data){
	root->left = insertNode(root->left, data, question, guess);
}
else if(data > root->data){
	root->right = insertNode(root->right, data, question, guess);
}
return root;
}
struct node* searchBST(struct node* root, int data){
if(root == NULL || root->data == data){
	return root;
}
if(data < root->data){
	return searchBST(root->left, data);
}
else{
	return searchBST(root->right, data);
}

}

void freeBST(struct node* root){
	if(root == NULL){
		return;
	}
	freeBST(root->left);
	freeBST(root->right);
	free(root->question);
	free(root->guess);
	free(root);
}
