#include "Story.h"

using namespace std;

Story::Story(){
    data = "";
    root = new Paragraph();
}

void Story::readFromFile(string fileName){
    ifstream infile(fileName);
    stringstream ss;
    ss << infile.rdbuf();
    data = ss.str();
}

void Story::process(){
    Paragraph *currP = new Paragraph();
    Sentence *currS = new Sentence();
    Word *currW = new Word();
    root->next = currP;
    currP->s = currS;
    currS->w = currW;
    for(int i = 0; i < (int)data.length(); i++){
        //in a paragraph
        if(data[i] != '\n'){
            //in a sentence
            if(!ispunct(data[i])){
                string tmp = "";
                //in a word
                if(!isspace(data[i])){
                    while(!isspace(data[i])){
                        tmp += data[i];
                        i++;
                    }
                    i--;

                    currW->data = tmp;
                    currW->next = new Word();
                    currW = currW->next;
                }
                
            }else{
                currS->next = new Sentence();
                currS = currS->next;
            }
        }else{
            currP->next = new Paragraph();
            currS = new Sentence();
            currW = new Word();
            currP = currP->next;
            currP->s = currS;
            currS->w = currW;
        }
    }
}
/* had it for testing
void Story::test(){
    Paragraph *currP = new Paragraph();
    Sentence *currS = new Sentence();
    Word *currW = new Word();
    root->next = currP;
    currP->s = currS;
    currS->w = currW;
    currW->data = "haah";
    currW->next = new Word();
    currW = currW->next;
    currW->data = "word";
    currS->next= new Sentence();
    currS = currS->next;

    print("out.txt");
}
*/
void Story::print(string fileName){
//    ofstream outfile(fileName);
    Paragraph *currP = root;
    while(currP){
        Sentence *currS = currP->s;
        while(currS){
            Word *currW = currS->w;
            while(currW){
                cout << currW->data << endl;
                currW = currW->next;
            }
            cout << "new sentence" << endl;
            currS = currS->next;
        }
        cout << "new paragraph" << endl;
        currP = currP->next;
    }
}
