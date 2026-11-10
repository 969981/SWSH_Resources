/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029ae90; name: FUN_0029ae90
 */


void FUN_0029ae90(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02711f60 + 0x10);
  if (((-1 < (int)*(uint *)((long)param_1 + 0xc4)) &&
      ((*(uint *)((long)param_1 + 0xc4) & 0x7fffffff) != 0)) && (lVar4 = param_1[0x17], lVar4 != 0))
  {
                    /* try { // try from 0029aec8 to 0029aedb has its CatchHandler @ 0029b008 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)((long)param_1 + 0xa4) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[0x13] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[0x12] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0xa4));
  }
  lVar4 = param_1[0x10];
  if (lVar4 != 0) {
                    /* try { // try from 0029af1c to 0029af2f has its CatchHandler @ 0029b018 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)((long)param_1 + 0x6c) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[0xc] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[0xb] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x6c));
  }
  lVar4 = param_1[9];
  if (lVar4 != 0) {
                    /* try { // try from 0029af70 to 0029af83 has its CatchHandler @ 0029b014 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)((long)param_1 + 0x34) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[5] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[4] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x34));
  }
  lVar4 = param_1[2];
  if (lVar4 != 0) {
                    /* try { // try from 0029afc4 to 0029afd7 has its CatchHandler @ 0029b010 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  nn::os::FinalizeMutex((MutexType *)param_1[1]);
  lVar4 = param_1[1];
  if (lVar4 != 0) {
                    /* try { // try from 0029afe8 to 0029affb has its CatchHandler @ 0029b00c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  return;
}


