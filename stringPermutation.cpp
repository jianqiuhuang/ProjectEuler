#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void perm(int start, int end, string str){
    if(start == end)
        cout << str << endl;
    for(int i = start; i < end; i++){
        swap(str[i], str[start]);
        perm(start+1, end, str);
        swap(str[i], str[start]);
    }
}

int main() {

    perm(0, 3, "abc");
    return 0;
}
