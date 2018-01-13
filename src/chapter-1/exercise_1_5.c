/* Modify the temperature conversion program to print the table in reverse order,
   that is, from 300 degree to 0 */

#include <stdio.h>

int main()
{
	int fahr;

	printf("Fahrenheit-Celsius table in reverse order, using for loop.\n");

	for (fahr = 300; fahr >=0; fahr = fahr - 20)
	{
		printf("%3d %6.1F \n", fahr, (5.0/9.0)*(fahr-32));
	}
}