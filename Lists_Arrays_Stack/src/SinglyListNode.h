/*
 * SinglyLinkedNode.h
 *
 *  Created on: Jun 20, 2018
 *      Author: chris
 */

#ifndef LISTS_ARRAYS_STACKS_SRC_SINGLYLISTNODE_H_
#define LISTS_ARRAYS_STACKS_SRC_SINGLYLISTNODE_H_

#include "ListNode.h"

namespace cvm {
namespace essentials {
namespace ListsArraysStacks {

template<class T>
class SinglyLinkedNode : public LinkedNode<T>{
public:
	SinglyLinkedNode();
	SinglyLinkedNode(T data);
	SinglyLinkedNode(shared_ptr nextNode);
	SinglyLinkedNode(T data, shared_ptr nextNode);


	virtual ~SinglyLinkedNode();
};

} /* namespace ListsArraysStacks */
} /* namespace essentials */
} /* namespace cvm */

#endif /* LISTS_ARRAYS_STACKS_SRC_SINGLYLISTNODE_H_ */
