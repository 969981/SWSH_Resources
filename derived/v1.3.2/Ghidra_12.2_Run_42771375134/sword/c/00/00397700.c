/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00397700; name: FUN_00397700
 */


void FUN_00397700(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)param_1[9];
  if (plVar2 != (long *)0x0) {
    if (((-1 < (int)*(uint *)((long)plVar2 + 0xc)) &&
        ((*(uint *)((long)plVar2 + 0xc) & 0x7fffffff) != 0)) && (lVar3 = *plVar2, lVar3 != 0)) {
                    /* try { // try from 00397738 to 0039774b has its CatchHandler @ 00397800 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
    }
                    /* try { // try from 0039774c to 0039775f has its CatchHandler @ 00397808 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar2);
  }
  lVar3 = param_1[7];
  param_1[9] = 0;
  if (lVar3 != 0) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  lVar3 = param_1[2];
  param_1[7] = 0;
  if (lVar3 != 0) {
                    /* try { // try from 0039778c to 0039779f has its CatchHandler @ 00397804 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3 + -8);
  }
  param_1[2] = 0;
  FUN_003994e0(param_1 + 3);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    memset((void *)param_1[10],0,(ulong)(uint)((int)param_1[0xb] << 2));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


