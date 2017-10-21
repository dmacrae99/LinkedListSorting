/* Has the Implementation of sorting a singular linked list using Bubble
 * Sort
 *
 * Copyright (C) 2017 Damien MacRae
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sort.h"
#include "list.h"

void Swap_Values(char *data1, char *data2) {
	char *temp = malloc(100*sizeof(char));

	strcpy(temp, data1);
	strcpy(data1, data2);
	strcpy(data2, temp);

	free(temp);
}

struct Sinlist *bubble_Sinlist(struct Sinlist *Sinlist) {
	struct Sinlist *entry;
	int count;

	do {
		entry = Sinlist;
		count = 0;
		
		while(entry->next->next != 0) {
			if (strcmp(entry->data, entry->next->data) > 0) {
				Swap_Values(entry->data, entry->next->data);
				count++;
			}
			entry = entry->next;
		}

	} while(count != 0);

	free(entry);
	return Sinlist;
}



	

