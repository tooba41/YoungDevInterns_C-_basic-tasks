#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char op;
   cout<<"Enter first number:";
   cin>>num1;
   cout<<"enter an operator{+,-,*,/}:";
   cin>>op;

   cout<<"Enter second number:";
   cin>>num2;
   switch (op)
   {
   case '+':
    cout<<"Result:"<<num1+num2;
    break;
    case '-':
    cout<<"Result:"<<num1-num2;
    break;
    case '*':
    cout<<"Result:"<<num1*num2;
    break;
    case '/':
    if(num2 != 0) {
    cout<<"Result:"<<num1/num2;
    }
    else{
    cout<<"Error";
    }
    break;
   default:
   cout<<"Invalid operator";
    break;
   }
   return 0;
}