#include <stdio.h>

typedef struct House {
	int NumOfBedrooms;
	int NumOfBathrooms;
	char* HouseName;
} House;


void ShowHouse(House* pHouse) {
	printf("House Name: %s\nNumber of Bedrooms: %d\nNumber of Bathrooms: %d\n",
		pHouse->HouseName, pHouse->NumOfBedrooms, pHouse->NumOfBathrooms	
	);
}
void SetHouseName(House* pHouse, char* HouseName) {
	pHouse->HouseName = HouseName;
}


