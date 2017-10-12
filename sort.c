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


//One Implementation of the bubble sort algorithm.
struct Sinlist *bubble_Sinlist(struct Sinlist *Sinlist) {
	struct Sinlist *entry = malloc(sizeof(struct Sinlist));
	entry = Sinlist;
	char *temp = malloc(100*sizeof(char));
	
	while(entry->next != NULL) {

		if (strcmp(entry->data, entry->next->data) < 0) {
			//Swap the values
			strcpy(temp, entry->data);
			strcpy(entry->data, entry->next->data);
			strcpy(entry->next->data, temp);

		}
		entry = entry->next;

	}
	return Sinlist;

}



	

