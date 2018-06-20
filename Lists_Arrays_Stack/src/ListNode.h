/*
 * LinkedNode.h
 *
 *  Created on: Jun 20, 2018
 *      Author: chris
 */

#ifndef LISTS_ARRAYS_STACKS_SRC_LISTNODE_H_
#define LISTS_ARRAYS_STACKS_SRC_LISTNODE_H_

#include <memory>

namespace cvm {
namespace essentials {
namespace ListsArraysStacks {

using std::shared_ptr;

template <class T>
class ListNode{
public:
	ListNode(void);
	ListNode(T data) : data_(data) {};
	ListNode(T data, shared_ptr<ListNode<T>> nextNode) : nextNode_(nextNode) {};
	ListNode(T data, shared_ptr<ListNode<T>> nextNode) : data_(data), nextNode_(nextNode) {};
	/**
	 * Setter for the data field
	 * @param data
	 */
	void SetData(T data) = 0;
	/**
	 * Gets the data held by this node.
	 * @return Data fin this node.
	 */
	T GetData(void) = 0;

	ListNode<T> Next() { return nextNode_;};

protected:
	/**
	 * The data help by this node.
	 */
	T data_ = null;
	/**
	 * Reference to next node in list.
	 */
	shared_ptr<ListNode<T>> nextNode_ = null;
};

} /* namespace ListsArraysStacks */
} /* namespace essentials */
} /* namespace cvm */

#endif /* LISTS_ARRAYS_STACKS_SRC_LISTNODE_H_ */
