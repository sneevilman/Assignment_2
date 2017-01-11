/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 10, 2017, 1:03 PM
 * Purpose: Make specific # of cookies
 */ 

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here
int main () {
    //Declare and process variables
    const short batch = 48; //standard batch of cookies
    float sCups,   //cups of sugar in cups
          fCups,  //cups of flour in cups
          bCups,     //cups of butter in cups
          fRatio, sRatio, bRatio;  //ratio of cups/cookies
    short cookies;       //desired number of cookies in cookies
    
    cout<<"Please input the number of cookies you wish to make"<<endl;
    cin>>cookies;
    
    //Process/Calculations Here
    fRatio = 2.75/batch;
    sRatio = 1.5/batch;
    bRatio = 1.0/batch;
    fCups = fRatio*cookies;
    sCups = sRatio*cookies;
    bCups = bRatio*cookies;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"Flour: "<<fCups<<" cups"<<endl;
    cout<<"Sugar: "<<sCups<<" cups"<<endl;
    cout<<"Butter: "<<bCups<<" cups"<<endl;

    //Exit
    return 0;
}

