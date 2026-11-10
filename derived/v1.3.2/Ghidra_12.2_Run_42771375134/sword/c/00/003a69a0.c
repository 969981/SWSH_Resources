/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a69a0; name: FUN_003a69a0
 */


void FUN_003a69a0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = param_1[0x3dc];
  *param_1 = (long)(PTR_DAT_02712700 + 0x10);
  if (lVar4 != 0) {
    FUN_00397690(lVar4);
                    /* try { // try from 003a69d4 to 003a69e7 has its CatchHandler @ 003a6b78 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
    param_1[0x3dc] = 0;
  }
  uVar2 = (ulong)*(uint *)((long)param_1 + 0x1f1c);
  if (*(uint *)((long)param_1 + 0x1f1c) != 0) {
    lVar4 = 0;
    uVar6 = 0;
    do {
      lVar5 = *(long *)(param_1[0x3e2] + lVar4);
      if (lVar5 != 0) {
        FUN_00397690(lVar5);
                    /* try { // try from 003a6a10 to 003a6a23 has its CatchHandler @ 003a6b7c */
        plVar1 = (long *)FUN_00400d30();
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar5);
        uVar2 = (ulong)*(uint *)((long)param_1 + 0x1f1c);
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar6 < uVar2);
  }
  lVar4 = param_1[0x3e1];
  if (lVar4 != 0) {
                    /* try { // try from 003a6a40 to 003a6a53 has its CatchHandler @ 003a6b40 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  lVar4 = param_1[0x3e2];
  if (lVar4 != 0) {
                    /* try { // try from 003a6a5c to 003a6a6f has its CatchHandler @ 003a6b3c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1f04)) &&
      ((*(uint *)((long)param_1 + 0x1f04) & 0x7fffffff) != 0)) &&
     (lVar4 = param_1[0x3df], lVar4 != 0)) {
                    /* try { // try from 003a6a88 to 003a6a9b has its CatchHandler @ 003a6b34 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1ef4)) &&
      ((*(uint *)((long)param_1 + 0x1ef4) & 0x7fffffff) != 0)) &&
     (lVar4 = param_1[0x3dd], lVar4 != 0)) {
                    /* try { // try from 003a6ab4 to 003a6ac7 has its CatchHandler @ 003a6b30 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)((long)param_1 + 0x1ecc) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[0x3d8] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[0x3d7] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x1ecc));
  }
  lVar4 = param_1[0x3d5];
  if (lVar4 != 0) {
                    /* try { // try from 003a6b08 to 003a6b1b has its CatchHandler @ 003a6b38 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_0039f850(param_1 + 2);
  return;
}


