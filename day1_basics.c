//Basic Structure of C program 
#include<stdio.h> //standard input output header file(printf/scanf ke liye)
int main() // main function where execution of program starts.
{
    printf("This is how i started learning c programming language"); //printf displays the output on screen that is inside the double quotes .


    //Varible in C programming language is a name given to a memory location that is used to store data.
   
   
   //Integer as integer is a data type that is used to store whole numbers.
    int a= 10; // Here we are declaring a variable 'a' of interger data type and assigning it a value of 10.
      printf("\nThe value of a is %d",a); //Here we are displaying the value of variable 'a' on screen using printf function. %d is a format specifier used to display integer values.
   
   
    //float is a data type that is used to store decimal values.
    float b = 22.777; // Here we are declaring a variable 'b' of float data type and assigning it a value of 22.777.
    printf("\nThe value of b is %f",b); //Here we are displaying the value of variable 'b' on screen using printf function. %f is a format specifier used to display float values.
  
  
    //char is a data type that is used to store a specific/special character.
    char c = 'A'; // Here we are declaring a variable 'c' of char data type and assigning it a value of 'A'.
    printf("\nThe value of c is %c",c); //Here we are displaying the value of variable 'c' on screen using printf function. %c is a format specifier used to display char values.
    
    
    return 0; //return 0 means program executed successfully.                  


}                                         