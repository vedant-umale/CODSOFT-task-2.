#include<iostream>
using namespace std;

int main(){

    cout<<"\n\t\t*********************";
    cout<<"\n\t\t* SIMPLE CALCULATOR *";
    cout<<"\n\t\t*********************\n";

    float number1,number2;
    cout<<"Enter any two real integers : ";
    cin>>number1>>number2;

    char op;
    cout<<"Enter operation to be performed\t'+' for addition\t'-' for subtraction\t'*' for multiplication\t'/' for division\n";
    cout<<"OPERATION = ";
    cin>>op;

    switch(op){
        case '+':
        cout<<"The addition of given numbers is :-  ";
        cout<<number1<<" + "<<number2<<" = "<<number1+number2<<endl;
        break;

        case '-':
        cout<<"The subtraction of given numbers is :-  ";
        cout<<number1<<" - "<<number2<<" = "<<number1-number2<<endl;
        break;

        case '*':
        cout<<"The multiplication of given numbers is :-  ";
        cout<<number1<<" * "<<number2<<" = "<<number1*number2<<endl;
        break;

        case '/':
        cout<<"The division of given numbers is :-  ";
        cout<<number1<<" / "<<number2<<" = "<<number1/number2<<endl;
        break;

        default:
        cout<<"ERROR! You entered wrong operation."<<endl;
        break;
    }
    return 0;
}