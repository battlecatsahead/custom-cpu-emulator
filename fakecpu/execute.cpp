#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

string opmode = "read";

void execute(string command){
    for(int i = 0; i < command.length(); i++){
        if(command =="prt"){
            opmode = "print";
            command = "";
        }
        else{
            cout << "error: uknown opcode\n";
        }

    }
    if(opmode == "print"){
        if(command.back() == '\\'){
            command.pop_back();
            cout << command << "\n";
        }
        else if(command.back() != '\\'){
            cout << command;
        }
    }
}