/*
TODO: 
create memory management

opmodes:
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

string opmode = " ";
string prtmode;
char addnum1;
char addnum2;
int addstep = 1;
int result;
char memory[24000];
int mempointer = 0;
void execute(string command){
    
    if(opmode == " "){
        if(command == "as1"){
            for(int i = 0; i < 24000; i++){
                memory[i] = 1;
            }
        }
        if(command == "prm"){
            for(int i = 0; i < 24000; i++){
                cout << memory[i] + 0;
            }
        }
        if(command == "prt"){        // print opcode
            opmode = "print";
            command = "";
            return;
        }
        if(command == "crm"){
            for(int i = 0; i < 24000; i++){
                memory[i] = ' ';
            }
            return;
        }
        if(command == "&"){
            opmode = " ";
            return;
        }
    }
    if(command == "add"){        // add opcode
        opmode = "add";
        command = "";
        return;
    }       

    if(command =="acm"){
        opmode = "mema";
        command = "";
        return;
    }

    if(opmode == "mema"){
        cout << "mema work";
    }

    if(opmode == "print"){          //print opcode function
        if(command.back() == '/'){
            command.pop_back();
            cout << command << "\n";
            opmode = " ";
        }
        else if(command.back() != '/'){
            cout << command;
            opmode = " ";

        }
    }

    if(opmode == "add"){
        addnum1 = command.front();
        addnum2 = command.back();
        int addint1 = (int)addnum1 + 0;
        cout << addint1 << "\n";
        int addint2 = (int)addnum2;
        result = addint1 + addint2;
        opmode = " ";
        cout << result;

    }
}
