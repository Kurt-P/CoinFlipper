#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	
	int x, randomNumber, flips;
	unsigned int seed;
	
	if (argc < 3) {
		printf("Usage: %s <seed>, <flips>", argv[0]);
		return -1;
	}
	
	seed = atoi(argv[1]);
	flips = atoi(argv[2]);
	
	srand(seed);
	
	for (x = 0; x <= flips; x++) {
		randomNumber = rand();
		
		if (randomNumer % 2 == 0) {
			printf("Heads");
		}
		else {
			printf("Tails");
		}
	}
	
    return 0;
}
