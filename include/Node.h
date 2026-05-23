#pragma once

struct Node{
	int key,value;
	Node* next,prev;
	Node(int k, int v): key(k), value(v), next(nullptr), prev(nullptr){}
}
