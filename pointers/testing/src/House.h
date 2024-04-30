#include <stdio.h>

typedef struct House {
	int NumOfBedrooms;
	int NumOfBathrooms;
	char* HouseNum;
} House;


void PrintHouse(struct House*);
void InitHouse(House*, int, int, char*, void (*)(struct House*));

void PrintHouse(struct House* pHouse) {
	printf("House Name: %s\nNumber of Bedrooms: %d\nNumber of Bathrooms: %d\n",
		pHouse->HouseNum, pHouse->NumOfBedrooms, pHouse->NumOfBathrooms	
	);
}

void (*PrintHouse_ptr)(struct House*) = &PrintHouse;

void InitHouse(
	House* pHouse,
	int NumOfBedrooms,
	int NumOfBathrooms,
	char* HouseNum,
	void (*PrintHouse_ptr)(struct House*)
) {
	pHouse->NumOfBedrooms = NumOfBedrooms;
	pHouse->NumOfBathrooms = NumOfBathrooms;
	pHouse->HouseNum = HouseNum;
	(*PrintHouse_ptr)(pHouse);
}




