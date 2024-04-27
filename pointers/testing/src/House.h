#include <stdio.h>

typedef struct House {
	int NumOfBedrooms;
	int NumOfBathrooms;
	char* HouseNum;
} House;

void ShowHouse(House*);
void SetHouse(House*, int, int, char*);
void SetHouseName(House*, char*);

