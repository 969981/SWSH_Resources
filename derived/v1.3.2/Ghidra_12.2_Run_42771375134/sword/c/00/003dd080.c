/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dd080; name: FUN_003dd080
 */


void FUN_003dd080(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if (*(uint *)((long)param_1 + 0x54) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[9] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[8] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x54));
  }
  lVar4 = param_1[6];
  if (lVar4 != 0) {
                    /* try { // try from 003dd0d0 to 003dd0e3 has its CatchHandler @ 003dd180 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x2c)) &&
      ((*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) != 0)) && (lVar4 = param_1[4], lVar4 != 0)) {
                    /* try { // try from 003dd0fc to 003dd10f has its CatchHandler @ 003dd17c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1c)) &&
      ((*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) != 0)) && (lVar4 = param_1[2], lVar4 != 0)) {
                    /* try { // try from 003dd128 to 003dd13b has its CatchHandler @ 003dd178 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xc)) &&
      ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) != 0)) && (lVar4 = *param_1, lVar4 != 0)) {
                    /* try { // try from 003dd154 to 003dd167 has its CatchHandler @ 003dd174 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  return;
}


