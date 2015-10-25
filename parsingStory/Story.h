#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "ctype.h"
using namespace std;

typedef struct _Paragraph{
    struct _Sentence *s;
    struct _Paragraph *next;
    _Paragraph(): s(NULL), next(NULL){}
} Paragraph;

typedef struct _Sentence{
    struct _Word *w;
    struct _Sentence *next;
    _Sentence(): w(NULL), next(NULL){}
} Sentence;

typedef struct _Word{
    struct _Word *next;
    string data;
    _Word() : next(NULL), data(""){}
} Word;

class Story{
    public:
        Story();
        //store the entire file data into one string
        void readFromFile(string fileName);
        void process();
        void test();
        //output data stored in list to a file
        void print(string fileName);

    private:
        string data;
        Paragraph *root;
};
