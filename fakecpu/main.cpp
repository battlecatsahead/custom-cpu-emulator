#include <iostream>
#include <stdio.h>
#include <string>
#include "execute.cpp"

using namespace std;

string hello = "prt,hello\\,";
string curop;
string opcode;

int main(){
    for(int i = 0; i < hello.length(); i++){
        
        if(hello[i] != ','){
            curop += hello[i];
        }
        if(hello[i] == ','){
            execute(curop);
            curop = "";
        }
    }
    
}