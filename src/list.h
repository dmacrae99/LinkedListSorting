#ifndef LIST_H
#define LIST_H

struct Sinlist {
	struct Sinlist *next;
	char *data;
};
void printlist(struct Sinlist *Sinlist);
struct Sinlist *readfile_Sinlist(const char *file);
void outputtofile(struct Sinlist *Sinlist, const char *file);
int ERROR(const char *msg);

#endif
