/*
list of implemented opcodes:
prt /print text

wip opcodes:
add /add 2 numbers

unimplemented opcodes:

sub /substract 2 numbers
div /divide 2 numbers
int /create a variable 
asi /assign a value to a variable
pri /print a variable
del /clear a variable
if  /self explanatory
inc /add 1 to a variable
dec //substrac 1 to a variable
_____________________________________________________________
list of features to implement:
memory 
*/


#include <iostream>
#include <stdio.h>
#include <string>
#include "execute.cpp"

using namespace std;

string hello = "add,2,3";
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