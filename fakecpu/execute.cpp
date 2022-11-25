/*
TODO: 
create memory management

opmodes:
read    // reads commands
print   // print the "command"
add     // add 2 next "commands"(not implemented)
mema    // assign memory
memd    // delete memory 
memr    // read memory
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
char mempointer1 = 0;
char mempointer2 = 0;
char mempointer3 = 0;
char mempointer4 = 0;
char mempointer5 = 0;

int mempointerint;
int memwstep = 1;

void execute(string command){
    
    if(opmode == " "){
        if(command == "as1"){
            for(int i = 0; i < 24000; i++){
                memory[i] = 1;
            }
        }
        /*if(command == "prm"){
            for(int i = 0; i < 24000; i++){
                cout << memory[i] + 0;
            }
        }*/
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

    /*if(command =="acm"){
        opmode = "mema";
        command = "";
        return;
    }*/

    if(command == "acm"){
        opmode = "memw";
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

        int addint1 = (int)addnum1 - 48; //adds 48 in convertion for some reason        
        int addint2 = (int)addnum2 - 48;

        result = addint1 + addint2;
        opmode = " ";
        cout << result;

    }
    if(opmode == "memw"){
        if(memwstep == 1){
            mempointer1 = command[0];
            mempointer2 = command[1];
            mempointer3 = command[2];
            mempointer4 = command[3];
            mempointer5 = command[4];
            cout << mempointer1 << "\n";
            cout << mempointer2 << "\n";
            cout << mempointer3 << "\n";
            cout << mempointer4 << "\n";
            cout << mempointer5 << "\n";
            //mempointerint = stoi(command);
            return;
            opmode = " ";
        }
    }
}
