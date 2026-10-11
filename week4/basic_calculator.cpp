#include <iostream>
using namespace std;

void sum(int n1, int n2);
void sub(int n1, int n2);
void multi(int n1, int n2);
void division(int n1, int n2);

main(){
    int num1,num2;
    char op;
    cout<<"Enter 1st number:";
    cin>>num1;
    cout<<"Enter 2nd number:";
    cin>>num2;
    cout<<"Enter the operation(+,-,*,/):";
    cin>>op;

    if(op=='+'){
        sum(num1,num2);
    }
    if(op=='-'){
        sub(num1,num2);
    }
    if(op=='*'){
        multi(num1,num2);
    }
    if(op=='/'){
        division(num1,num2);
    }

}

void sum(int n1, int n2){
    int add=n1+n2;
    cout<<"Sum of two numbers is: "<<add;
}

void sub(int n1, int n2){
    int minus=n1-n2;
    cout<<"subtraction of two numbers is: "<<minus;
}

void multi(int n1, int n2){
    int mul=n1*n2;
    cout<<"multiplication of two numbers is: "<<mul;
}

void division(int n1, int n2){
    int devis=n1/n2;
    cout<<"division of two numbers is: "<<devis;
}