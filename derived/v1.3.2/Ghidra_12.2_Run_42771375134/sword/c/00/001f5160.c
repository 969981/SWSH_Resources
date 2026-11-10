/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f5160; name: FUN_001f5160
 */


void FUN_001f5160(long param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if (((-1 < (int)*(uint *)(param_1 + 0x2414)) && ((*(uint *)(param_1 + 0x2414) & 0x7fffffff) != 0))
     && (lVar4 = *(long *)(param_1 + 0x2408), lVar4 != 0)) {
                    /* try { // try from 001f5188 to 001f519b has its CatchHandler @ 001f5590 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)(param_1 + 0x21fc) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x21f0) + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x21e8) + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x21fc));
  }
  lVar4 = *(long *)(param_1 + 0x21d8);
  if (lVar4 != 0) {
                    /* try { // try from 001f51dc to 001f51ef has its CatchHandler @ 001f55b8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)(param_1 + 0x21c4) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x21b8) + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x21b0) + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x21c4));
  }
  lVar4 = *(long *)(param_1 + 0x21a0);
  if (lVar4 != 0) {
                    /* try { // try from 001f5230 to 001f5243 has its CatchHandler @ 001f55b4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)(param_1 + 0x218c) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x2180) + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x2178) + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x218c));
  }
  lVar4 = *(long *)(param_1 + 0x2168);
  if (lVar4 != 0) {
                    /* try { // try from 001f5284 to 001f5297 has its CatchHandler @ 001f55b0 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)(param_1 + 0x2154) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x2148) + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x2140) + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x2154));
  }
  lVar4 = *(long *)(param_1 + 0x2130);
  if (lVar4 != 0) {
                    /* try { // try from 001f52d8 to 001f52eb has its CatchHandler @ 001f55ac */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)(param_1 + 0x211c) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x2110) + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x2108) + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x211c));
  }
  lVar4 = *(long *)(param_1 + 0x20f8);
  if (lVar4 != 0) {
                    /* try { // try from 001f532c to 001f533f has its CatchHandler @ 001f55a8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)(param_1 + 0x20e4) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x20d8) + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x20d0) + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x20e4));
  }
  lVar4 = *(long *)(param_1 + 0x20c0);
  if (lVar4 != 0) {
                    /* try { // try from 001f5380 to 001f5393 has its CatchHandler @ 001f55a4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)(param_1 + 0x20ac) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x20a0) + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x2098) + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x20ac));
  }
  lVar4 = *(long *)(param_1 + 0x2088);
  if (lVar4 != 0) {
                    /* try { // try from 001f53d4 to 001f53e7 has its CatchHandler @ 001f55a0 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)(param_1 + 0x2074) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x2068) + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x2060) + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x2074));
  }
  lVar4 = *(long *)(param_1 + 0x2050);
  if (lVar4 != 0) {
                    /* try { // try from 001f5428 to 001f543b has its CatchHandler @ 001f559c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x204c)) && ((*(uint *)(param_1 + 0x204c) & 0x7fffffff) != 0))
     && (lVar4 = *(long *)(param_1 + 0x2040), lVar4 != 0)) {
                    /* try { // try from 001f5454 to 001f5467 has its CatchHandler @ 001f558c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x203c)) && ((*(uint *)(param_1 + 0x203c) & 0x7fffffff) != 0))
     && (lVar4 = *(long *)(param_1 + 0x2030), lVar4 != 0)) {
                    /* try { // try from 001f5480 to 001f5493 has its CatchHandler @ 001f5588 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x202c)) && ((*(uint *)(param_1 + 0x202c) & 0x7fffffff) != 0))
     && (lVar4 = *(long *)(param_1 + 0x2020), lVar4 != 0)) {
                    /* try { // try from 001f54ac to 001f54bf has its CatchHandler @ 001f5584 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)(param_1 + 0x200c) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x2000) + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x1ff8) + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x200c));
  }
  lVar4 = *(long *)(param_1 + 0x1fe8);
  if (lVar4 != 0) {
                    /* try { // try from 001f5500 to 001f5513 has its CatchHandler @ 001f5598 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001cbb70(param_1 + 0x1fc0);
  nn::os::FinalizeMutex(*(MutexType **)(param_1 + 0x1fb0));
  lVar4 = *(long *)(param_1 + 0x1fb0);
  if (lVar4 != 0) {
                    /* try { // try from 001f5530 to 001f5543 has its CatchHandler @ 001f5594 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x1fac)) && ((*(uint *)(param_1 + 0x1fac) & 0x7fffffff) != 0))
     && (lVar4 = *(long *)(param_1 + 0x1fa0), lVar4 != 0)) {
                    /* try { // try from 001f555c to 001f556f has its CatchHandler @ 001f5580 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001cbc50(param_1 + 0x10);
  return;
}


