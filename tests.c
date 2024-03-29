#include <stdio.h>
#include "AES.h"

int main()
{
  uint8_t state[16] = {
    0x00, 0xad, 0xbe, 0xef,
    0xab, 0x5a, 0x30, 0xfd,
    0xac, 0x31, 0xee, 0xa2,
    0xe0, 0x37, 0x07, 0x34
  };
  uint8_t cipherKey[16] = {
    0x2b, 0x7e, 0x15, 0x16,
    0x28, 0xae, 0xd2, 0xa6,
    0xab, 0xf7, 0x15, 0x88,
    0x09, 0xcf, 0x4f, 0x3c
  };

  keyExpansion(cipherKey);
  uint8_t out1[16];
  uint8_t out2[16];

  printf("Initial values:\n");
  for (int i = 0; i < 16; ++i)
  {
    printf("%x ", state[i]);
    if ((i+1)%4 == 0) printf("\n");
  }

  cipher(state, out1);

  printf("\nPost encryption:\n");
  for (int i = 0; i < 16; ++i)
  {
    printf("%x ", out1[i]);
    if ((i+1)%4 == 0) printf("\n");
  }

  invCipher(out1, out2);

  printf("\nPost decryption:\n");
  for (int i = 0; i < 16; ++i)
  {
    printf("%x ", out2[i]);
    if ((i+1)%4 == 0) printf("\n");
  }
}
