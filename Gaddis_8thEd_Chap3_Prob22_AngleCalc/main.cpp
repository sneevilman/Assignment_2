/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 11, 2017, 9:00 AM
 * Purpose: Find sin/cos/tan of an angle
 */ 

//System Libraries Here
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here
int main () {
    //Declare and process variables
    float radians,      //inputted angle in radians
            cosAng,
            sinAng,
            tanAng;
    
    cout<<"This program calculates the sine, cosine, and tangent of an angle.\n"
            "Please enter an angle in radians."<<endl;
    cin>>radians;
    
    //Process/Calculations Here
    sinAng = sin(radians);
    cosAng = cos(radians);
    tanAng = tan(radians);
    
    //Output Located Here
    cout<<"sin = "<<sinAng<<endl;
    cout<<"cos = "<<cosAng<<endl;
    cout<<"tan = "<<tanAng<<endl;

    //Exit
    return 0;
}

