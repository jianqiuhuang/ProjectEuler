#ifndef _HASHMAP_H
#define _HASHMAP_H

#include "HashEntry.h"
#include <iostream>

const int mapSize = 128;

class HashMap{
	public:
		HashMap();
		int getValue(int key);
		void insert(int key, int value);
		~HashMap();
	private:
		HashEntry **Hmap;
};

#endif
