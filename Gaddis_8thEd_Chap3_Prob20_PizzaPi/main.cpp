/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on 10 Jan, 2017, 1:33 PM
 * Purpose: Determine slices of pizza
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
    float aSlice = 14.125,      //area per slice in sq inches
          dmtr,                 //diameter of pizza in inches
          aPizza,               //area of pizza in sq inches
          slices;               //slices of pizza
    const float pi = 3.14159;   //pi in pi
    char ans;
    bool restart;
    
   
    //Process/Calculations Here
    do {
        
    cout<<"Input diameter of pizza in inches"<<endl;
    cin>>dmtr;
    
    
    aPizza = pi*(dmtr/2)*(dmtr/2);
    slices = aPizza/aSlice;
    
    cout<<fixed<<setprecision(1);
    cout<<"The number of slices is "<<slices<<endl;
        
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

