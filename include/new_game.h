#ifndef GUARD_NEW_GAME_H
#define GUARD_NEW_GAME_H

extern bool8 gDifferentSaveFile;
// Shortcuts some randomness in berry_blender.c, and enables debug printing
// in contest.c.
extern bool8 gEnableContestDebugging;

void SetTrainerId(u32 trainerId, u8 *dst);
u32 GetTrainerId(u8 *trainerId);
void CopyTrainerId(u8 *dst, u8 *src);
void NewGameInitData(void);

// Edit
extern struct Pokemon gTempParty[PARTY_SIZE];
extern struct Pokemon gShowParty[PARTY_SIZE];

void ChooseNewChampion(void);
void SavePokemonTeam(void);
void RetrievePokemonTeam(void);

void ResetMenuAndMonGlobals(void);
void Sav2_ClearSetDefault(void);

#endif // GUARD_NEW_GAME_H
