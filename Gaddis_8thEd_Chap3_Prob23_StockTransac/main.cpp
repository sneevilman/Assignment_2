/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 11, 2017, 10:06 AM
 * Purpose: Stock Transaction
 */ 

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here
int main () {
    //Declare and process variables
    short shares = 1000;    //number of shares Joe purchased/sold
    float prcInit = 45.50,  //Initial price of shares in $
          prcSale = 56.90,  //Sale price of shares in $
          brkrC = 2.0e-2,   //stockbroker's commission rate
          stkPrc,           //price payed for the stocks in $
          stkSale,          //raw earnings for stock sale in $
          cmsn1,          //commission for purchase in $
          cmsn2,          //commission for sale in $
          profit;           //total profit earned on sale
          
    
    //Process/Calculations Here
    stkPrc = shares*prcInit;
    cmsn1 = stkPrc*brkrC;
    stkSale = shares*prcSale;
    cmsn2 = stkSale*brkrC;
    profit = stkSale-(stkPrc+cmsn1+cmsn2);
    
    //Output Located Here
    cout<<"Joe paid $"<<stkPrc<<" for the stock."<<endl;
    cout<<"The purchase commission was $"<<cmsn1<<"."<<endl;
    cout<<"Joe sold his stock for $"<<stkSale<<"."<<endl;
    cout<<"The sale commission was $"<<cmsn2<<"."<<endl;
    cout<<"Joe's total profit was $"<<profit<<"."<<endl;

    //Exit
    return 0;
}

