#pragma once

struct Node{
	int key,value;
	Node* next,prev;
	Node(int key, int value): key(k), value(v), next(nullptr), prev(nullptr){}
}
