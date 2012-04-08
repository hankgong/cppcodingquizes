/*
 * =====================================================================================
 *
 *       Filename:  singlelist.hpp
 *
 *    Description:  A C++ class for single linkedlist
 *
 *        Version:  1.0
 *        Created:  12-03-20 12:39:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Huazhi (Hank) GONG, 
 *   Organization:  Bionik LABs
 *
 * =====================================================================================
 *
 * The linked list we are talking about here is like:
 * || 1st data | next|| --> || 2nd data | next || --> .... || nth data | next || --> NULL 
 * At the beginning, it was like 
 * || NULL ||
 */


#ifndef SINGLELIST_H
#define SINGLELIST_H

#include <iostream>

using namespace std;

template <class T>
struct Node {
	T data;
	Node<T> *next;
};

template <class T>
class LinkedList {
protected:

	Node<T> *head_;
	int count_;

public:

	LinkedList(void): head_(NULL), count_(0) {}
	virtual ~LinkedList(void);

	int length(void) const;
	void printList(void) const;
	void printNodeAtPos(int pos) const;

	virtual void insertFront(T data) = 0;
	virtual void insertEnd(T data) = 0;
	virtual void insertValueAtPos(T data, int pos) = 0;

	virtual void pushFront(Node<T> *newNode) = 0;
	virtual void pushEnd(Node<T> *newNode) = 0;
	virtual void pushNodeAtPos(Node<T> *newNode, int pos) = 0;

	void destroyList(void);

	//void copyList(const LinkedList<T>& otherList);

};

template <class T>
LinkedList<T>::~LinkedList(void) {
	Node<T> *tmpNode;

	/*  Here we need the tmpNode because when deleting the node, its contained information will lost 
	 *  so that we need a temp node to store its information*/
	while(head_ != NULL) {
		tmpNode = head_;
		head_ = head_->next;
		delete tmpNode;
	}

	count_ = 0;
}

template <class T>
void LinkedList<T>::destroyList(void) {
	Node<T> *tmpNode;

	while(head_ != NULL) {
		tmpNode = head_;
		head_ = head_->next;
		delete tmpNode;
	}
}

template <class T>
int LinkedList<T>::length(void) const {
	Node<T> *itrNode;
	int length = 0;

	while(itrNode != NULL) {
		itrNode = itrNode->next;
		length++;
	}

	return length;
	// or simply "return count_"
}

template <class T>
void printList(void) const {
	Node<T> *itrNode;

	while(itrNode != NULL) {
		cout << itrNode->data << " ";
		itrNode = itrNode->next;
	}

	cout << endl;
}

template <class T>
void printNodeAtPos(int pos) const {
	Node<T> *itrNode;
	int itrCount = 0;

	while(itrNode != NULL && itrCount == pos) {
		itrNode = itrNode->next;
		cout << itrNode->data << " ";
	}
}


#endif
