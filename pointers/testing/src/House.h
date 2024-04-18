
typedef struct {
	int NumOfBedrooms;
	int NumOfBathrooms;
	char* HouseName;
} House;

char* GetHouseName(House* pHouse) {
	return pHouse->HouseName;
}

int GetNumOfBedrooms(House* pHouse) {
	return pHouse->NumOfBedrooms;
}

int GetNumOfBathrooms(House* pHouse) {
	return pHouse->NumOfBathrooms;
}


