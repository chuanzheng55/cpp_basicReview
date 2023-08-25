#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
double result;
double addition(double num1, double num2){
    double result = num1 + num2;
    return result;
}


double subtraction(double num1, double num2){
    double result = num1 - num2;
    return result;
}

double multiplication(double num1, double num2){
    double result = num2 * num1;
    return result;
}

// need if else if division is selected: modification on main method.
double division(double num1, double num2){
    double result = num1 / num2;
    return result;

}
int main(){
    // int a;
    // int b;
    // int temp;
    // cout << "input a: ";
    // cin >> a;
    // cout << "input b: ";
    // cin >> b;
    // temp = a;
    // a = b;
    // b = temp;
    // cout << " a = " << a << " b = " << b << endl;
    
    double num1, num2;
    string selection ;
    
    cout << "Choose and type (addition, multiplication, subtraction, division)" << endl;
    getline(cin,selection);
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    
    if(selection == "addition"){
       result = addition(num1, num2);
    }
    else if(selection == "subtraction"){
       result =  subtraction(num1,num2);
    }
    else if (selection == "multiplication")
    {
       result =  multiplication(num1,num2);
    }
    else if (selection == "division")
    {
       result =  division(num1,num2);
    }
    
    cout << "the result is " << result;

}


