#include <stdio.h>

typedef struct House {
	int NumOfBedrooms;
	int NumOfBathrooms;
	char* HouseNum;

	void (*ShowHouse_ptr)(House*);
	void (*SetHouse_ptr)(House*, int, int, char*);
	void (*SetHouseName_ptr)(House*, char*);
} House;

void ShowHouse(House*);
void SetHouse(House*, int, int, char*);
void SetHouseName(House*, char*);

void (*SetHouseName_ptr)(House*, char*) = SetHouseName;
void (*SetHouse_ptr)(House*, int, int, char*) = SetHouse;
void (*ShowHouse_ptr)(House*) = ShowHouse;

