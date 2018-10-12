#ifndef CREATEMARINES()_H_INCLUDED
#define CREATEMARINES()_H_INCLUDED

#define DEBUG 0

//return a new unit (Marine)
cell_unit* createMarine(){
    cell_unit* newcell_unit = (cell_unit*) malloc(sizeof(cell_unit));
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
    newunit->shld = 0;
    //newunit->def
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



#endif // CREATEMARINES()_H_INCLUDED
