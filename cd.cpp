#include <iostream>
#include <iomanip>
#include <string>
#include <filesystem>

using namespace std;


void tail(string argument){
   FILE *fileName;
   long size;
   char * buffer;
   size_t result;

   fileName = fopen(argument.c_str(), "r");
    // getting the file size
    fseek(fileName , 0 , SEEK_END);
    size = ftell (fileName);
    rewind (fileName);

    //allocate the memory
    buffer = (char*) malloc (sizeof(char)*size);
    
    result = fread(buffer,1,size-1,fileName);
    cout << buffer;
    fclose (fileName);
    free (buffer);
  
}
void cdCommand(string path){
    path = c;
}   

int main(){

    cout << "Select your terminal command: " << endl;

    string command;

    getline(cin, command);

    string argument;

    getline(cin,argument);

    // tail(argument);
    cdCommand(argument);
}