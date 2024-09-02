/*
 * twenty.c
 *
 *  Created on: Feb 21, 2024
 *      Author: alyssaditroia
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "bst.h"
/*struct Trunk {
    struct Trunk* prev;
    char* str;
};*/
//void printTree(struct node* root, struct Trunk* prev, bool isLeft);
//void showTrunks(struct Trunk* p);
void playGame(struct node *root);
struct node* makeTree();

int main(){
	struct node* root = makeTree();

	char playerInput;

	  printf("Welcome to 20 questions! Please pick a fruit or vegetable!\n Enter any key to continue or enter 'q' to quit: \n");
	  scanf(" %c", &playerInput);

	  while (playerInput != 'q'){


		  playGame(root);

	    printf("Enter any key to play again or enter 'q' to quit: \n");
	    scanf(" %c", &playerInput);

	  }

/*	struct node* key = searchBST(root, 25);
	if(key != NULL){
		printf("Node found: Data: %d  Question: %s, Guess: %s\n", key->data, key->question, key->guess);
	}
	else{
		printf("not found");
	}

	key = searchBST(root, 100);
	if(key != NULL){
		printf("Node found: Data: %d  Question: %s, Guess: %s\n", key->data, key->question, key->guess);
	}
	else{
		printf("not found");
	}
	printTree(root, NULL, false);
	freeBST(root);*/
	// printTree(root, NULL, false);

	//Destroys BST to reclaim memory
	freeBST(root);
	return 0;

}
//Creates BST for game
struct node* makeTree(){
	struct node* root = NULL;

	//fruits inserted into tree

		root = insertNode(root, 130, "Is it a fruit?", " ");
		root = insertNode(root, 50, "Is does it have a pit?", " ");
		root = insertNode(root, 10, "Is it fuzzy?", " ");
		root = insertNode(root, 25, "Is it purple in color?", " ");
		root = insertNode(root, 5, " ", "it's a Peach! ");
		root = insertNode(root, 20, " ", "It's a plum! ");
		root = insertNode(root, 35, "Is it red in color?", " ");
		root = insertNode(root, 30, "Does it have long green stems?", " ");
		root = insertNode(root, 40, "Is it orange in color?", " ");
		root = insertNode(root, 29, " ", "It's a cherry!");
		root = insertNode(root, 41, " ", "You win!");
		root = insertNode(root, 31, " ", "It's a nectarine!");
		root = insertNode(root, 38, "Is it small in size? (size of golf ball)", " ");
		root = insertNode(root, 37, " ", "It's an apricot!");
		root = insertNode(root, 39, " ", "It's a mango!");
		root = insertNode(root, 75, "Does it grow on a vine?", " ");
		root = insertNode(root, 65, "Is it usually red, green, or purple?", " ");
		root = insertNode(root, 55, " ", "It's a grape!");
		root = insertNode(root, 66, " ", "You win!");
		root = insertNode(root, 82, "Is it a melon type fruit?", " ");
		root = insertNode(root, 77, "Is it pink inside?", " ");
		root = insertNode(root, 76, " ", "it's a watermelon!");
		root = insertNode(root, 80, "Is it orange inside?", " ");
		root = insertNode(root, 79, " ", "it's a cantelope!");
		root = insertNode(root, 81, " ", "it's a honeydew!");
		root = insertNode(root, 90, "Is it a berry type fruit?", " ");
		root = insertNode(root, 86, "Is it red in color?", " ");
		root = insertNode(root, 88, "Is it blue in color?", " ");
		root = insertNode(root, 84, "Does it have leaves on it?", " ");
		root = insertNode(root, 83, " ", "it's a strawberry!");
		root = insertNode(root, 85, " ", "it's a raspberry!");
		root = insertNode(root, 87, " ", "it's a blueberry!");
		root = insertNode(root, 89, " ", "it's a blackberry!");
		root = insertNode(root, 95, "Is it red in color?", " ");
		root = insertNode(root, 94, " ", "it's an apple!");
		root = insertNode(root, 100, "Does it have spikes?", " ");
		root = insertNode(root, 99, " ", "it's a pineapple!");
		root = insertNode(root, 120, "Is it a citrus type fruit?", " ");
		root = insertNode(root, 105, "Is it orange in color?", " ");
		root = insertNode(root, 102, " ", "it's an orange!");
		root = insertNode(root, 110, "Is it green in color?", " ");
		root = insertNode(root, 109, " ", "it's a lime!");
		root = insertNode(root, 112, "Is it pink or red inside?", " ");
		root = insertNode(root, 111, " ", "it's a grapefruit");
		root = insertNode(root, 113, " ", "it's a lemon!");
		root = insertNode(root, 125, "Is it yellow in color?", " ");
		root = insertNode(root, 124, " ", "it's a banana!");
		root = insertNode(root, 127, "Is it green in color?", " ");
		root = insertNode(root, 126, " ", "it's a kiwi!");
		root = insertNode(root, 129, " ", "it's a coconut!");

