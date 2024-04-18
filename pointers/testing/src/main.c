#include <typedef.h>
#include <stb_ds.h>
#include <stdio.h>
#include <stdlib.h>

#include "House.h"

void ShowHouse(House* pHouse) {
	printf("House Name: %s\nNumber of Bedrooms: %d\nNumber of Bathrooms: %d\n",
		GetHouseName(pHouse), GetNumOfBedrooms(pHouse), GetNumOfBathrooms(pHouse)
	);
}

int main(int argc, char* argv[]) {
	if (argc != 4) {
		perror("Usage: out <NumberOfBedrooms> <NumberOfBathrooms> \"<HouseName>\"\n");
		return EXIT_FAILURE;
	}

	House house = {
		atoi(argv[1]),
		atoi(argv[2]),
		argv[3]
	};
	
	ShowHouse(&house);
}


