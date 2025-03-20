#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void menu();
void lengthConversion();
void weightConversion();
void temperatureConversion();
void logout();

void disp() {
    clrscr();
    printf("\n\n\n\n\n\n\n\n\t\t\t****************************************");
    printf("\n\t\t\t          Unit Converter");
    printf("\n\t\t\t****************************************");
}

void menu() {
    int choice;
    clrscr();
    disp();
    printf("\n\t\t\t1. Length Conversion (Meters And Kilometers)");
    printf("\n\t\t\t2. Weight Conversion (Grams And Kilograms)");
    printf("\n\t\t\t3. Temperature Conversion (Celsius And Fahrenheit)");
    printf("\n\t\t\t4. Exit");
    printf("\n\n\t\t\tEnter Your Choice: ");
    scanf("%d", &choice);

    switch (choice) {
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
	    logout();
	    break;
	default:
	    printf("\n\t\t\tInvalid Choice! Try Again.");
	    getch();
	    menu();
    }
}

void lengthConversion() {
    int subChoice;
    float meters, kilometers;
    clrscr();
    disp();

    printf("\n\t\t\tLength Conversion:");
    printf("\n\t\t\t1. Meters to Kilometers");
    printf("\n\t\t\t2. Kilometers to Meters");
    printf("\n\t\t\tEnter Your Choice: ");
    scanf("%d", &subChoice);

    if (subChoice == 1) {
	printf("\n\t\t\tEnter Length in Meters: ");
	scanf("%f", &meters);
	kilometers = meters / 1000;
	printf("\n\t\t\t%.2f Meters = %.3f Kilometers", meters, kilometers);
    } else if (subChoice == 2) {
	printf("\n\t\t\tEnter Length in Kilometers: ");
	scanf("%f", &kilometers);
	meters = kilometers * 1000;
	printf("\n\t\t\t%.2f Kilometers = %.2f Meters", kilometers, meters);
    } else {
	printf("\n\t\t\tInvalid Choice!");
    }

    printf("\n\n\t\t\tPress any key to return to menu...");
    getch();
    menu();
}

void weightConversion() {
    int subChoice;
    float grams, kilograms;
    clrscr();
    disp();

    printf("\n\t\t\tWeight Conversion:");
    printf("\n\t\t\t1. Grams to Kilograms");
    printf("\n\t\t\t2. Kilograms to Grams");
    printf("\n\t\t\tEnter Your Choice: ");
    scanf("%d", &subChoice);

    if (subChoice == 1) {
	printf("\n\t\t\tEnter Weight in Grams: ");
	scanf("%f", &grams);
	kilograms = grams / 1000;
	printf("\n\t\t\t%.2f Grams = %.3f Kilograms", grams, kilograms);
    } else if (subChoice == 2) {
	printf("\n\t\t\tEnter Weight in Kilograms: ");
	scanf("%f", &kilograms);
	grams = kilograms * 1000;
	printf("\n\t\t\t%.2f Kilograms = %.2f Grams", kilograms, grams);
    } else {
	printf("\n\t\t\tInvalid Choice!");
    }

    printf("\n\n\t\t\tPress any key to return to menu...");
    getch();
    menu();
}

void temperatureConversion() {
    int subChoice;
    float celsius, fahrenheit;
    clrscr();
    disp();

    printf("\n\t\t\tTemperature Conversion:");
    printf("\n\t\t\t1. Celsius to Fahrenheit");
    printf("\n\t\t\t2. Fahrenheit to Celsius");
    printf("\n\t\t\tEnter Your Choice: ");
    scanf("%d", &subChoice);

    if (subChoice == 1) {
	printf("\n\t\t\tEnter Temperature in Celsius: ");
	scanf("%f", &celsius);
	fahrenheit = (celsius * 9 / 5) + 32;
	printf("\n\t\t\t%.2fTC = %.2fTF", celsius, fahrenheit);
    } else if (subChoice == 2) {
	printf("\n\t\t\tEnter Temperature in Fahrenheit: ");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit - 32) * 5 / 9;
	printf("\n\t\t\t%.2fTF = %.2fTC", fahrenheit, celsius);
    } else {
	printf("\n\t\t\tInvalid Choice!");
    }

    printf("\n\n\t\t\tPress any key to return to menu...");
    getch();
    menu();
}

void logout() {
    clrscr();
    disp();
    printf("\n\t\t\tThank you for using the Unit Converter!");
    exit(0);
}

void main() {
    disp();
    menu();
}
