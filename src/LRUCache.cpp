#include "Node.h"
#include "LRUCache.h"
#include <iostream>


class LRUCache{
	public:
	
	private:
		Node* head;
		Node* tail;
		int capacity;
		unordered_map<int,Node*> map;
}
