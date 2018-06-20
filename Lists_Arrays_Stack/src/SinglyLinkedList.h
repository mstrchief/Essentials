/*
 * SinglyLinkedList.h
 *
 *  Created on: Jun 20, 2018
 *      Author: chris
 */

#ifndef SUBPROJECTS__LISTS_ARRAYS_STACKS_SRC_SINGLYLINKEDLIST_H_
#define SUBPROJECTS__LISTS_ARRAYS_STACKS_SRC_SINGLYLINKEDLIST_H_

namespace cvm {
namespace essentials {
namespace ListsArraysStacks {

/**
 * See: https://www.cs.cmu.edu/~adamchik/15-121/lectures/Linked%20Lists/linked%20lists.html
 */
template<class T>
class SinglyLinkedList {
public:

	SinglyLinkedList();
	SinglyLinkedList(SinglyLinkedNode<T> head);
	virtual ~SinglyLinkedList();

	bool addAppend(SinglyLinkedNode<T> node);
	bool add(SinglyLinkedNode<T> node, unsigned int pstn);
	bool addPrepend(SinglyLinkedNode<T> node);

private:
	SinglyLinkedNode<T> head_ = null;

};

} /* namespace ListsArraysStacks */
} /* namespace essentials */
} /* namespace cvm */

#endif /* SUBPROJECTS__LISTS_ARRAYS_STACKS_SRC_SINGLYLINKEDLIST_H_ */
