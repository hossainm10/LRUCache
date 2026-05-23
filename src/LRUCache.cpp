#include "Node.h"
#include "LRUCache.h"
#include <iostream>
#include <unordered_map>
#include <stdexcept>

void LRUCache::put(int key, int value){
	
	if(map_.find(key) == map_.end()){

		Node* temp= new Node(key,value);
		map_[key]= temp;
	}else{
		throw std::runtime_error("Key, Value pair already Exists!");		
	}
}
