#include <stdio.h>
#include<windows.h>
#include<time.h>


void myfunction1()
{

    int pin=1234,enteredpin,count=0;



    int transaction=1;

    while (pin != enteredpin)
    {
        printf("ENTER YOUR SECRET PIN NUMBER:");
        scanf("%d", & enteredpin);
        if (enteredpin!=pin)
        {
            Beep(610,500);

            printf("PLEASE ENTER VALID PASSWORD! \a\n");
        }
        count++;
        if(count==3 && pin!=enteredpin)
        {
            exit(0);
        }
    }
}
void myfunction2()
{
    int transaction=1,choice,amount=1000;
    int withdraw,deposit;

    while(transaction!=0)
    {


        printf("\n******Welcome to AAA Bank ATM Service*********\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Quit\n");
        printf("********************************************\n\n");
        printf("Enter your choice: ");
        scanf("%d", & choice);
        switch (choice)
        {
        case 1:
            printf("\n YOUR BALANCE IS TK : %d ", amount);
            break;
        case 2:
            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%d", & withdraw);
            if (withdraw % 50 != 0)
            {
                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
            }
            else if (withdraw > amount)
            {
                printf("\n INSUFFICENT BALANCE");
            }
            else
            {
                amount = amount - withdraw;
                printf("\n\n PLEASE COLLECT CASH");
                printf("\n YOUR CURRENT BALANCE IS :%d", amount);
            }
            break;
        case 3:
            printf("\n ENTER THE AMOUNT TO DEPOSIT:");
            scanf("%d", & deposit);
            amount = amount + deposit;
            printf("YOUR BALANCE IS :%d", amount);
            break;
        case 4:
            printf("\n THANK YOU FOR USING AAA Bank ATM");
            break;
        default:
            Beep(610,500);
            printf("\n INVALID CHOICE");
        }
        printf("\nDO YOU WISH TO PERFORM ANOTHER TRANSACTION?PRESS 1[YES],0[NO]");
        scanf("%d",&transaction);
    }
}



struct profile{

char name;
int age;
char location;


};

int main(){
         system("color 3F");
         time_t now;
         time(&now);
    printf("\t\t\t\t     %s",ctime(&now));

    printf("\n********Welcome to AB Bank ATM Service***********\n");
myfunction1();
struct profile p1;

printf("Name:Alok kumar paul\n",p1.name);
printf("Age:23\n",p1.age);
printf("Location:Faridpur\n ",p1.location);



    myfunction2();






}


