#include <iostream>
#include "LRUCache.h"


using std::cout, std::endl;

int main(){
	LRUCache list(5);
	list.put(4,10);
	int value= list.get(4);
	if(value ==-1) cout<<"Key doesn't exist";
	else cout<<"Value is "<<value<<endl;
	

	return 0;

}
