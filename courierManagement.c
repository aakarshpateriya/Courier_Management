#include<stdio.h>
int main()
{

    printf("\nWelcome to Courier Management Service\n");
    star1();
    printf("\nDo You Want to Login To This System\nThen press 1 and if not press 0\n");

    int starting;
    printf("\nEnter 0 or 1: ");
    scanf("\n%d", &starting);
    star1();
    switch(starting){
case 1:
    login();
    break;

case 0:
    printf("\nThanks For Using Courier Management System.\n");
    star1();
    break;

default:
    printf("\nYou have Entered Wrong Statement\n");
    break;
    }

    process();

    entering_data();

    read_data();

}


void login(){
int id, lid;
id = 12202082;
printf("\nEnter the User Id : ");
scanf("%d", &lid);
int passward = 1523;
int lpassward;
printf("\nEnter The Passward :");
scanf("%d", &lpassward);

if(lid == 12202082 && lpassward == 1523){
    printf("\nCorrect Login Details \n Welcome again");

}
else{
    printf("\nEntered Details Are Not Correct\nPlease Enter Correct Details");
}
}

void star1(){
    int i, no_of_stars = 10;
    char star = '*';
for(i = 1; i <= no_of_stars; i++)
{printf("       %c        ", star);}
}




void process(){
printf("\nSir, select one of these options :");
printf("\nPress 1 for entering data\nPress 2 for removing data\nPress 3 for read data\nPress 4 for tracking parcel ");
}



void entering_data(){

FILE *fptr;
fptr = fopen("entering_data.txt", "a+");
char parcel_name[50];
printf("\nEnter The Parcel Name : ");
scanf("%s", &parcel_name);
fprintf(fptr,"\n%s", parcel_name);
fclose(fptr);
printf("\nData Entered Successfully\n");
int q;
printf("\nDo You Want To Open It\n else press 1 and if not press 0");
printf("Enter 0 or 1 : ");
scanf("%d", &q);
if(q==1){

    FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");

// Store the content of the file
char myString[100];

// Read the content and store it inside myString
fgets(myString, 100, fptr);

// Print the file content
printf("%s", myString);

// Close the file
fclose(fptr);
    //read_data();
}

else{
    printf("Thanks for using DataBase. Please come again");
}

}


void removing_data(){

FILE *fptr;
fptr = fopen("\nentering_data.txt", "w+");
fclose(fptr);
}


void read_data(){

FILE *fptr;
fptr = fopen("\nentering_data.txt", "r");
char mystring[100];
fgets(mystring, 100, fptr);
printf("%s", mystring);
fclose(fptr);

}





