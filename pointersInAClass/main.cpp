//
//  main.cpp
//  pointersInAClass
//
//  Created by AB on 5/11/21.
//

#include <iostream>
#include <string>
#include "Student.hpp"

using namespace std;
//Function declaration

void passBy (int a); // pass by value
void passByRef(int& a); //pass by reference "&"




int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n\n";
    
    cout << "Pointers: \n\n";
    
    //number Systems:
    
    int m68681LeftSdie = 0x0280; //address of the chip
    int m68681RightSide = 0x020C0;
    cout << "Value of m68681LeftSdice = "<< m68681LeftSdie<< endl;
    
    cout << "Value of m68681Left (hex) = " << hex << m68681LeftSdie << endl;
    
    cout << "Value of m68681RightSide = "<< m68681RightSide<< endl;
    cout << "Value of  m68681RightSide (hex)= "<<hex<< m68681LeftSdie<< endl;
    
    int temp = 0123; //Warning zero infron of digits says this is OCTAL
    cout << "Value of temp="<<dec <<temp<<endl; //dec decimal
    
//How to pass parameters:
    //a) by Reference
    //b) Value
    cout <<"Passing Parameters:"<< endl;
    int newInt = 56;
    passBy (34);
    passByRef(newInt);
    
    //Pass by Reference is using the address of the variable.
    //introduce the sizeof function:
    
    int i;
    double d;
    string myName ="Angel Basilio";
 
    cout << "size of int = "<< sizeof(int)<<endl;
    cout << "size of int = "<< sizeof(i)<<endl;
    
    cout << "size of double = "<< sizeof(double)<<endl;
    cout << "size of double = "<< sizeof(d)<<endl;
    
    cout << "size of string = "<< sizeof(string)<<endl;
    cout << "size of string = "<< sizeof(myName)<<endl;
    
    
    cout << "Size of a zero terminated string CMPR120= "<<sizeof("CMPR120")<<endl;
    //half a byte is a nibble = 0xF13D so F,1,3 and D are nibbles.
    
    //Practical use of sizeof Function?
    int data [] = {1,34,212,443,53,21,213,13,21,43,45,67,89,62,14,57,86,34,23,56,86,234,13,54,2435,644532,6432,42,3245,652,2345,234,23,23};
    int const NUM_ELEM_IN_DATA_ARRAY =8; //but programmer has to count
    
    
    int numElemInDataArray = sizeof(data)/ sizeof(int);
    cout <<"Number of element in array is "<<numElemInDataArray<<endl;
    
    //POINTERS!!!!
    cout <<"Intro to POINTERS:"<<endl;
    int ii = 81;
    cout <<"Value of ii= "<< ii << endl;
    cout << "Size of ii : "<<sizeof(ii)<<endl;
    cout << "Address of ii : "<< & ii <<endl;  //& = addressof
    passByRef(ii);
    
    
    int *iiiPtr; //sintax for a pointer
    //read as integer pointer called iiiPtr
    iiiPtr = &ii;
    cout << "iiiPrt : "<< & ii <<endl;
    
    iiiPtr = nullptr; // actual value is 0.
    cout << "iiiPrt : "<< iiiPtr <<endl;
    iiiPtr = NULL;
    cout << "iiiPrt : "<<iiiPtr <<endl;
    
    
    //element addresses of 0 1    2   3  4  5  6
           int newArr []= {19,23,456,76,76,78,77};
    int* p1 = &newArr[2];
    int* p2 = &newArr[5];
    
    if (p1<p2){
        cout <<"P1 is less than p2"<< endl;
    }
    cout << "p1 : "<< p1 <<endl;
    cout << "p2 : "<< p2 <<endl;
    
    p1 = newArr;
    for (int i =0; i<7; i++)
    {
        cout << i << "contains"<< *p1 << endl;
        p1=p1+ 1; //saying increments by 4 because it knows
    }
    cout << "n\n\n\n";
    
    
    
    //poitning doubles
    double dub;
    double* doublePtr = &dub;
    
   

    dub = 3.1414926;
    //dereference a pointer you get the calue of the data type
    //de-reference give me the value at the address.
    double newPi = *doublePtr;
    cout <<" value of newPi= "<<newPi<<endl;
    
    
    cout << "n\n\n\n";
    cout << "using pointers with class object"<< endl;
    Student num1("Jhonny", 23);
    Student* prtToStudent = &num1;
  
    cout<< "the Age of num1 student is : "<< prtToStudent->getAge()<<endl;
    cout<< "the name of num1 student is : "<< prtToStudent->getName()<<endl;
    
    //imagine you need an array you did not know how many elements to make it compile  but now at run time you do know how many elemtns you need
    
    int numElements = 1500;
    int * intPrtArr = new int [numElements];
// Waht does new do?
    //
    cout << "Address of the Array"<< intPrtArr<<endl;
    
    //example an image is 327000 bytes:
    int imageSize = 370000;
    char * charImagePtr = new char [imageSize];
    
    cout << "Address of the Array"<< imageSize<<endl;
    
    //You have a new responsability if you ask for memory you need to return it when done: How do you return it?
    delete charImagePtr;
    charImagePtr  = NULL;
    delete intPrtArr;
    intPrtArr  = NULL;
    cout << "Address of the Array after delete "<< intPrtArr<<endl;
    cout << "n\n\n\n";
  //  cout<< "this will cause a run-time error"<<endl;
   // cout << *intPrtArr<<endl;
    
    
    //what is it called when you get memory but do not return it when your program exits:      
    
    
    
    
    
    
    
    return 0;
}

void passBy (int a){
    cout << "Pass by value= "<< a<< endl;;
}
void passByRef(int& a){
    cout <<"pass by Reference = "<<a<< endl;
    cout << "Pass by Reference of "<< &a<<endl;
}
int add (int a, int b)
{
    if (a==0 && b==0)
    throw ("add() this is invalid");

    return (a+b);
}
