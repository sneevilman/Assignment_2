/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 10, 2017, 9:12 AM
 * Purpose: Calculate Consumer Loan
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
    float faceVal,           //face value of loan in $
          ttlInt,            //total interest payed in $
          amntRcv,           //amount received in $
          intRate,           //interest rate in %
          years,             //duration in years
          mPaymnt,           //monthly payment in $
          months;            //duration in months
    char ans;
    bool restart;
    
   do {
       cout<<"This program calculates the face value and monthly payments\n"
            "of your loan. Please input the amount of money you wish\n"
            "to receive"<<endl;
            cin>>amntRcv;
    cout<<"Now input the interest rate on your loan in %"<<endl;
            cin>>intRate;
    cout<<"Lastly, input the duration of your loan in months"<<endl;
            cin>>months;
            
    //Process/Calculations Here
            years = months/12;
            /*total interest = face value * interest rate * year
             *amount received is face value - total interest*year
             *amntRcv = face - face(int*ye)
             *amntRcv = face(1-1(int*ye))
             *face = amntRcv/(1-1(int*ye)) 
            */
            faceVal = amntRcv/(1-((intRate/100)*years));
            mPaymnt = faceVal/months;                
    
   
    //Output Located Here
            cout<<fixed<<setprecision(2)<<endl;
            cout<<"The face value of your loan is $"<<faceVal<<endl;
            cout<<"Your monthly payment is $"<<mPaymnt<<endl;
            
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
   }while (restart);
    //Exit
    return 0;
}

