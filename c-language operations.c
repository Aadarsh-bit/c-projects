#include <stdio.h>

int main() {
    printf("hello aadarsh this is my first c program and  this is my 1st lab in pps.My Roll Number is 66 and I am in Division A3 \n");

int a,b,add,sub,mul,div,mod;
printf("enter the value of a and b\n");
scanf("%d %d",&a,&b);

add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;

printf("addition is %d\n",add);
printf("subtraction is %d\n",sub);
printf("multiplication is %d\n",mul);
printf("division is %d\n",div);
printf("modulus is %d\n",mod);

    return 0;
}