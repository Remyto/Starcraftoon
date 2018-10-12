#include <stdio.h>
#include <stdlib.h>

#include "Structures.h"
#include "createMarine().h"

#define DEBUG 0



int main()
{
    cell_unit* list_units = NULL;
    cell_unit* start_list_units = list_units;


    list_units = createMarine();
    list_units->next = createMarine();
    list_units->next->next = createMarine();


    //print all units
    while(list_units != NULL){
        printf("\n\t%s", (list_units->unit)->name);
        list_units = list_units->next;
    }


    return 0;
}
