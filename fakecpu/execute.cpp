/*
TODO: 
create memory management

opmdes:
read    // reads commands
print   // print the "command"
add     // add 2 next "commands"(not implemented)
mema    // assign memory
memd    // delete memory 
____________________________________________________
default opmode is "read"
*/

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

string opmode = "read";
int addnum1;
int addnum2;
int addstep = 1;
int result;
char memory[24000];

void execute(string command){
    

    
    
    if(command == "prt"){        // print opcode
        opmode = "print";
        command = "";
        return;
    }
    
    if(command == "add"){        // add opcode
        opmode = "add";
        command = "";
        return;
    }       

    
    if(opmode == "print"){          //print opcode function
        if(command.back() == '\\'){
            command.pop_back();
            cout << command << "\n";
        }
        else if(command.back() != '\\'){
            cout << command;
        }
    }
    if(opmode == "add"){
        cout << "test";

        }
    
}
