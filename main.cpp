#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
 
using namespace std;
 
int main() 
{
    
    cout<<"1. Select to convert Celcius to Fahrenheit: "<<endl;
    cout<<"2. Select to convert Fahrenheit to Celcius: "<<endl;
    cout<<"3. Select to Exit: "<<endl;
    cout<<"====================================================="<<endl;
    
    int choice;
    cout<<"Enter your Choice: ";
    cin>>choice;
    cout<<"====================================================="<<endl;
    
    
    switch(choice)
    {
        double celcius,fahrenheit;
        case 1:
                cout<<"Enter the Temperature in Celcius: ";
                cin>>celcius;
                fahrenheit = (celcius*9/5)+32;
                cout<<fixed<<setprecision(1);
                cout<<"====================================================="<<endl;
                cout<<"Temperature in Fahrenheit is: "<<fahrenheit<<endl;
                break;
                
        case 2:
                cout<<"Enter the Temperature in Fahrenheit: ";
                cin>>fahrenheit;
                celcius = (fahrenheit-32)*5/9;
                cout<<fixed<<setprecision(1);
                cout<<"====================================================="<<endl;
                cout<<"Temperature in Celcius is: "<<celcius<<endl;
                break;
                
        case 3:
                cout<<" You Exited:"<<endl;
                exit(0);
                
        default: 
                cout<<"You have entered invalid Choice:";
                
                
    }
    
 
    return 0;
}
 


    
 
    return 0;
}
 
