#include <iostream>
#include <stdio.h>
#include <string>


using namespace std;

string hello = "prt,hello";
string curop;
string opcode;
void parser(){
    for(int i = 0; i < hello.length(); i++){
        
        if(hello[i] != ','){
            curop += hello[i];
        }
        if(hello[i] == ','){
            execute(curop);
        }
    }
}

void execute(string command){
    for(int i = 0; i < 3; i++){
        
    }
}

int main(){
    parser();
}