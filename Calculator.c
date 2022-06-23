#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,b,Addition,
    Subtraction,Multiply,
    Division,choice,sum;
    printf("1: Addition (+) \n 2: Subtraction (-) \n 3: Multiply (*) \n 4: Division (/) \n");
    printf("Enter The Choice...:- ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        /* code */
        printf("Enter The First No :-");
        scanf("%d",&a);
        printf("Enter The Second No :-");
        scanf("%d",&b);
        sum = a+b;
        printf("Here is Your Total =%d",sum);
        break;
    case 2:
        /* code */
        printf("Enter The First No :-");
        scanf("%d",&a);
        printf("Enter The Second No :-");
        scanf("%d",&b);
        sum = a-b;
        printf("Here is Your Total =%d",sum);
        break;
    case 3:
        /* code */
        printf("Enter The First No :-");
        scanf("%d",&a);
        printf("Enter The Second No :-");
        scanf("%d",&b);
        sum = a*b;
        printf("Here is Your Total =%d",sum);
        break;
        case 4:
        /* code */
         printf("Enter The First No :-");
        scanf("%d",&a);
        printf("Enter The Second No :-");
        scanf("%d",&b);
        sum = a/b;-
        printf("Here is Your Total =%d",sum);
        break;
    default:
    printf("This Value is Default (Error Value .......)");
        break;
    }
    return 0;
}