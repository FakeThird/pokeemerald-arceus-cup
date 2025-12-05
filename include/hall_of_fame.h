#ifndef GUARD_HALL_OF_FAME_H
#define GUARD_HALL_OF_FAME_H


struct HallofFameMon
{
    // Editing
    u32 tid;
    u32 item_held;
    u32 personality;
    u16 isShiny:1;
    u16 species:15;
    u16 ability;
    u8 lvl;
    u8 nickname[POKEMON_NAME_LENGTH];


    
    // u32 first_move;
    // u32 second_move;
    // u32 third_move;
    // u32 fourth_move;


};

struct HallofFameTeam
{
    struct HallofFameMon mon[PARTY_SIZE];
};

extern struct HallofFameTeam *gHoFSaveBuffer;

void CB2_DoHallOfFameScreen(void);
void CB2_DoHallOfFameScreenDontSaveData(void);
void CB2_DoHallOfFamePC(void);
void CB2_DoShowChampionPokemons(void);

// hof_pc.c
void ReturnFromHallOfFamePC(void);

#endif // GUARD_HALL_OF_FAME_H
