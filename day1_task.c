//write a program to calculate the sum of two numbers using scanf function to take input from user.
#include<stdio.h> 
int main()
{
    //displaying name, branch and ug number.
    printf("Name: Aadarsh Ray\n Branch: CSE\n UG: 26ug050361\n"); //displaying name, branch and ug number.
    
    
    
    
    int a,b,sum; //declaring three integers variables a,b,sum.
    printf("Enter two numbers:"); //displaying message to user to enter two numbers.
    scanf("%d %d",&a, &b); //taking input from user and storing it in variables a and b.
    sum = a+b; //calculating sum of a and b and storing it in variable sum.
    printf("The sum of %d and %d is %d\n",a,b,sum); //displaying the sum of a and b on screen.
    
   
   
    //print 3*3 square using asterisks.
    printf("***\n***\n***\n");


    //print roll number of student take data from the user.
    int roll_number; //declaring integer variable roll number.
    printf("Enter the roll number of the student"); // displaying message to user to enter roll number of student.
    scanf("%d",&roll_number);//taking input from the user and storing it in variable roll number.
    printf("Welcome roll number %d\n" , roll_number); //displaying welcome message with roll number of student.

    //ask user there favorite letter or character and print it on screen.
    char favorite_character; //decelaring character variable favorite_character.
    printf("Enter your favorite character:");//displaying message to user to enter there favorite character.
    scanf("%c",&favorite_character); //taking data from user and storing it in variable favorite_character.
    printf("Your favorite character is %c",favorite_character); //displaying favorite character of user on screen.

    return 0; //returning 0 to indicate successful execution of program.
}