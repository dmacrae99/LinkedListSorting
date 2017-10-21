#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct Sinlist *readfile_Sinlist(const char *file) {
	struct Sinlist *Sinlist = malloc(sizeof(struct Sinlist));
	struct Sinlist *entry = malloc(sizeof(struct Sinlist));
	size_t entrysize = 100;
	
	Sinlist->next = malloc(sizeof(struct Sinlist));
	Sinlist->next = entry;
	entry = Sinlist;

	FILE *listf = fopen(file, "r");

	if(listf == NULL) {
		ERROR("File Failed to Open for Reading");
	} else {
		while(!feof(listf)) {
			entry->data = malloc(entrysize*sizeof(char));
			getline(&entry->data, &entrysize, listf);
			entry->next = malloc(sizeof(struct Sinlist));
			entry = entry->next;
		}
	fclose(listf);
	}
	free(entry->data);
	free(entry->next);
	free(entry);
	return Sinlist;
}

void outputtofile(struct Sinlist *Sinlist, const char *file) {
	FILE *listf = fopen(file, "w");
	struct Sinlist *entry = Sinlist;

	if(listf == 0) {
		ERROR("File failed to open for Writing");
	} else {
		while(entry->next != 0) {
			fputs(entry->data, listf);
			entry = entry->next;
		}
	}	
}

void printlist(struct Sinlist *Sinlist) {
	struct Sinlist *entry = Sinlist;

	while(entry->next != 0) {
		printf("%s", entry->data);
		entry = entry->next;
	}
}

int ERROR(const char *msg) {
	fprintf(stderr, "ERROR: %s\n", msg);
	return 1;
}
