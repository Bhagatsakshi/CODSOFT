#include <iostream>  
#include <stdlib.h>        //used to perform exit funtion
using namespace std;
int main()
{
    cout<<"welcome to simple calculator application"<<endl;
    float num1,num2;
    int ch;
    char op;           //op is option,if you want to continue type y/Y otherwise n/N
    do {
    //to tell the user ,which key is to press for any operation
    cout<<"enter 1-for addition "<<'\n'<<"enter 2-for subtraction"<<'\n'<<"enter 3-for multiplication"<<'\n'<<"enter 4-for division"<<'\n'<<"enter 5- for exit"<<endl;
    cout<<"enter two integer or float numbers"<<endl;
    cin>>num1>>num2;                      //enter two numbers to perform any given operation
    cout<<"enter the choice code which you want to perform"<<endl;
    cin>>ch;                              //choice a code given            
        switch(ch) {
            
            case 1:
            cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            break;
            
            case 2:
            cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
            
            case 3:
            cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
            break;
            
            case 4:
            cout<<num1<<" / "<<num2<<" = "<<(float)num1/num2<<endl;
            break;
            
            case 5:
             cout<<"exited"<<endl;
             exit(0);
            
            default:
            cout<<"invalid choice"<<endl;
        }
        cout<<"Do you want to continue ?"<<'\n'<<"type Y/y for yes or N/n for no"<<endl;
        cin>>op;
        if(op=='N'||op=='n')
        {
            cout<<"program terminated"<<endl;
        }
    } while(op=='Y'||op=='y');
    return 0;
}
