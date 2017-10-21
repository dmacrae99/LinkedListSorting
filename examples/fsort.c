#include <stdio.h>
#include <stdlib.h>

#include "../src/sort.h"
#include "../src/list.h"

void help();

int main(int argc, char *argv[]) {
	if(argc == 4) {
		struct Sinlist *Sinlist = readfile_Sinlist(argv[1]);
		Sinlist = bubble_Sinlist(Sinlist);
		outputtofile(Sinlist, argv[3]);
	}
	else {
		help();
	}
	return 0;
}


void help() {
	printf("\tUSAGE: ./fsort <inputfile> <sort type> <outputfile>\n\n");
	printf("\t<sort type>:\n\tBubble\t\t\tUseful for small lists\n");
	printf("\tMore to Come\n");
}
