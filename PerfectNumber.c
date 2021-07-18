#include<stdio.h>
#include<conio.h>
int main()
{
    int num, sum=0, i;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=1; i<num; i++)
    {
        if(num%i == 0)
            sum = sum + i;
    }
    if(num == sum)
        printf("\nIt's a Perfect Number.");
    else
        printf("\nIt's not a Perfect Number.");
    getch();
    return 0;
}
