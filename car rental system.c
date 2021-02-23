/*
Name: Car Rental System
Author: Tejas A. Sheth
Version: 1.0		//(major change . minor edit )
Description: 

v1,0 = 

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


// function declarations
void car_rental();
void pers_dets();
void car_dets();

// variables
char name[100], age[100], raddr[1000], contact[20], gender[1];
char c_manuf[100], c_year[5], c_model[100], c_type[100], c_color[50], c_engine[100];

void pers_dets(){
	printf("Name - ");
	gets(name);
	printf("Age - ");
	gets(age);
	printf("Gender (M/F/O) - ");
	gets(gender);
	printf("Contact No. - ");
	gets(contact);
	printf("Residential Address - ");
	gets(raddr);
}

void car_dets(){
	printf("Car Manufacturer - ");
	gets(c_manuf);
	printf("Car Make Year - ");
	gets(c_year);
	printf("Car Model - ");
	gets(c_model);
	printf("Car Type (SUV/LMV/Sedan) - ");
	gets(c_type);
	printf("Car Color - ");
	gets(c_color);
	printf("Car Engine (Diesel/Petrol/NaturalGas)- ");
	gets(c_engine);
}

void car_rental(){
	pers_dets();
	car_dets();
}

int main(){
	car_rental();
	return 0;
}

