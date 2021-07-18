#include<stdio.h>
float get();
float calculation(float);
int main()
{
	printf("C to F : %.2f F",calculation(get()));
	return 0;
}
float get()
{
	float Celsius;
	printf("Please Temperature in Celsius: ");
	scanf("%f",&Celsius);
	return Celsius;
}
	
float calculation(float Celsius)
{ 
	return Celsius*(9.0/5.0)+32.0;
}