		//Vegetables inserted into tree

		root = insertNode(root, 155, "Is it a root vegetable?", " ");
		root = insertNode(root, 143, "Is it orange in color?", " ");
		root = insertNode(root, 141, "does it have a sweet flavor?", " ");
		root = insertNode(root, 142, " ", "it's a carrot!");
		root = insertNode(root, 139, " ", "it's a sweet potato!");
		root = insertNode(root, 148, "Is it brown in color?", " ");
		root = insertNode(root, 146, "Does it have layers?", " ");
		root = insertNode(root, 145, " ", "it's an onion!");
		root = insertNode(root, 147, " ", "it's a potato!");
		root = insertNode(root, 153, "Is it red in color?", " ");
		root = insertNode(root, 150, "Is it white on the inside?", " ");
		root = insertNode(root, 149, " ", "it's a raddish!");
		root = insertNode(root, 151, " ", "it's a beet!");
		root = insertNode(root, 154, " ", "I give up, you win!");
		root = insertNode(root, 195, "Is it commonly used in salads?", " ");
		root = insertNode(root, 165, "Is it leafy?", " ");
		root = insertNode(root, 160, "Are the leaves small?", " ");
		root = insertNode(root, 163, "Is it commonly used in coleslaw?", " ");
		root = insertNode(root, 161, " ", "it's cabbage!");
		root = insertNode(root, 164, " ", "it's lettuce!");
		root = insertNode(root, 157, "Are they peppery in flavor?", " ");
		root = insertNode(root, 156, " ", "it's arugula!");
		root = insertNode(root, 158, " ", "it's spinach!");
		root = insertNode(root, 176, "Is it red in color?", " ");
		root = insertNode(root, 172, "Is it juicy?", " ");
		root = insertNode(root, 171, " ", "it's a tomato!");
		root = insertNode(root, 174, "Can it also be green, orange, or yellow", " ");
		root = insertNode(root, 173, " ", "it's a pepper!");
		root = insertNode(root, 175, " ", "it's cabbage!");
		root = insertNode(root, 180, "Does it have a pit?", " ");
		root = insertNode(root, 179, " ", "it's an avocado!");
		root = insertNode(root, 182, "Is it green in color?", " ");
		root = insertNode(root, 185, "Is it white in color?", " ");
		root = insertNode(root, 181, " ", "it's celery!");
		root = insertNode(root, 184, " ", "it's an onion!");
		root = insertNode(root, 186, " ", "it's an onion!");


