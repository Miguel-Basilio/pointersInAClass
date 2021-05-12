//
//  Student.hpp
//  pointersInAClass
//
//  Created by AB on 5/11/21.
//

#ifndef Student_hpp
#define Student_hpp
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

#endif /* Student_hpp */
class Student {
private:
    string name;
    int age;
    int * testScores;
public:
    Student ()
    {
        name = "no name set";
        age =0;
        testScores = new int[10];
    }
    Student (string paraName, int paraAge)
    { name = paraName;
        age = paraAge;
        testScores = new int[10];
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    
    ~Student()
    {
        //Program Supervisor (os) will call the destructor
        // at the end of the program
        //good place to close any open files
        //ggo place to flush any open files
        //good place to deallocate any memory.
        delete testScores;
        cout << "Debug only - Destructor for a student invoked" << endl;
        
    }

};
