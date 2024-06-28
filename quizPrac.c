#include <stdio.h>

int main(){
	unsigned char x,y;
	x = 65;//01000001
	y = 86;//01010110
	//1111z000 z is whatever number that was at that bit in x
	x = x | 0b11110000;
	x = x & 0b11111000;
	//0b11110000 eth
	printf("x: %zu ", (size_t)x);
}
