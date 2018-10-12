#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED



typedef struct unit{
    char *name;      //name of unit
    int type;        //1=ground, 2=aerial, 3=booth
    int speed;       //in %
    int train;       //training time in s

    int weap;       //0=NULL, 1=blast, 2=splash, -1=heal
    int targ;       //1=ground, 2=aerial, 3=booth

    int pv;
    int shld;        //point of shield
    int def;         //damage reduction for a certain weapon(s)
    int dmg;
    int rate;        //rate of fire /s
}Unit;


typedef struct building{
    char *name;
    int type;
    int weap;       //0=NULL, 1=blast, 2=splash, -1=heal
    int targ;       //1=ground, 2=aerial, 3=booth

    int pv;
<<<<<<< HEAD
    int shld;        //point of shield
=======
    //int shld;        //point of shield
>>>>>>> c6f9fb30213a41318860b4915244ba61fc858909
    int def;          //damage reduction for a certain weapon(s)
    int dmg;


}Building;


typedef struct cell_unit{
    Unit* unit;
    struct cell_unit* next;
}Cell_unit;



#endif // STRUCTURES_H_INCLUDED
