/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00138a60; name: FUN_00138a60
 */


void FUN_00138a60(int *param_1)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = *param_1;
  if (iVar7 != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 4) + 0x20);
    do {
      lVar6 = *plVar4;
      if (lVar6 != 0) {
        FUN_00136be0(lVar6);
                    /* try { // try from 00138a94 to 00138aa7 has its CatchHandler @ 00138c04 */
        plVar3 = (long *)FUN_00400d30();
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar6);
        *plVar4 = 0;
      }
      iVar7 = iVar7 + -1;
      plVar4 = plVar4 + 7;
    } while (iVar7 != 0);
  }
  param_1[0] = 0;
  param_1[1] = -1;
  piVar2 = param_1 + 0x42a;
  param_1[2] = -1;
  param_1[0x28] = 0;
  *piVar2 = -1;
  lVar6 = 0;
  piVar5 = param_1 + 0x2c;
  do {
    lVar1 = lVar6 + 8;
    *piVar5 = 0;
    *(undefined4 *)((long)piVar2 + lVar6 + 4) = 0xffffffff;
    piVar5[4] = 0;
    *(undefined4 *)((long)piVar2 + lVar1) = 0xffffffff;
    lVar6 = lVar1;
    piVar5 = piVar5 + 8;
  } while (lVar1 != 0x400);
  lVar6 = *(long *)(param_1 + 0x12);
  param_1[6] = 0;
  param_1[10] = 0;
  if (lVar6 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar6);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar6 = *(long *)(param_1 + 0x14);
  if (lVar6 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar6);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar6);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar6 = *(long *)(param_1 + 0x1e);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (lVar6 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar6);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  lVar6 = *(long *)(param_1 + 0x22);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (lVar6 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar6);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  lVar6 = *(long *)(param_1 + 0x534);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x52e] = 0;
  if (lVar6 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar6);
    param_1[0x534] = 0;
    param_1[0x535] = 0;
  }
  param_1[0x534] = 0;
  param_1[0x535] = 0;
  param_1[0x536] = 0;
  return;
}


