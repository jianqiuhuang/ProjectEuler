#ifndef _HASHENTRY_H
#define _HASHENTRY_H

#include<iostream>

class HashEntry{
	public:
		HashEntry(int key, int value);
		int getValue();
		int getKey();
	private:
		int key;
		int value;
};

#endif
