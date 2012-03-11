/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 2012  <copyright holder> <email>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef BINARYTREE_H
#define BINARYTREE_H

using namespace std;

template <class T>
class BinaryTree
{
private:
	template <class T>
	class Node{
		T data;
		
		Node<T> *left;
		Node<T> *right;
		
		Node():data(NULL), left(NULL), right(NULL) {}
		Node(T data):data(data), left(NULL), right(NULL) {}
		Node(T data, Node<T> leftNode, Node<T> rightNode): data(data), left(&leftNode), right(&rightNode) {}
	};
public:
	Node *root;
	
    BinaryTree();
    BinaryTree(const BinaryTree& other);
	
	bool empty();
	void clear();
	int size
	
    virtual ~BinaryTree();
    virtual BinaryTree& operator=(const BinaryTree& other);
    virtual bool operator==(const BinaryTree& other) const;
};

#endif // BINARYTREE_H
