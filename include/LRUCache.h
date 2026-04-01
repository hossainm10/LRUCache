#pragma once

#include "Node.h"
class LRUCache{


	

	public:
		LRUCache(int capacity):capacity_=capacity, head_(new Node(-1,-1)), tail_(new node(-1,-1)){
			head_->next=tail_;
			tail_->prev=head_;
		}
	private:
		Node* head_;
		Node* tail_;
		int capacity_;
		unordered_map<int,Node*> map;
}
