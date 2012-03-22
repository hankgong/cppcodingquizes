/*
 * =====================================================================================
 *
 *       Filename:  singlelinkedlist.hpp
 *
 *    Description:  unordered linked list
 *
 *        Version:  1.0
 *        Created:  12-03-21 04:46:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Huazhi (Hank) GONG, 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H

#include <iostream>
#include "linkedlist.hpp"

using namespace std;

template <class T>
class SingleLinkedList:public LinkedList<T> {
public:
	void insertFront(T data);
	void insertEnd(T data);
	void insertValueAtPos(T data, int pos);
};

template <class T>
void SingleLinkedList<T>::insertFront(T data){
	// create a new node
	Node<T> *newNode = new Node<T>(data);

	cout << length();

	newNode->next = head_;
	head_ = newNode;
	
	count_++;
}

template <class T>
void SingleLinkedList<T>::insertEnd(T data) {
	Node<T> *newNode = new Node<T>(data);
	Node<T> *itrNode = head_;

	while(itrNode->next != NULL) {
		itrNode = itrNode->next;
	}

	itrNode->next = newNode;
	newNode->next = NULL;

	count_++;
}

template <class T>
void SingleLinkedList<T>::insertValueAtPos(T data, int pos) {
	Node<T> *newNode = new Node<T>(data);
	Node<T> *itrNode = head_;

	if (pos < 0) pos = 0;
	if (pos > count_) pos = count_;

	int itrCount = 0;

	while(itrCount == pos) {
		itrNode = itrNode->next;
		itrCount++;

	}

	newNode->next = itrNode->next;
	itrNode->next = newNode;

	count_++;
}

#endif
