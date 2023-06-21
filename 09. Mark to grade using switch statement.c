//To determine the grade of the marks using switch statement:


#include <stdio.h>
    int main() {
    int marks;


    printf("Enter the marks obtained: ");
    scanf("%d", &marks);


    switch (marks) {
        case 80 ... 100:
            printf("A+");
            break;
        case 70 ... 79:
            printf("A");
            break;
        case 60 ... 69:
            printf("A-");
            break;
        case 50 ... 59:
            printf("B");
            break;
        case 40 ... 49:
            printf("C");
            break;
        case 33 ... 39:
            printf("D");
            break;
        case 0 ... 32:
            printf("F");
            break;
        default:
            printf("Invalid marks Entered");
            break;
    }
}
