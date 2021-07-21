#include <stddef.h> // for size_t
#include <stdio.h> // for printf
#include <stdint.h> // for uint8_t

int main(int argc, char* argv[])
{
	uint32_t a;
	uint32_t b;

	FILE *fpa = fopen(argv[1], "r");
	FILE *fpb = fopen(argv[1], "r");

	fread(&a, sizeof(a), 1, fpa);
	fread(&a, sizeof(b), 1, fpb);

	a = ntohl(a);
	b = ntohl(b);

	printf("%d", a+b);
}
