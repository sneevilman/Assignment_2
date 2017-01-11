/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on 10 Jan, 2017, 12:33 PM
 * Purpose: Determine fire safety based on room capacity
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
    char ans;
    bool restart;
    short roomCap,      //max capacity of room in people
            atndees,    //meeting attendees in people
            ovrundr;    //remainder in people
    
    do {
    cout<<"How many people are attending the meeting?"<<endl;
    cin>>atndees;
    cout<<"What is the max capacity of the meeting room?"<<endl;
    cin>>roomCap;
    
    //Process/Calculations Here
    ovrundr = abs(roomCap-atndees);
    
    if(roomCap>=atndees){
        cout<<"This meeting is in accordance with fire regulations."<<endl;
        cout<<ovrundr<<" more people can legally attend."<<endl;       
    }
    if(roomCap<atndees){
        cout<<"This meeting is over capacity by "<<ovrundr<<" members. It is in\n"
                "violation of fire regulations and can not be legally held."<<endl;
    }
        
        cout<<endl;
        cout<<"Would you like to run this program again? y/n"<<endl;
        cin>>ans;
        while(ans != 'y' && ans !='n' && ans!= 'Y' && ans!= 'N'){
            cout<<"Please enter y/n"<<endl;
                    cin>>ans;
    }
          if(ans=='y' || ans=='Y')
            restart = true;
        else
            restart = false;
    } while(restart);
    
    //Output Located Here

    //Exit
    return 0;
}

