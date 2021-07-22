#include <stddef.h> // for size_t
#include <stdio.h> // for printf
#include <stdint.h> // for uint8_t
#include <netinet/in.h>

int main(int argc, char* argv[])
//uint32_t ntohl(uint32_t netlong)
{
	uint32_t a;
	uint32_t b;

	FILE *fpa;
	FILE *fpb;

	fpa = fopen(argv[1], "r");
	fpb = fopen(argv[1], "r");

	fread(&a, sizeof(a), 1, fpa);
	fread(&b, sizeof(b), 1, fpb);

	//ntohl() : IP주소를 Network byte → Host byte 순서로
	a = ntohl(a);
	b = ntohl(b);

	printf("0x%x", a+b);
}
