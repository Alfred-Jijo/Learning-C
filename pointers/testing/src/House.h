#include <stdio.h>

typedef struct House {
	int NumOfBedrooms;
	int NumOfBathrooms;
	char* HouseNum;
} House;

void PrintHouse(House*);
void InitHouse(House*, int, int, char*, void (*PrintHouse)(House*));

void PrintHouse(House* pHouse) {
	printf("House Name: %s\nNumber of Bedrooms: %d\nNumber of Bathrooms: %d\n",
		pHouse->HouseNum, pHouse->NumOfBedrooms, pHouse->NumOfBathrooms	
	);
}

void InitHouse(House* pHouse, int NumOfBedrooms, int NumOfBathrooms, char* HouseNum, void (*PrintHouse)(House*)) {
	pHouse->NumOfBedrooms = NumOfBedrooms;
	pHouse->NumOfBathrooms = NumOfBathrooms;
	pHouse->HouseNum = HouseNum;
	PrintHouse(pHouse);
}


void (*PrintHouse)(House*) = &PrintHouse;


