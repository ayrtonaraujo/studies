//Example of a Struct

#include <stdint.h>
#include <stdio.h>


struct carModel;

int main ()
{
	struct carModel carBMW = {2021, 15000, 220, 1330};
	struct carModel carFord = {4031, 35000, 160, 1900.96};

    printf ("%d",carBMW.carNumber );

		return 0;
}

struct carModel
{
	unsigned int    carNumber;
	uint32_t        carPrice;
	uint16_t        carMaxSpeed;
	float           carWeight;
};
