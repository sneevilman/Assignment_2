/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 11, 2017, 9:12 AM
 * Purpose: Word Game
 */ 

//System Libraries Here
#include <iostream>
#include <string>

using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here
int main () {
    //Declare and process variables
    string name,
            age,
            city,
            college,
            prfssn,
            animal,
            petName;
    
    cout<<"Enter your name"<<endl;
    getline(cin, name);
    cout<<"Enter your age"<<endl;
    getline(cin, age);
    cout<<"Enter the name of a city"<<endl;
    getline(cin, city);
    cout<<"Enter the name of a college"<<endl;
    getline(cin, college);
    cout<<"Name a profession"<<endl;
    getline(cin, prfssn);
    cout<<"Name a type of animal"<<endl;
    getline(cin, animal);
    cout<<"Give a pet name"<<endl;
    getline(cin, petName);
    
    //Process/Calculations Here
    
    
    //Output Located Here
    
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<".\n"
            "At the age of "<<age<<", "<<name<<" went to college at "<<college<<".\n"
            ""<<name<<" graduated and went to work as a "<<prfssn<<".\n"
            "Then, "<<name<<" adopted a(n) "<<animal<<" named "<<petName<<".  They both\n"
            "lived happily ever after!"<<endl;
    //Exit
    return 0;
}

