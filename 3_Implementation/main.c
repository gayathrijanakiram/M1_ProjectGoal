#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"func.c"


//Main Code
int main()
 {
    //Local Declarations
    int option;
    float balance = 20000.00;
    int choose;
    int choice;
    
    bool again = true;
    
    // insert code here...
    printf("Do you wear your mask and sanitized before entering ATM?\n");
    printf("< 1 > Yes\n");
    printf("< 2 > No\n");
    scanf("%d",&choice);
    if(choice==1){
        
    while (again) {
    mainMenu();
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Your Selection:\t");
    scanf("%d", &option);
    
    
        switch (option) {
            case 1:
            	system("CLS");
                checkBalanceAmount(balance);
                break;
            case 2:
            	system("CLS");
                balance = cashDeposit(balance);
                break;
            case 3:
            	system("CLS");
                balance = cashWithdraw(balance);
                break;
            
            case 4:
            	system("CLS");
                systemExit();
                return 0;
                
            default:
                errorMessage();
                break;
        }
        
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Do you wish to have another transaction:\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
        
        system("CLS");
        
        
        
        if (choose == 2) {
            again = false;
            systemExit();
            
        }
       
}

    
    }else{
     printf("***Please wear your mask and sanitize to avail the ATM transaction***");   
    }
    return 0;
}//main code



