/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 10, 2017, 8:07 AM
 * Purpose: Calculate Retroactive Pay
 */ 

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here
int main () {
    //Declare and process variables
    const float  payInc = 7.6e-2f;  //pay rate increase in %
    unsigned int newMSal,           //New monthly salary in $
                 newYSal;           //New yearly salary in $
    float prevSal,           //Previous yearly salary in $
          rtroPay;           //Retroactive pay for 6 mo in $
    char ans;
    bool restart;
    
    do {
        cout<<"Please input previous annual salary in $"<<endl;
    while(!(cin >> prevSal)){                               
		cin.clear();                                           
		cin.ignore(numeric_limits<streamsize>::max(), '\n');   
		cout << "Invalid input.  Try again: "<<endl;                 
	}
    
    //Process/Calculations Here
    rtroPay = prevSal/2*payInc;
    newMSal = prevSal/12*(1+payInc);
    newYSal = prevSal*(1+payInc);
    
    //Output Located Here
    cout<<fixed<<setprecision(2);
    cout<<"Pay raise is "<<payInc*100<<"%"<<endl;
    cout<<"Retroactive pay due is $"<<rtroPay<<endl;
    cout<<"New monthly salary is $"<<newMSal<<endl;
    cout<<"New annual salary is $"<<newYSal<<endl;
    
    cout<<endl;
    cout<<"Would you like to run the program again? y/n"<<endl;
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
    //Exit
    return 0;
}

