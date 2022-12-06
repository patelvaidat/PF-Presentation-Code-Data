#include <stdio.h> //printf(), scanf()
#include <string.h> // strncpy, strncmp function

void main(void)
{

    char Password[15]; 
    char buff[15];
    char flag = 'F';
    
    printf("\nFlag: %c\n", flag);
    int pass = 0;

    strncpy(Password,"StackSmashed", 15);

    printf("\nWelcome to Secure Server.\n");
    printf("\nEnter the password: ");
    gets(buff);

    //! strcmp() will return 0 if the strings match. if the strings dont match,
    //! it will return value(eg - "-1") < 0 if the input string is of less characters than the original string,
    //! else it will return value(eg - "1") > 0 if the input string is of More characters than the original string.

    //? int flag = strcmp(buff, "StackSmashed");
    //? if (flag == 1 || -1) --> Wrong Pass
    //? else (flag == 0) --> Correct Pass

    if (strncmp(buff, Password, 15))
    {
        printf("\nWrong Password\n");
    }
    else
    {
        printf("\nCorrect Password\n");
        pass = 1;
    }
    if (pass)
    {
        //! Now Give root or admin rights to User
        printf("\nROOT PRIVILEGES GIVEN TO THE USER!");
        printf("\nWELCOME TO THE SECURE SERVER...\nC:\\Users>\n");
    }
    printf("\nFlag: %c", flag);
}
