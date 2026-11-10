/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f5d40; name: FUN_002f5d40
 */


void FUN_002f5d40(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if (*(uint *)((long)param_1 + 0x24) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[3] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[2] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x24));
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 002f5d8c to 002f5d9f has its CatchHandler @ 002f5dac */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  return;
}


