/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d0750; name: FUN_002d0750
 */


void FUN_002d0750(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02712048 + 0x10);
  if (*(uint *)((long)param_1 + 100) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[0xb] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[10] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 100));
  }
  lVar4 = param_1[8];
  if (lVar4 != 0) {
                    /* try { // try from 002d07b0 to 002d07c3 has its CatchHandler @ 002d0828 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)((long)param_1 + 0x2c) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[4] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[3] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x2c));
  }
  lVar4 = param_1[1];
  if (lVar4 != 0) {
                    /* try { // try from 002d0804 to 002d0817 has its CatchHandler @ 002d0824 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  return;
}


