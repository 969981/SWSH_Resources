/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a58e0; name: FUN_010a58e0
 */


void FUN_010a58e0(long param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x119e0);
  if (*(int *)(param_1 + uVar4 * 8000 + 0x1ea4) == -1) {
    if (*(int *)(param_1 + uVar4 * 8000 + 4) == -1) {
      lVar3 = 0;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0xa4) == -1) {
      lVar3 = 1;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x144) == -1) {
      lVar3 = 2;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1e4) == -1) {
      lVar3 = 3;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x284) == -1) {
      lVar3 = 4;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x324) == -1) {
      lVar3 = 5;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x3c4) == -1) {
      lVar3 = 6;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x464) == -1) {
      lVar3 = 7;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x504) == -1) {
      lVar3 = 8;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x5a4) == -1) {
      lVar3 = 9;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x644) == -1) {
      lVar3 = 10;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x6e4) == -1) {
      lVar3 = 0xb;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x784) == -1) {
      lVar3 = 0xc;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x824) == -1) {
      lVar3 = 0xd;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x8c4) == -1) {
      lVar3 = 0xe;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x964) == -1) {
      lVar3 = 0xf;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0xa04) == -1) {
      lVar3 = 0x10;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0xaa4) == -1) {
      lVar3 = 0x11;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0xb44) == -1) {
      lVar3 = 0x12;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0xbe4) == -1) {
      lVar3 = 0x13;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0xc84) == -1) {
      lVar3 = 0x14;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0xd24) == -1) {
      lVar3 = 0x15;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0xdc4) == -1) {
      lVar3 = 0x16;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0xe64) == -1) {
      lVar3 = 0x17;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0xf04) == -1) {
      lVar3 = 0x18;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0xfa4) == -1) {
      lVar3 = 0x19;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1044) == -1) {
      lVar3 = 0x1a;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x10e4) == -1) {
      lVar3 = 0x1b;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1184) == -1) {
      lVar3 = 0x1c;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1224) == -1) {
      lVar3 = 0x1d;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x12c4) == -1) {
      lVar3 = 0x1e;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1364) == -1) {
      lVar3 = 0x1f;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1404) == -1) {
      lVar3 = 0x20;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x14a4) == -1) {
      lVar3 = 0x21;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1544) == -1) {
      lVar3 = 0x22;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x15e4) == -1) {
      lVar3 = 0x23;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1684) == -1) {
      lVar3 = 0x24;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1724) == -1) {
      lVar3 = 0x25;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x17c4) == -1) {
      lVar3 = 0x26;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1864) == -1) {
      lVar3 = 0x27;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1904) == -1) {
      lVar3 = 0x28;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x19a4) == -1) {
      lVar3 = 0x29;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1a44) == -1) {
      lVar3 = 0x2a;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1ae4) == -1) {
      lVar3 = 0x2b;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1b84) == -1) {
      lVar3 = 0x2c;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1c24) == -1) {
      lVar3 = 0x2d;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1cc4) == -1) {
      lVar3 = 0x2e;
    }
    else if (*(int *)(param_1 + uVar4 * 8000 + 0x1d64) == -1) {
      lVar3 = 0x2f;
    }
    else {
      lVar3 = 0x30;
      if (*(int *)(param_1 + uVar4 * 8000 + 0x1e04) != -1) {
        lVar3 = 0x31;
      }
    }
  }
  else {
    __dest = (void *)(param_1 + uVar4 * 8000);
    memcpy(__dest,(void *)((long)__dest + 0xa0),0x9a);
    memcpy((void *)((long)__dest + 0xa0),(void *)((long)__dest + 0x140),0x9a);
    memcpy((void *)((long)__dest + 0x140),(void *)((long)__dest + 0x1e0),0x9a);
    memcpy((void *)((long)__dest + 0x1e0),(void *)((long)__dest + 0x280),0x9a);
    memcpy((void *)((long)__dest + 0x280),(void *)((long)__dest + 800),0x9a);
    memcpy((void *)((long)__dest + 800),(void *)((long)__dest + 0x3c0),0x9a);
    memcpy((void *)((long)__dest + 0x3c0),(void *)((long)__dest + 0x460),0x9a);
    memcpy((void *)((long)__dest + 0x460),(void *)((long)__dest + 0x500),0x9a);
    memcpy((void *)((long)__dest + 0x500),(void *)((long)__dest + 0x5a0),0x9a);
    memcpy((void *)((long)__dest + 0x5a0),(void *)((long)__dest + 0x640),0x9a);
    memcpy((void *)((long)__dest + 0x640),(void *)((long)__dest + 0x6e0),0x9a);
    memcpy((void *)((long)__dest + 0x6e0),(void *)((long)__dest + 0x780),0x9a);
    memcpy((void *)((long)__dest + 0x780),(void *)((long)__dest + 0x820),0x9a);
    memcpy((void *)((long)__dest + 0x820),(void *)((long)__dest + 0x8c0),0x9a);
    memcpy((void *)((long)__dest + 0x8c0),(void *)((long)__dest + 0x960),0x9a);
    memcpy((void *)((long)__dest + 0x960),(void *)((long)__dest + 0xa00),0x9a);
    memcpy((void *)((long)__dest + 0xa00),(void *)((long)__dest + 0xaa0),0x9a);
    memcpy((void *)((long)__dest + 0xaa0),(void *)((long)__dest + 0xb40),0x9a);
    memcpy((void *)((long)__dest + 0xb40),(void *)((long)__dest + 0xbe0),0x9a);
    memcpy((void *)((long)__dest + 0xbe0),(void *)((long)__dest + 0xc80),0x9a);
    memcpy((void *)((long)__dest + 0xc80),(void *)((long)__dest + 0xd20),0x9a);
    memcpy((void *)((long)__dest + 0xd20),(void *)((long)__dest + 0xdc0),0x9a);
    memcpy((void *)((long)__dest + 0xdc0),(void *)((long)__dest + 0xe60),0x9a);
    memcpy((void *)((long)__dest + 0xe60),(void *)((long)__dest + 0xf00),0x9a);
    memcpy((void *)((long)__dest + 0xf00),(void *)((long)__dest + 4000),0x9a);
    memcpy((void *)((long)__dest + 4000),(void *)((long)__dest + 0x1040),0x9a);
    memcpy((void *)((long)__dest + 0x1040),(void *)((long)__dest + 0x10e0),0x9a);
    memcpy((void *)((long)__dest + 0x10e0),(void *)((long)__dest + 0x1180),0x9a);
    memcpy((void *)((long)__dest + 0x1180),(void *)((long)__dest + 0x1220),0x9a);
    memcpy((void *)((long)__dest + 0x1220),(void *)((long)__dest + 0x12c0),0x9a);
    memcpy((void *)((long)__dest + 0x12c0),(void *)((long)__dest + 0x1360),0x9a);
    memcpy((void *)((long)__dest + 0x1360),(void *)((long)__dest + 0x1400),0x9a);
    memcpy((void *)((long)__dest + 0x1400),(void *)((long)__dest + 0x14a0),0x9a);
    memcpy((void *)((long)__dest + 0x14a0),(void *)((long)__dest + 0x1540),0x9a);
    memcpy((void *)((long)__dest + 0x1540),(void *)((long)__dest + 0x15e0),0x9a);
    memcpy((void *)((long)__dest + 0x15e0),(void *)((long)__dest + 0x1680),0x9a);
    memcpy((void *)((long)__dest + 0x1680),(void *)((long)__dest + 0x1720),0x9a);
    memcpy((void *)((long)__dest + 0x1720),(void *)((long)__dest + 0x17c0),0x9a);
    memcpy((void *)((long)__dest + 0x17c0),(void *)((long)__dest + 0x1860),0x9a);
    memcpy((void *)((long)__dest + 0x1860),(void *)((long)__dest + 0x1900),0x9a);
    memcpy((void *)((long)__dest + 0x1900),(void *)((long)__dest + 0x19a0),0x9a);
    memcpy((void *)((long)__dest + 0x19a0),(void *)((long)__dest + 0x1a40),0x9a);
    memcpy((void *)((long)__dest + 0x1a40),(void *)((long)__dest + 0x1ae0),0x9a);
    memcpy((void *)((long)__dest + 0x1ae0),(void *)((long)__dest + 0x1b80),0x9a);
    memcpy((void *)((long)__dest + 0x1b80),(void *)((long)__dest + 0x1c20),0x9a);
    memcpy((void *)((long)__dest + 0x1c20),(void *)((long)__dest + 0x1cc0),0x9a);
    memcpy((void *)((long)__dest + 0x1cc0),(void *)((long)__dest + 0x1d60),0x9a);
    memcpy((void *)((long)__dest + 0x1d60),(void *)((long)__dest + 0x1e00),0x9a);
    memcpy((void *)((long)__dest + 0x1e00),(void *)((long)__dest + 0x1ea0),0x9a);
    lVar3 = 0x31;
  }
  memcpy((void *)(param_1 + uVar4 * 8000 + lVar3 * 0xa0),param_2,0x9a);
  uVar2 = *(uint *)(param_1 + 0x119e4);
  if (*(uint *)(param_1 + 0x119e0) == 0) {
    uVar2 = uVar2 + 1;
  }
  else if (uVar2 < 0x33) {
    return;
  }
  uVar1 = 0x32;
  if (uVar2 < 0x33) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x119e4) = uVar1;
  return;
}


