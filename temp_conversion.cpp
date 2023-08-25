#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


double FtoC(double in)
{
    return ((in -32)*5/9 );
}
double FtoK(double in)
{
    return ((in -32)*5/9 ) - 273.15;
}
double CtoF(double in)
{
    return (in *9/5)+32;
}
double CtoK(double in)
{
    return in +  273.15 ;
}
double KtoC(double in)
{
    return in  - 273.15 ;
}
double KtoF(double in)
{
 return ((in - 273.15)*9/5)+32;
}
int main(){
    string selection;
    double in;
    bool done = false;

    while(done != true)
    {
        cout << "Select your conversion: 1,2,3,4,5,6" << endl;
        getline(cin, selection);

        cout << "Enter the number: " << endl;
        cin >> in;

        if(selection == "1"){
            FtoC(in);
        }
        else if (selection == "2")
        {
            FtoK(in);
        }
        else if (selection == "3")
        {
            CtoF(in);
        }
        else if (selection == "4")
        {
            CtoK(in);
        }
        else if (selection == "5")
        {
            KtoC(in);
        }
        else if (selection == "6")
        {
            KtoF(in);
        }
        
    }
    

    
}
