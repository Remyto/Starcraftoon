#include <stdio.h>
#include <stdlib.h>

#include "Structures.h"

#define DEBUG 1

//return a new unit (Marine)
cell_unit* createMarines(){
    cell_unit* Newcell_unit = (cell_unit*) malloc(sizeof(cell_unit));
    Unit* Newunit = (Unit*) malloc(sizeof(Unit));
    Newcell_unit->unit = Newunit;
    Newcell_unit->next = NULL;


    //Characteristics of the marines
    Newunit->name = "Marine";
    Newunit->type = 1;
    Newunit->speed = 100;
    Newunit->train = 74;

    Newunit->weap = 1;
    Newunit->targ = 3;

    Newunit->pv = 100;
    Newunit->shld = 0;
    //Newunit->def
    Newunit->dmg = 15;
    Newunit->rate = 8;


    if (DEBUG){
        printf("-------------------------------\nGeneration Marines:\n");
        printf("name = %s\n", Newcell_unit->unit->name);
        printf("type = %d\n", Newcell_unit->unit->type);
        printf("speed = %d\n", Newcell_unit->unit->speed);
        printf("train = %d\n", Newcell_unit->unit->train);

        printf("weap = %d\n", Newcell_unit->unit->weap);
        printf("targ = %d\n", Newcell_unit->unit->targ);

        printf("pv = %d\n", Newcell_unit->unit->pv);
        printf("shld = %d\n", Newcell_unit->unit->shld);
        printf("dmg = %d\n", Newcell_unit->unit->dmg);
        printf("rate = %d\n-------------------------------\n", Newcell_unit->unit->rate);
    }
    return Newcell_unit;
}




int main()
{
    cell_unit* army = NULL;
    army = createMarines();





    return 0;
}
