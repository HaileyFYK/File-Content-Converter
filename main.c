#include "header.h"

int main(int argc, char* argv[]){

	printf("\n");

	FILE* fip = fopen("input.txt", "r");
	FILE* fop = fopen("output.txt", "w");

	while(c != '\n') {
			
		if(isspace(c)) {
			putc('_', fop);
		} else {
			putc(tolower(c), fop);
		}

		c = getc(fip);
	}

	putc('\n', fop);

	fclose(fop);
	fclose(fip);

	printf("\n");

	return 0;
}
