/**
 * A program that mimics old flip-phone character input method
 * prints all combination of words entered by taking in the number pressed
 */

#include<iostream>
#include<string>

using namespace std;

/**
 * @return possible characters for the number pressed
 */
string getChar(char c){
    switch(c){
        case '2': return "ABC";
        case '3': return "DEF";
        case '4': return "GHI";
        case '5': return "JKL";
        case '6': return "MNO";
        case '7': return "PQRS";
        case '8': return "TUV";
        case '9': return "WXYZ";
        default: 
    }
}

void print(string input, int i){

    if((int)input.length() == i){
        cout << input << endl;
    }else{

       string tmp = getChar(input[i]);
       for(int j = 0; j < (int)tmp.size(); j++){
           //Overrider the character in input 
           input[i] = tmp[j];
           print(input, i+1);   
       } 
    }
}

int main(){
    print("234", 0);
    return 0;
}
