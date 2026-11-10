/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008146c0; name: FUN_008146c0
 */


uint FUN_008146c0(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar6 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  if ((((*(char *)(param_1 + 0x44) == '\0') ||
       (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x50) == '\0')) ||
      (*(int *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_1 + 0x3c) * 4) != 10)) ||
     (*(int *)(param_1 + 0x40) == 3)) {
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar1 = (**(code **)(*plVar6 + 0x30))(plVar6,param_2,param_1);
    }
    else {
      uVar1 = (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_1);
      uVar1 = uVar1 & 1;
    }
    uVar2 = FUN_00813de0(param_1,param_2);
    uVar7 = FUN_007e9740(param_1);
    if ((uVar7 & 1) == 0) {
      iVar4 = *(int *)(param_1 + 0x3c);
      if ((uint)(*(int *)(param_1 + 0x38) << 3) < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440();
      }
      uVar2 = uVar2 + (iVar3 << (iVar4 == 10)) * uVar1;
    }
    else if (0 < (int)uVar2) {
      if ((uint)(*(int *)(param_1 + 0x38) << 3) < 0x80) {
        iVar4 = uVar2 + 1;
      }
      else {
        iVar4 = FUN_0080e440();
        iVar4 = iVar4 + uVar2;
      }
      if (uVar2 < 0x80) {
        uVar2 = iVar4 + 1;
      }
      else {
        iVar3 = FUN_0080e440(uVar2);
        uVar2 = iVar4 + iVar3;
      }
    }
  }
  else {
    plVar6 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
    iVar4 = *(int *)PTR_DAT_02716fa0;
    if (*(uint *)(param_1 + 0x38) < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = FUN_0080e440();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0xd8))(plVar6,param_2,param_1,0);
    uVar2 = (**(code **)(*plVar6 + 0x60))();
    if (uVar2 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = FUN_0080e440(uVar2);
    }
    uVar2 = iVar3 + iVar4 + uVar2 + iVar5;
  }
  return uVar2;
}


