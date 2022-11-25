#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

string opmode = "read";
int addnum1;
int addnum2;
int addstep = 1;
int result;

void execute(string command){
    for(int i = 0; i < command.length(); i++){
        if(opmode != "add"){
            if(command == "prt"){        // print opcode
                opmode = "print";
                command = "";
            }

            
        }
        if(command == "add"){        // add opcode
            opmode = "add";
            command = "";
        }       

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
        cout << command;
        if(addstep == 1){
            //addnum1 = stoi(command);
            cout << command;
            addstep = 2;
        }
        if(addstep == 2){
            //addnum2 = stoi(command);
            cout << command;
            addstep = 3;
        }
        if(addstep == 3){
            result = addnum1 + addnum2;
            cout << command;
            //cout << result;
            opmode = "read";
        }
    }
}