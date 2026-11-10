/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0018fcb0; name: FUN_0018fcb0
 */


void FUN_0018fcb0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02710f80 + 0x10);
  nn::os::FinalizeMutex((MutexType *)param_1[0x14]);
  lVar4 = param_1[0x14];
  if (lVar4 != 0) {
                    /* try { // try from 0018fce0 to 0018fcf3 has its CatchHandler @ 0018fd98 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4);
  }
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) &&
     ((*(uint *)((long)param_1 + 0x94) & 0x7fffffff) != 0)) {
    plVar2 = (long *)param_1[0x11];
    if (param_1 + 0xc == plVar2) {
      *(undefined1 *)(param_1 + 0x10) = 0;
      uVar1 = *(uint *)((long)param_1 + 0x5c);
      goto joined_r0x0018fd70;
    }
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 0018fd18 to 0018fd2b has its CatchHandler @ 0018fd94 */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,plVar2);
    }
  }
  uVar1 = *(uint *)((long)param_1 + 0x5c);
joined_r0x0018fd70:
  if ((-1 < (int)uVar1) && ((uVar1 & 0x7fffffff) != 0)) {
    plVar2 = (long *)param_1[10];
    if (param_1 + 5 == plVar2) {
      *(undefined1 *)(param_1 + 9) = 0;
      return;
    }
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 0018fd50 to 0018fd63 has its CatchHandler @ 0018fd90 */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,plVar2);
    }
  }
  return;
}


