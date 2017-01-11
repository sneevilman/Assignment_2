/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 11, 2017
 * Purpose: Calculate Paycheck
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
    float ovrTime = 1.5,        //overtime multiplier
          payRate = 16.78,      //rate of pay in $/hr
          ssTax = 6.0e-2,       //social security tax
          finTax = 1.4e-1,      //federal income tax
          sinTax = 5.0e-2,      //state income tax
          hours,                //hours worked in hours
          hIns,                 //health insurance charge
          grssPay,              //unprocessed paycheck in $
          payChck;              //total paycheck in $
    unsigned short depend;      //number of dependents
    char ans;
    bool restart;
    
    //Process/Calculations Here
    do {
        
        cout<<"Input the hours worked."<<endl;
        cin>>hours;
        cout<<"Input the number of dependents."<<endl;
        cin>>depend;
        
        if (depend<=2){            
            hIns = 0.00;
            }else{
            hIns = 35;
            }
        
        if(hours<=40){
            grssPay = payRate*hours;
        }else{
            grssPay = payRate*40+payRate*ovrTime*(hours-40);
        }
        
            payChck = grssPay-hIns-(10+grssPay*(ssTax+finTax+sinTax));

        
        cout<<fixed<<setprecision(2)<<endl;
        cout<<"Gross pay: $"<<grssPay<<endl;
        cout<<"Social Security: $"<<ssTax*grssPay<<endl;
        cout<<"Federal Income Tax: $"<<finTax*grssPay<<endl;
        cout<<"State Income Tax: $"<<sinTax*grssPay<<endl;
        cout<<"Union Dues: $10.00"<<endl;
        cout<<"Health Insurance: $"<<hIns<<endl;
        cout<<"Total amount earned is $"<<payChck<<endl;
        
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

