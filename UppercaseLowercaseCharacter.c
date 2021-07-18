#include<stdio.h>
#include<ctype.h>

int main()
{
	char Ch;
  	printf("\n Please Enter any alphabet  :  ");
  	scanf("%c", &Ch);
 
  	if ( is lower(Ch) )
   	{  
    	printf ("\n Entered character is a Lowercase Alphabet");
   	}
    else if ( is upper(Ch) )
   	{  
    	printf ("\n Entered character is an Uppercase Alphabet");
   	}
  	else
   	{
    	printf("\n Entered character is Not an Alphabet");
   	}
	return 0;   
}

