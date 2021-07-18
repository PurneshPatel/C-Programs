#include<stdio.h>
int main(void)
{   
    int num, tmp_num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    tmp_num = num;
    while(tmp_num != 0)
    {
        rem = tmp_num % 10;  
        rev = rev * 10 + rem;  
        tmp_num /= 10;  
    }       
    if(num == rev)
    {
        printf("%d is a palindrome number.", num);
    }
    else
    {        printf("%d is not palindrome number.", num);
    }
    return 0;
}
