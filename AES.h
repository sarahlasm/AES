
#include <stdbool.h>

#define NK 4
#define NB 4
#define NR 10
#define WORDSIZE NB*(NR+1)

void cipher(uint8_t* input, uint8_t* output);
void subBytes(uint8_t* state);
void invSubBytes(uint8_t* state);
void shiftRows(uint8_t* state, bool isInv);
void mixColumns(uint8_t* state, bool isInv);
void addRoundKey(uint8_t* state, uint8_t round);
uint8_t multGF(uint8_t a, uint8_t b);
uint32_t subWord(uint32_t temp);
uint32_t rotWord(uint32_t temp);
void keyExpansion(uint8_t* key);
