#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

using namespace std;

template <class T>
class Node{
public:
    Node<T> *next;
    T data;

    Node(): next(NULL) {}
};

template <class T>
class SinglyLinkedList{
public:
    Node<T> *head;

    //Here, we let head pointer be NULL, it's different case of head->next = NULL
    SinglyLinkedList(): head(NULL) {}

    //Because of the constructor function, we should check if the list has no data
    Node<T>* addData(T data, int pos) {
        Node<T> *tmpNode, *newNode;
        if(pos<0) return NULL;

        newNode=new Node<T>;
        newNode->data = data;

        if (head == NULL) {
            head = newNode;
            newNode->next = NULL;
        } else {
            tmpNode = head;
            for(int i=0; i< pos && tmpNode->next!=NULL; i++) {
                tmpNode = tmpNode->next;
            }

            newNode->next = tmpNode->next;
            tmpNode->next = newNode;
        }

        return newNode;
    }

    int length() {
        int len = 0;
        Node<T> *tmpNode = head;

        while(tmpNode) {
            tmpNode = tmpNode->next;
            len++;
        }
        return len;
    }

    void printList() {
        Node<T> *tmpNode = head;
        while(tmpNode) {
            cout<<tmpNode->data<<" ";
            tmpNode = tmpNode->next;
        }
        cout<<endl;
    }
};

#endif // SINGLYLINKEDLIST_H
