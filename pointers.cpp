// pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    //declare variables and assign values
    int a = 8;
    int b = 16;


    //POINTERS:

    //create pointers 
    int* ptra = &a;
    int* ptrb;
    ptrb = &b;


    //display the info stored in the pointer variables
    cout << "ptra= " << &ptra << endl;
    cout << "ptrb= " << &ptrb << endl;

    //displays adresses

    cout << "ptra= " << ptra << endl;
    cout << "ptrb= " << ptrb << endl;


    //values in the adress pointed to

    cout << "a = " << *ptra << endl;
    cout << "b= " << *ptrb << endl;


    //POINTERS AND ARRAYS

    int numbers[] = { 1, 2,3, 4, 5, 6, 7, 8,9,10 };
    int* ptr = numbers;
    cout << "ptr at: " << ptr << "gets: " << *ptr << endl;
    ptr++;
    cout << "ptr at: " << ptr << "gets: " << *ptr << endl;
    ptr++;
    cout << "ptr at: " << ptr << "gets: " << *ptr << endl;
    ptr++;
    cout << "ptr at: " << ptr << "gets: " << *ptr << endl;
  ptr = ptr - 2;
   cout << "ptr at: " << ptr << "gets: " << *ptr << endl;

    //display completed info
   
    for (int i = 0; i < 10; i++)
    {
      cout << endl << "Element: " << i;
       cout << " Value: "<< *ptr;
       ptr++;
    }

    system("pause");
    return 0;












}

//How to bypass Arguments to functions:
//1) by values (using Resource Memory Adress) Ex: int f1(int b); int a=5; 
//2)by refrence 
//3)using pointers: a variable holding the adress of another variable or a function.
//  ex: int a=5;
//      int *b;
//      int *b=&a;
//      b=1;