		root = insertNode(root, 220, "Is it white in color?", " ");
		root = insertNode(root, 202, "Does it have a stalk/is it tree-like?", " ");
		root = insertNode(root, 201, " ", "it's cauliflower!");
		root = insertNode(root, 205, "does it have multiple bulbs?", " ");
		root = insertNode(root, 210, "does it start with the letter 'T'?", " ");
		root = insertNode(root, 204, " ", "it's garlic!");
		root = insertNode(root, 209, " ", "it's a turnip!");
		root = insertNode(root, 215, "is it a fungus?", " ");
		root = insertNode(root, 214, " ", "it's a mushroom!");
		root = insertNode(root, 216, " ", "it's an onion!");
		root = insertNode(root, 300, "Is it green in color?", " ");
		root = insertNode(root, 270, "does it start with the letter 'A'?", " ");
		root = insertNode(root, 260, "does it have a long stalk shape?", " ");
		root = insertNode(root, 258, " ", "it's asparagus!");
		root = insertNode(root, 263, "does it have a pit inside?", " ");
		root = insertNode(root, 261, " ", "it's an avocado!");
		root = insertNode(root, 265, " ", "it's an artichoke!");
		root = insertNode(root, 275, "does it have a cyllinder-like shape?", " ");
		root = insertNode(root, 272, "Is it a watery vegetable?", " ");
		root = insertNode(root, 271, " ", "it's a cucumber!");
		root = insertNode(root, 273, " ", "it's a zucchini!");
		root = insertNode(root, 280, "Does it start with the letter 'B'?", " ");
		root = insertNode(root, 277, "Is it tree-like?", " ");
		root = insertNode(root, 276, " ", "it's broccoli!");
		root = insertNode(root, 278, " ", "it's brussel sprouts!");
		root = insertNode(root, 282, "Is it small and circular?", " ");
		root = insertNode(root, 281, " ", "it's peas!");
		root = insertNode(root, 284, "Can they also be red or orange?", " ");
		root = insertNode(root, 283, " ", "it's a pepper!");
		root = insertNode(root, 286, "Is it commonly used in coleslaw?", " ");
		root = insertNode(root, 285, " ", "it's cabbage!");
		root = insertNode(root, 287, " ", "it's green beans!");
		root = insertNode(root, 320, "Is it orange or yellow inside?", " ");
		root = insertNode(root, 305, "Are they carved on Halloween?", " ");
		root = insertNode(root, 304, " ", "it's a pumpkin!");
		root = insertNode(root, 310, "Is it on a cob?", " ");
		root = insertNode(root, 309, " ", "it's corn!");
		root = insertNode(root, 312, " ", "it's squash!");
		root = insertNode(root, 325, "Is it purple in color?", " ");
		root = insertNode(root, 324, " ", "it's an eggplant!");
		root = insertNode(root, 330, "Can they also be red or orange?", " ");
		root = insertNode(root, 328, " ", "it's a pepper!");
		root = insertNode(root, 335, "Is it yellow in color?", " ");
		root = insertNode(root, 333, " ", "it's corn!");
		root = insertNode(root, 336, " ", "You win!");

		return root;


}
void playGame(struct node *root) {
    struct node *current = root;
    char response;
    while (current->left != NULL || current->right != NULL) {
        printf("%s (y/n): ", current->question);
        if (scanf(" %c", &response) != 1 || (response != 'y' && response != 'n')) {

            printf("Invalid input. Please enter 'y' for yes or 'n' for no.\n");

            while (getchar() != '\n');
            continue;
        }
        if (response == 'y') {
            current = current->left;
        } else {
            current = current->right;
        }
        if (current == NULL) {
            printf("Error: This node is empty!\n");
            break;
        }
    }
    if (current != NULL) {
           printf("%s\n", current->guess);
           printf("Is this your correct item? (y/n): ");
           if (scanf(" %c", &response) != 1 || (response != 'y' && response != 'n')) {
               printf("Invalid input. Please enter 'y' for yes or 'n' for no.\n");
           } else {
               if (response == 'y') {
                   printf("Awesome, I got the answer correct!\n");
               } else {
                   printf("My mistake! What was your item? ");
                   char correctAnswer[100];
                   scanf(" %[^\n]", correctAnswer);
                   printf("Please type a yes or no question that will help me guess %s: ", correctAnswer);
                   char newQuestion[100];
                   scanf(" %[^\n]", newQuestion);
                   printf("Thanks for the input!");
               }
           }
       } else {
           printf("Reached the end unexpectedly, sorry!\n");
       }
   }

/*void showTrunks(struct Trunk* p) {
    if (p == NULL) {
        return;
    }
    showTrunks(p->prev);
    printf("%s", p->str);
}

void printTree(struct node* root, struct Trunk* prev, bool isLeft) {
    if (root == NULL) {
        return;
    }

    char* prev_str = "     ";
    struct Trunk* trunk = (struct Trunk*)malloc(sizeof(struct Trunk));
    trunk->prev = prev;
    trunk->str = prev_str;

    printTree(root->right, trunk, true);

    if (prev == NULL) {
        trunk->str = "--{";
    } else if (isLeft) {
        trunk->str = "/--{";
        prev_str = "    |";
    } else {
        trunk->str = "\\--{";
        prev->str = prev_str;
    }

    showTrunks(trunk);
    printf("%d}\n", root->data);

    if (prev != NULL) {
        prev->str = prev_str;
    }
    trunk->str = "    |";

    printTree(root->left, trunk, false);
}*/
