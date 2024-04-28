#include "House.h"


void ShowHouse(House* pHouse) {
	printf("House Name: %s\nNumber of Bedrooms: %d\nNumber of Bathrooms: %d\n",
		pHouse->HouseNum, pHouse->NumOfBedrooms, pHouse->NumOfBathrooms	
	);
}

void SetHouseName(House* pHouse, char* HouseNum) {
    pHouse->HouseNum = HouseNum;
}

void SetHouse(House* pHouse, int NumOfBedrooms, int NumOfBathrooms, char* HouseNum) {
	pHouse->NumOfBedrooms = NumOfBedrooms;
	pHouse->NumOfBathrooms = NumOfBathrooms;
	SetHouseName(pHouse, HouseNum);
}


