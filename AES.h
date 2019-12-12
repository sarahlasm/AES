
#include <stdbool.h>

#define NK 4
#define NB 4
#define NR 10
#define WORDSIZE NB*(NR+1)

void cipher(uint8_t* input, uint8_t* output, uint32_t word[WORDSIZE]);
void subBytes(uint8_t* state, uint8_t* box);
void shiftRows(uint8_t* state, bool isInv);
void mixColumns(uint8_t* state);
void addRoundKey(uint8_t* state, uint8_t round);
