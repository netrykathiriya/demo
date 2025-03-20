#include <stdio.h>
#include <conio.h>  

void lengthConversion()
{
    float meters, kilometers;
    printf("Enter length in meters: ");
    scanf("%f", &meters);
    kilometers = meters / 1000;
    printf("Length in kilometers: %.2fkm\n", kilometers);
}

void weightConversion()
{
    float grams, kilograms;
    printf("Enter weight in grams: ");
    scanf("%f", &grams);
    kilograms = grams / 1000;
    printf("Weight in kilograms: %.2fkg\n", kilograms);
}

void temperatureConversion()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f tf\n", fahrenheit);
}

int main()
{
    int choice;
    clrscr();
    while (1)
    {
	printf("\nUnit Conversion Calculator\n");
	printf("1. Length (Meters to Kilometers)\n");
	printf("2. Weight (Grams to Kilograms)\n");
	printf("3. Temperature (Celsius to Fahrenheit)\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice)
	{
	    case 1:
		lengthConversion();
		break;
	    case 2:
		weightConversion();
		break;
	    case 3:
		temperatureConversion();
		break;
	    case 4:
		printf("Exiting program. Press any key to exit...\n");
		getch();
		return 0;
	    default:
		printf("Invalid choice. Please try again.\n");
	}
    }
    return 0;
}
