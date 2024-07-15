// pointer_func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//function prototype

void doubleit(int* p);


void writeout(int*);
void computetriple(int*);


int main()
{   
    //declare variables
    int num1 = 100;
    int num2 = 200;
    cout << "The value of num1 before double it: " << num1 << endl;
    cout << "The value of num2 before double it: " << num2 << endl;

    //passing the adress of num1
    //function call
    doubleit(&num1);
    doubleit(&num2);
    cout << endl;

    cout << "The value of num1 after double it: " << num1 << endl;
    cout << "The value of num2 after double it: " << num2 << endl;


    int num3= 5;
    int* ptr = &num3;

    //function call
    writeout(ptr);
    *ptr = *ptr + 15;
    //call the fucntion again
    writeout(ptr);
    //function call
    computetriple(ptr);
    writeout(ptr);


    system("pause");
    return 0;
}
//function definition
void doubleit(int* p)
{
    *p = *p * 2;
}
void writeitout(int* value)
{
    cout << "Current Value= " << *value;
}
void computetriple(int* value)
{
    *value +=*value * 3;
}


//modularizing code
//Benefits:
//1) code functions once
//2)reuse it many times
//3) easy to debug

//3 Layer Architecture (Divide and Conquer)
//Seperate into three files: 
// 1) Class Definitions: Data members, function member prototypes
// 2) Function Definitions (details and implementations)
// 3) Tester File: main ()