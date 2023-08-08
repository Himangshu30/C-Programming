#include<stdio.h>

int main()
{
//defining an integer constant
const int var=10;
printf("The initial integer is :%d\n" ,var);


//defining a pointer to that const var

int*ptr=&var;

//changing the value

*ptr=500;
 printf("The final value is : %d\n" ,var);

return 0;

}
