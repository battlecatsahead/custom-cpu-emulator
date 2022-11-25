/*
FIX THIS:
add function not getting any input
_____________________________________________________________
list of implemented opcodes:
prt /print text
crm /clears memory

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
dec /substract 1 to a variable
acm / assign a value to a specific address in memory, ex acm,15(address), 1(value to assign)
prm / print a specific memory address
_____________________________________________________________
list of features to implement:
memory 
_____________________________________________________________
programs:
add,2,3
prt,hello\\,prt,h\\,prt,why,prt,not
*/


#include <iostream>
#include <stdio.h>
#include <string>
#include "execute.cpp"

using namespace std;

string program = "prt,hello\\,prt,hi\\,prt,w\\";
string curop;
string opcode;

int main(){
    for(int i = 0; i < program.length(); i++){
        
        if(program[i] != ','){
            curop += program[i];
            
        }
        if(program[i] == ','){
            execute(curop);
            curop = "";
        }
    }
    
}