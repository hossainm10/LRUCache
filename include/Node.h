#pragma once

struct Node{
	int key;
    int value;
	Node* next;
    Node* prev;
	Node(int k, int v): key(k), value(v), next(nullptr), prev(nullptr){}
};
