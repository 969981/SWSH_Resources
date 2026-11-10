/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cbb70; name: FUN_001cbb70
 */


void FUN_001cbb70(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*(uint *)(param_1 + 2);
  if (*(uint *)(param_1 + 2) != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1[1] + uVar4 * 8);
      if (lVar3 != 0) {
                    /* try { // try from 001cbba0 to 001cbbb3 has its CatchHandler @ 001cbc2c */
        plVar1 = (long *)FUN_00400d30();
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
        uVar2 = (ulong)*(uint *)(param_1 + 2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x14)) &&
      ((*(uint *)((long)param_1 + 0x14) & 0x7fffffff) != 0)) && (lVar3 = param_1[1], lVar3 != 0)) {
                    /* try { // try from 001cbbdc to 001cbbef has its CatchHandler @ 001cbc24 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  nn::os::FinalizeMutex((MutexType *)*param_1);
  lVar3 = *param_1;
  if (lVar3 != 0) {
                    /* try { // try from 001cbc00 to 001cbc13 has its CatchHandler @ 001cbc28 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  return;
}


