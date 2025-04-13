#ifndef BITLIB_H_
#define BITLIB_H_

#include <stdint.h>


extern void decompose_into_bytes(uint16_t val, uint8_t* byte_hi, uint8_t* byte_lo);


extern int last_two_bits(int val);

#endif
