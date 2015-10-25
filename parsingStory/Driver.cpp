#include "Story.h" 

int main(){
    Story test;
    test.readFromFile("in.txt");
    test.process();
    test.print("out.txt");
    return 0;
}
