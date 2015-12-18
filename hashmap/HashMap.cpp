#include "HashMap.h"

HashMap::HashMap(){
	Hmap = new HashEntry* [mapSize];
	//Set all element to null
	for(int i = 0; i < mapSize; i++)
		Hmap[i] = NULL;
}

int HashMap::getValue(int key){
	//Find index
	int index = key % mapSize;
	int loopCount = 0;
	while (Hmap[index] != NULL && Hmap[index]->getKey() != key){
		loopCount++;
		if(loopCount == mapSize)
			return -1;
		index = (index+1) % mapSize;
	}
	if(Hmap[index] != NULL)
		return Hmap[index]->getValue();
	else
		return -1;
}

void HashMap::insert(int key, int value){
	//Find index
	int index = key % mapSize;
	int loopCount = 0;
	while(Hmap[index] != NULL && Hmap[index]->getKey() != key){
		loopCount++;
		if(loopCount == mapSize){
			index = key % mapSize;
			break;
		}	
		index = (index+1) % mapSize;
	}
	if(Hmap[index] != NULL)
		delete Hmap[index];
	Hmap[index] = new HashEntry(key, value);
}

HashMap::~HashMap(){
	for(int i = 0; i < mapSize; i++){
		if(Hmap[i] != NULL)
			delete Hmap[i]; 
	}
	delete[] Hmap;
}
