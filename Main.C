#include <stdio.h>

int main()
{

double GPA;
printf("Input your GPA:");
scanf("%lf" , &GPA);

if (GPA <= 0 || GPA > 4 )
{
    printf("Given GPA is invalid");
}
else if (GPA <= 0.80)
{
    printf("Congratulations You got an E\n");
}
else if (GPA <= 1.60)
{
    printf("Congratulations You got an D\n");
}
else if (GPA <= 1.80)
{
    printf("Congratulations You got an D+\n");
}
else if (GPA <= 2.00)
{
    printf("Congratulations You got an C\n");
}
else if (GPA <= 2.40)
{
    printf("Congratulations You got an C+\n");
}
else if (GPA <= 2.80)
{
    printf("Congratulations You got an B\n");
}
else if (GPA <= 3.20)
{
    printf("Congratulations You got an B+\n");
}
else if (GPA <= 3.60)
{
    printf("Congratulations You got an A\n");
}
else
{
    printf("Congratulations You got an A+\n");
}


return 0;
}