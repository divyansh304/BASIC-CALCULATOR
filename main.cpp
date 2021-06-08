#include <iostream>

using namespace std;


int main()
{
    int num1,num2;
    char op;
    double result;
    cout<<"enter ur first number"<<endl;
    cin>> num1;
    cout<<"enter operator"<<endl;
    cin>> op;
    cout<<"enter second number"<<endl;
    cin>> num2;

    if(op=='+')
    {

        result=num1+num2;

    }
    else if(op=='-'){
        result = num1-num2;
    }
    else if (op=='*')
    {

        result= num1*num2;
    }
    else if(op=='/')
    {

        result=num1/num2;
    }
    else{
        cout<<"invalid operator!!"<<endl;
    }
    cout<<result;



    return 0;
}
