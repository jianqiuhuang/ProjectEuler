#include<iostream>
#include<string>

using namespace std;

/**
 * Print all possible combination for 0, 1, and ?, where ? can be either 0 or 1
 */
void print(string s, int i){
    if(i == (int)s.length()){
        cout << s << endl;
    }else{
        if(s[i] == '?'){
            s[i] = '1';
            print(s, i+1);
            s[i] = '0';
            print(s, i+1);
        }else{
            print(s, i+1);
        }
    }
}

int main(){
    print("0?1?0", 0);
    return 0;
}
