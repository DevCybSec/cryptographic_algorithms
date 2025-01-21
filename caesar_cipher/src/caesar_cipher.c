//
// Created by Edgar Macias on 1/21/2025.
//
#include "caesar_cipher.h"

unsigned char caesarShift(unsigned char c,int key){
  // We add 256 before modulo to handle negative values correctly in C.
  // (c + key) might be negative if key is negative (as in decryption).
  return (unsigned char)((c + key + 256) % 256);
}
