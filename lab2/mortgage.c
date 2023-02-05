/*
Neol Gutierrez
Fundamentals of Computing 
Lab 2 part 2
mortgage.c
*/

#include <stdio.h>

int main(){
    double iRate, interest, mPay, balance,tSum; 
    int i = 0;
    /*
    Interest rate = iRate
    Interest amount = interest
    Desired Monthly Payment = mPay
    Current Balance = balance
    Total sum of payments = tSum
    */
    printf("Please input the following parameters\n");
    do { 
        if (balance < 0){ // checks if balance is less than 0, then informs user
            printf("Please input a non-negative number!\n");
        }
        printf("Initial Amount: ");
        scanf("%lf",&balance);
    }while(balance < 0); // keeps repeating until user puts a non-negative numebr

    do {
        if (iRate < 0){ 
            printf("Please input a non-negative number!\n");
        }
        printf("Yearly interest rate(\%): ");
        scanf("%lf",&iRate);
    }while(iRate < 0);
    iRate = iRate/(12.0*100.0); // converts yearly interest to monthly interest

    mPay = balance; // mPay is set equal to balance to prevent the following else if statement from registering as true
    do {
        if (mPay < 0 ){ 
            printf("Please input a non-negative number!\n"); 
        // checks to see if monthly payment is less than first interest amount and 
        }else if (mPay < (iRate*balance)){ 
            printf("Please input a higher amount!\n"); 
        }
        printf("Desired Monthly Payment: ");
        scanf("%lf",&mPay); 
    }while(mPay < 0);

    
    printf("Month     Payment    Interest      Balance\n");
    while (balance > 0){ // until balance is less than zero, the program will keep mortgage payments
        i++;
        interest =  balance * iRate; 
        balance += interest - mPay;
        if (balance < 0){ // if balance is than 0, then it will change monthly payment then set balance to 0 
            mPay += balance;
            balance = 0;
        }
        printf("%-5d     $%-7.2lf    $%6.2lf   $%9.2lf\n",i,mPay,interest,balance);
        tSum += mPay;
    }
    
    int years = i/12; 
    i = i % 12;
    printf("You paid a total of $%.2lf over %d years and %d months\n",tSum,years,i);

    return 0;
}

