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
    printf("Congratulations Your Grade is E\n");
}
else if (GPA <= 1.60)
{
    printf("Congratulations Your Grade is D\n");
}
else if (GPA <= 1.80)
{
    printf("Congratulations Your Grade is D+\n");
}
else if (GPA <= 2.00)
{
    printf("Congratulations Your Grade is C\n");
}
else if (GPA <= 2.40)
{
    printf("Congratulations Your Grade is C+\n");
}
else if (GPA <= 2.80)
{
    printf("Congratulations Your Grade is B\n");
}
else if (GPA <= 3.20)
{
    printf("Congratulations Your Grade is B+\n");
}
else if (GPA <= 3.60)
{
    printf("Congratulations Your Grade is A\n");
}
else
{
    printf("Congratulations Your Grade is A+\n");
}


return 0;
}