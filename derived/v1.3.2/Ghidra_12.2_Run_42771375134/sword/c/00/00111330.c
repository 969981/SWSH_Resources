/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00111330; name: FUN_00111330
 */


void FUN_00111330(long *param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
                    /* try { // try from 00111358 to 0011141f has its CatchHandler @ 00111670 */
  FUN_00112130(param_1,param_1 + (ulong)(1 - *(int *)((long)param_1 + 0xac)) * 2 + 7,0);
  uVar2 = *(uint *)((long)param_1 + 0xac);
  *(uint *)((long)param_1 + 0xac) = 1 - uVar2;
  FUN_00112130(param_1,param_1 + (ulong)uVar2 * 2 + 7,0);
  *(int *)((long)param_1 + 0xac) = 1 - *(int *)((long)param_1 + 0xac);
  FUN_00112130(param_1,param_1 + (ulong)(1 - (int)param_1[0x15]) * 2 + 0xb,0);
  uVar2 = *(uint *)(param_1 + 0x15);
  *(uint *)(param_1 + 0x15) = 1 - uVar2;
  FUN_00112130(param_1,param_1 + (ulong)uVar2 * 2 + 0xb,0);
  *(int *)(param_1 + 0x15) = 1 - (int)param_1[0x15];
  FUN_001118e0(param_1);
  FUN_00112130(param_1,param_1 + (ulong)(1 - *(int *)((long)param_1 + 0xb4)) * 2 + 3,0);
  uVar2 = *(uint *)((long)param_1 + 0xb4);
  *(uint *)((long)param_1 + 0xb4) = 1 - uVar2;
  FUN_00112130(param_1,param_1 + (ulong)uVar2 * 2 + 3,0);
  *(int *)((long)param_1 + 0xb4) = 1 - *(int *)((long)param_1 + 0xb4);
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar3 = (ulong)uVar2;
  while (uVar2 != 0) {
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulong)uVar2;
    lVar4 = *(long *)(param_1[0x13] + uVar3 * 8);
    *(uint *)(param_1 + 0x14) = uVar2;
    if (lVar4 != 0) {
                    /* try { // try from 00111448 to 0011145b has its CatchHandler @ 00111680 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
      uVar3 = (ulong)*(uint *)(param_1 + 0x14);
    }
    uVar2 = (uint)uVar3;
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xa4)) &&
      ((*(uint *)((long)param_1 + 0xa4) & 0x7fffffff) != 0)) && (lVar4 = param_1[0x13], lVar4 != 0))
  {
                    /* try { // try from 0011147c to 0011148f has its CatchHandler @ 0011165c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x94)) &&
      ((*(uint *)((long)param_1 + 0x94) & 0x7fffffff) != 0)) && (lVar4 = param_1[0x11], lVar4 != 0))
  {
                    /* try { // try from 001114a8 to 001114bb has its CatchHandler @ 00111658 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x84)) &&
      ((*(uint *)((long)param_1 + 0x84) & 0x7fffffff) != 0)) && (lVar4 = param_1[0xf], lVar4 != 0))
  {
                    /* try { // try from 001114d4 to 001114e7 has its CatchHandler @ 00111654 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x74)) &&
      ((*(uint *)((long)param_1 + 0x74) & 0x7fffffff) != 0)) && (lVar4 = param_1[0xd], lVar4 != 0))
  {
                    /* try { // try from 00111500 to 0011153f has its CatchHandler @ 0011166c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 100)) &&
      ((*(uint *)((long)param_1 + 100) & 0x7fffffff) != 0)) && (lVar4 = param_1[0xb], lVar4 != 0)) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x54)) &&
      ((*(uint *)((long)param_1 + 0x54) & 0x7fffffff) != 0)) && (lVar4 = param_1[9], lVar4 != 0)) {
                    /* try { // try from 00111558 to 00111597 has its CatchHandler @ 00111668 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x44)) &&
      ((*(uint *)((long)param_1 + 0x44) & 0x7fffffff) != 0)) && (lVar4 = param_1[7], lVar4 != 0)) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x34)) &&
      ((*(uint *)((long)param_1 + 0x34) & 0x7fffffff) != 0)) && (lVar4 = param_1[5], lVar4 != 0)) {
                    /* try { // try from 001115b0 to 001115ef has its CatchHandler @ 00111664 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x24)) &&
      ((*(uint *)((long)param_1 + 0x24) & 0x7fffffff) != 0)) && (lVar4 = param_1[3], lVar4 != 0)) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x14)) &&
      ((*(uint *)((long)param_1 + 0x14) & 0x7fffffff) != 0)) && (lVar4 = param_1[1], lVar4 != 0)) {
                    /* try { // try from 00111608 to 0011161b has its CatchHandler @ 00111650 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  nn::os::FinalizeMutex((MutexType *)*param_1);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0011162c to 0011163f has its CatchHandler @ 00111660 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  return;
}


