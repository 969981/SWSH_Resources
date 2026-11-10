/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b3420; name: FUN_001b3420
 */


void FUN_001b3420(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint local_24;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0xb8));
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar2 = 0;
    do {
                    /* try { // try from 001b3454 to 001b345b has its CatchHandler @ 001b34f0 */
      FUN_001fc810(*(undefined8 *)(*(long *)(param_1 + 8) + uVar2 * 8),param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
  }
  uVar1 = *(uint *)(param_2 + 0x48);
  if (uVar1 != 0xffffffff) {
    *(undefined8 *)(*(long *)(param_1 + 0x50) + (ulong)uVar1 * 8) = 0;
    local_24 = uVar1;
    if (*(int *)(param_1 + 0x38) - 1U == uVar1) {
      *(uint *)(param_1 + 0x38) = uVar1;
    }
    else if (*(uint *)(param_1 + 0x48) < (*(uint *)(param_1 + 0x4c) & 0x7fffffff)) {
      *(uint *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(param_1 + 0x48) * 4) = uVar1;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
    else {
                    /* try { // try from 001b34c8 to 001b34cf has its CatchHandler @ 001b34e8 */
      FUN_001b4230(param_1 + 0x40,&local_24);
    }
  }
                    /* try { // try from 001b34d4 to 001b34d7 has its CatchHandler @ 001b34ec */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0xb8));
  return;
}


