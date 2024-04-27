#include <typedef.h>
#include <stb_ds.h>
#include <stdlib.h>
#include <stdio.h>

#include "House.h"


int main(int argc, char* argv[]) {
	if (argc != 4) {
		perror("Usage: out <NumberOfBedrooms> <NumberOfBathrooms> \"<HouseName>\"\n");
		return EXIT_FAILURE;
	}

	House house;

	SetHouse(
		&house,
		atoi(argv[1]),
		atoi(argv[2]),
		argv[3]
	);	

	
}


