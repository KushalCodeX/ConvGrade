#include <stdio.h>

int main(void) {
double GPA;
const double GPA_Max[] = {0.8, 1.6, 1.8, 2.0, 2.4, 2.8, 3.2, 3.6, 4.0};
const char *Grades[] = {"E", "D", "D+", "C", "C+", "B", "B+", "A", "A+"};

printf("Input your GPA:");
scanf("%lf" , &GPA);

if (GPA <= 0 || GPA > 4) {
    printf("Invalid Information\n");
    return 0;
}


 for (int i = 0; i < 9; i++) {
    if (GPA <= GPA_Max[i]) {
        printf("Congratulations You got an %s\n" , Grades[i]);
        break;
    } 
 }
 
return 0;
}
