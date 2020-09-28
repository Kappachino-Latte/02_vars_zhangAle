#include <stdio.h>

int main() {
	//unsigned char outOfBounds1 = 1000;	Makes it 232 since it is out of bounds
	//unsigned char outOfBounds2 = 999;	This becomes 231
	//unsigned char outOfBounds3 = 1001;	This becomes 233
	//unsigned char outOfBounds4 = 10000;	Makes it 16
	//Not sure what the relation is for the number inputted and the number received
	
	char letter = 'a';
	int num = 5;
	int num2 = 10;
	printf("%c, %d, %d\n", letter, num, num2%num);
	
return 0;
}
