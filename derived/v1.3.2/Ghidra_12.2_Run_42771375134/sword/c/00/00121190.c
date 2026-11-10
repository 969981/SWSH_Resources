/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00121190; name: FUN_00121190
 */


void FUN_00121190(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  nn::os::FinalizeMutex((MutexType *)param_1[0x3a]);
  lVar5 = param_1[0x3a];
  if (lVar5 != 0) {
                    /* try { // try from 001211b0 to 001211c3 has its CatchHandler @ 0012135c */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1a4)) &&
      ((*(uint *)((long)param_1 + 0x1a4) & 0x7fffffff) != 0)) && (lVar5 = param_1[0x33], lVar5 != 0)
     ) {
                    /* try { // try from 001211dc to 001211ef has its CatchHandler @ 00121354 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x194)) &&
      ((*(uint *)((long)param_1 + 0x194) & 0x7fffffff) != 0)) && (lVar5 = param_1[0x31], lVar5 != 0)
     ) {
                    /* try { // try from 00121208 to 0012121b has its CatchHandler @ 00121350 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  FUN_00120f10(param_1 + 0x2e);
  if (*(uint *)((long)param_1 + 0x15c) != 0) {
    uVar3 = 0;
    do {
      uVar4 = *(uint *)(param_1[0x2a] + uVar3 * 4);
      if (uVar4 != 0xffffffff) {
        do {
          uVar4 = *(uint *)(param_1[0x29] + (ulong)uVar4 * 4);
        } while (uVar4 != 0xffffffff);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != *(uint *)((long)param_1 + 0x15c));
  }
  lVar5 = param_1[0x27];
  if (lVar5 != 0) {
                    /* try { // try from 00121264 to 00121277 has its CatchHandler @ 00121358 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x134)) &&
      ((*(uint *)((long)param_1 + 0x134) & 0x7fffffff) != 0)) && (lVar5 = param_1[0x25], lVar5 != 0)
     ) {
                    /* try { // try from 00121290 to 001212a3 has its CatchHandler @ 0012134c */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x124)) &&
      ((*(uint *)((long)param_1 + 0x124) & 0x7fffffff) != 0)) && (lVar5 = param_1[0x23], lVar5 != 0)
     ) {
                    /* try { // try from 001212bc to 001212cf has its CatchHandler @ 00121348 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x114)) &&
      ((*(uint *)((long)param_1 + 0x114) & 0x7fffffff) != 0)) && (lVar5 = param_1[0x21], lVar5 != 0)
     ) {
                    /* try { // try from 001212e8 to 001212fb has its CatchHandler @ 00121344 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  FUN_00120fb0(param_1 + 0x1e);
  FUN_00121050(param_1 + 0x1b);
  FUN_001210f0(param_1 + 0x18);
  param_1[0x10] = 0;
  puVar1 = PTR_DAT_02710c20;
  param_1[9] = 0;
  param_1[2] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0xe] = (long)puVar1;
  param_1[7] = (long)puVar1;
  *param_1 = (long)puVar1;
  return;
}


