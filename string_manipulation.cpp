#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


string reverse(string str){

    // string rev = str;
    string temp = "";
    for(int i = str.length()-1; i >=0; i--){
        temp = temp + str[i];
    }
    return temp;
}

string changeCase(string str){

    string result="";
    //input
    for(int i =0; i<=str.length(); i++){
        if(islower(str[i])){
            result += toupper(str[i]);
        }
        else if (isupper(str[i])){
            result += tolower(str[i]);
        }
  
        
    }
    return result;
}

bool subString(string str, string sub){
    bool result = false;
    if(str.find(sub)!= string::npos)
    {

         result = true;
    
    }
    return result;
}

string replaceString(string str, char ch , char replace){
    string result;
    for(int i = 0; i<= str.length(); i++){
        if(str.find(ch)!= string::npos){
           str[str.find(ch)] = replace;
        }

    }
    return str;
}

int main(){

    string input;
    char input2;
    char input3;
    getline(cin, input);
    cin >> input2;
    cin >> input3;

    cout <<  replaceString(input,input2,input3) << endl;

}