/*
FIX THIS:
add function not getting any input
_____________________________________________________________
list of implemented opcodes:
prt /print text
crm /clears memory
&   /set opmode to blank(default)
add /add 2 1 digit numbers

wip opcodes:
acm /assign a value to a specific address in memory, ex acm,15(address), 1(value to assign)
prm / print a specific memory address


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
_____________________________________________________________
list of features to implement:
memory 
user input
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

string program = "acm,35443,&,&";
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