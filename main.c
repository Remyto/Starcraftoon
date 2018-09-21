#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Structures.h"

#define DEBUG 1

//return a new unit (Marine)
Cell_unit* createMarines(){
    Cell_unit* newcell_unit = (Cell_unit*) malloc(sizeof(Cell_unit));
    Unit* newunit = (Unit*) malloc(sizeof(Unit));
    newcell_unit->unit = newunit;
    newcell_unit->next = NULL;


    //Characteristics of the marines
    newunit->name = "Marine";
    newunit->type = 1;
    newunit->speed = 100;
    newunit->train = 74;

    newunit->weap = 1;
    newunit->targ = 3;

    newunit->pv = 100;
    //newunit->shld = 0;
    newunit->def = 1;
    newunit->dmg = 15;
    newunit->rate = 8;


    if (DEBUG){
        printf("-------------------------------\nGeneration Marines:\n");
        printf("name = %s\n", newcell_unit->unit->name);
        printf("type = %d\n", newcell_unit->unit->type);
        printf("speed = %d\n", newcell_unit->unit->speed);
        printf("train = %d\n", newcell_unit->unit->train);

        printf("weap = %d\n", newcell_unit->unit->weap);
        printf("targ = %d\n", newcell_unit->unit->targ);

        printf("pv = %d\n", newcell_unit->unit->pv);
        printf("shld = %d\n", newcell_unit->unit->shld);
        printf("dmg = %d\n", newcell_unit->unit->dmg);
        printf("rate = %d\n-------------------------------\n", newcell_unit->unit->rate);
    }
    return newcell_unit;
}

void printlist(Cell_unit* actualcell){
    while(actualcell != NULL){
        printf("%s\n", actualcell->unit->name);
        actualcell = actualcell->next;
    }
}


int main()
{

    Cell_unit* start_list_units = NULL;
    start_list_units = createMarines();

    //print all units
    printlist(start_list_units);


    return 0;
}








