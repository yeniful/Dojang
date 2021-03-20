#include <stdio.h>

struct Dashboard {
	int speed;
	char fuel;
	float mileage;
	int engineTemp;
	int rpm;
};

int main()
{
	struct Dashboard d1 = { .speed = 80,  .fuel = 'F', .mileage = 5821.442871, .engineTemp = 200, .rpm = 1830};

	printf("Speed: %dkm/h\n", d1.speed);
	printf("Fuel: %c\n", d1.fuel);
	printf("Mileage: %fkm\n", d1.mileage);
	printf("Engine temp: %d℃\n", d1.engineTemp);
	printf("RPM: %d\n", d1.rpm);

return 0;
}

/*Speed: 80km/h
Fuel: F
Mileage: 5821.442871km
Engine temp: 200℃
RPM: 1830*/
