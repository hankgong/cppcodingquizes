/*
 * =====================================================================================
 *
 *       Filename:  printTree.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/07/2012 10:39:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

typedef struct _Node{
	int data;

	struct _Node* left;
	struct _Node* right;
}Node;

void printData(int data, int level) {
	for (int i = 0; i < level; i++) {
		printf(" ");
	}

	printf("%d\n", data);
}

void printTree(Node *node, int level) {
	if(node == NULL) return;

	if(node->right) {
		printTree(node->right, level+1);
	}

	printData(node->data, level);

	if(node->left) {
		printTree(node->left, level+1);
	}
}

int main(void){
	Node n0;
	n0.data = 0;
	
	Node n1;
	n1.data = 1;

	Node n2;
	n2.data = 2;

	Node n3;
	n3.data = 3;

	Node n4;
	n4.data = 4;

	n0.left = &n1;
	n0.right = &n2;

	n1.left = &n3;
	n1.right = &n4;

	n2.left = NULL;
	n2.right = NULL;

	n3.left = NULL;
	n3.right = NULL;

	n4.left = NULL;
	n4.right = NULL;

	printTree(&n0, 0);

	return 1;
}
