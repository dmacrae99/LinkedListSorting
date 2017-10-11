#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct Sinlist *readfile_Sinlist(char *file) {
	struct Sinlist *root = malloc(sizeof(struct Sinlist));
	struct Sinlist *entry = malloc(sizeof(struct Sinlist));
	size_t entrysize = 100;
	
	root->next = malloc(sizeof(struct Sinlist));
	root->next = entry;
	entry = root;

	FILE *listf = fopen(file, "r");

	if(listf == NULL) {
		ERROR("File Failed to Open");
	} else {
		while(!feof(listf)) {
			entry->data = malloc(entrysize*sizeof(char));
			getline(&entry->data, &entrysize, listf);
			entry->next = malloc(sizeof(struct Sinlist));
			entry = entry->next;
		}
	fclose(listf);
	}
	return root;
}

int ERROR(const char *msg) {
	fprintf(stderr, "ERROR: %s\n", msg);
	return 1;
}
