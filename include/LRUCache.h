#pragma once

#include "Node.h"
#include <unordered_map>
#include <iostream>


class LRUCache{
	private:
		Node* head_;
		Node* tail_;
		int capacity_;
		std::unordered_map<int,Node*> map_;

	public:
		LRUCache(int capacity):capacity_(capacity), head_(new Node(-1,-1)), tail_(new Node(-1,-1)){
			std::cout<<"Constructor called!"<<std::endl;
			head_->next=tail_;
			tail_->prev=head_;
		}
		~LRUCache(){
			std::cout<< "Destructor called!"<<std::endl;
			Node* curr= head_;
			while(curr != nullptr){
				Node* next= curr->next;
				delete curr;
				curr =next;
				
			}
			
		}
		
		LRUCache(const LRUCache&) = delete;
		LRUCache& operator=(const LRUCache&) = delete;
		void put(int key, int value);
		int get(int key);
		void removeNode(Node* node);
		void addToFront(Node* node);
};
