#include "Node.h"
#include "LRUCache.h"
#include <iostream>
#include <unordered_map>
#include <stdexcept>

void LRUCache::removeNode(Node* node){
	Node* prevNode= node->prev;
	Node* nextNode= node->next;

	prevNode->next=nextNode;
	nextNode->prev=prevNode;
	
	
}
void LRUCache::addToFront(Node* node){

	Node* firstRealNode= head_->next;
	node->next=firstRealNode;
	node->prev=head_;
	head_->next=node;
	firstRealNode->prev=node;
}

int LRUCache::get(int key){
	std::cout<<"Calling get()"<<std::endl;
	if(map_.find(key)==map_.end()) return -1;
		
	Node* node= map_[key];
	removeNode(node);
	addToFront(node);

	return node->value;
}
void LRUCache::put(int key, int value){
	std::cout<<"Calling put()"<<std::endl;	
	if(map_.find(key) == map_.end()){
		std::cout<<"Key doesn't exist, adding key..."<<std::endl;
		Node* node= new Node(key,value); 
		map_[key]= node;
		addToFront(node);
		capacity_++;
		
		if(map_.size() > capacity_){
			std::cout<<"Deleting lru..."<<std::endl;
			Node* lru= tail_->prev;
			removeNode(lru);
			map_.erase(lru->key);
			delete lru;
			
		}
	}
	std::cout<<"Key Exist! Replacing old value with new value"<<std::endl;
	Node* node = map_[key];
	node->value=value;
	removeNode(node);
	addToFront(node);
	
	
}
