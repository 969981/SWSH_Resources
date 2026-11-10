/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a93c0; name: FUN_003a93c0
 */


uint FUN_003a93c0(float param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined1 auStack_50 [32];
  
  FUN_003ff510(auStack_50);
                    /* try { // try from 003a93e8 to 003a93eb has its CatchHandler @ 003a9610 */
  fVar3 = ceilf(param_1 / param_2);
  uVar1 = (int)fVar3 - 1U | (int)fVar3 - 1U >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 0x10;
  uVar2 = 4;
  if (4 < uVar1 + 1) {
    uVar2 = uVar1 + 1;
  }
  if (uVar2 < 2) {
    uVar2 = 0;
  }
  else if (uVar2 < 8) {
    uVar2 = 2;
  }
  else if (uVar2 < 0x10) {
    uVar2 = 3;
  }
  else if (uVar2 < 0x20) {
    uVar2 = 4;
  }
  else if (uVar2 < 0x40) {
    uVar2 = 5;
  }
  else if (uVar2 < 0x80) {
    uVar2 = 6;
  }
  else if (uVar2 < 0x100) {
    uVar2 = 7;
  }
  else if (uVar2 < 0x200) {
    uVar2 = 8;
  }
  else if (uVar2 < 0x400) {
    uVar2 = 9;
  }
  else if (uVar2 < 0x800) {
    uVar2 = 10;
  }
  else if (uVar2 < 0x1000) {
    uVar2 = 0xb;
  }
  else if (uVar2 < 0x2000) {
    uVar2 = 0xc;
  }
  else if (uVar2 < 0x4000) {
    uVar2 = 0xd;
  }
  else if (uVar2 < 0x8000) {
    uVar2 = 0xe;
  }
  else if (uVar2 < 0x10000) {
    uVar2 = 0xf;
  }
  else if (uVar2 < 0x20000) {
    uVar2 = 0x10;
  }
  else if (uVar2 < 0x40000) {
    uVar2 = 0x11;
  }
  else if (uVar2 < 0x80000) {
    uVar2 = 0x12;
  }
  else if (uVar2 < 0x100000) {
    uVar2 = 0x13;
  }
  else if (uVar2 < 0x200000) {
    uVar2 = 0x14;
  }
  else if (uVar2 < 0x400000) {
    uVar2 = 0x15;
  }
  else if (uVar2 < 0x800000) {
    uVar2 = 0x16;
  }
  else if (uVar2 >> 0x18 == 0) {
    uVar2 = 0x17;
  }
  else if (uVar2 >> 0x19 == 0) {
    uVar2 = 0x18;
  }
  else if (uVar2 >> 0x1a == 0) {
    uVar2 = 0x19;
  }
  else if (uVar2 >> 0x1b == 0) {
    uVar2 = 0x1a;
  }
  else if (uVar2 >> 0x1c == 0) {
    uVar2 = 0x1b;
  }
  else if (uVar2 >> 0x1d == 0) {
    uVar2 = 0x1c;
  }
  else if (uVar2 >> 0x1e == 0) {
    uVar2 = 0x1d;
  }
  else {
    uVar2 = uVar2 >> 0x1f | 0x1e;
  }
  FUN_003ff530(auStack_50);
  return uVar2;
}


