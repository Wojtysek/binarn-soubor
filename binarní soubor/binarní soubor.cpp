#include <stdio.h>

int main(void) {

	FILE* vystuptxt = fopen("vystuptxt.txt", "w");
	FILE* vystupbin = fopen("vystupbin.txt", "wb");

	int x = 0x1A2B3C4D;
	fprintf(vystuptxt, "%d", x);
	fwrite(&x, sizeof(int), 1, vystupbin);

	fclose(vystuptxt);
	fclose(vystupbin);
}