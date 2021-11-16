#include <stdio.h>
struct Empolyee_Detail
{
    int id;
    char name[100];
    char desig[100];
    float salary;
};
void main()
{
    struct Empolyee_Detail e1;
    printf("Enter the Empolyee id ");
    scanf("%d", &e1.id);
    printf("The id is : %d\n", e1.id);

    printf("Enter the Empolyee name ");
    scanf("%s", e1.name);
    printf("The name is : %s\n", e1.name);

    printf("Enter the Empolyee designation ");
    scanf("%s", e1.desig);
    printf("The name is : %s\n", e1.desig);

    printf("Enter the Empolyee salary ");
    scanf("%f", e1.salary);
    printf("The name is : %0.2f\n", e1.salary);
}