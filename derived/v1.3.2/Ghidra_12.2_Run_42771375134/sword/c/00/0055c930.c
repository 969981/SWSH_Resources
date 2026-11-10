/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055c930; name: FUN_0055c930
 */


undefined8 FUN_0055c930(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 local_c0 [16];
  
  uVar1 = *(uint *)(param_1 + 500);
  if ((int)uVar1 < 1) {
    return 0;
  }
  if (uVar1 == 1) {
    FUN_0055cb20(param_1,0,0);
    return 0;
  }
  uVar6 = 0;
  do {
    if ((long)uVar6 < (long)*(int *)(*(long *)(param_1 + 0x3c8) + 0x30)) {
      uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x3c8) + 0x38) + uVar6 * 8);
    }
    else {
      uVar3 = 0;
    }
    FUN_0055cb20(param_1,uVar3,uVar6 & 0xffffffff);
    puVar2 = PTR_DAT_027139b0;
    uVar6 = uVar6 + 1;
  } while (uVar1 != uVar6);
  if (uVar1 == 1) {
    return 0;
  }
  local_c0[0xe] = 0;
  local_c0[0xf] = 0;
  uVar6 = 0;
  local_c0[0xc] = 0;
  local_c0[0xd] = 0;
  local_c0[10] = 0;
  local_c0[0xb] = 0;
  local_c0[8] = 0;
  local_c0[9] = 0;
  local_c0[6] = 0;
  local_c0[7] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  lVar5 = *(long *)(param_1 + 0x3c8);
  do {
    if ((long)uVar6 < (long)*(int *)(lVar5 + 0x30)) {
      uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 8);
    }
    else {
      uVar3 = 0;
    }
    local_c0[uVar6] = uVar3;
    uVar6 = uVar6 + 1;
  } while (uVar1 != uVar6);
  iVar4 = *(int *)PTR_DAT_027139b0;
  if (iVar4 < 1) {
    plVar7 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar7,0);
    *(long **)PTR_DAT_027139b8 = plVar7;
    *(undefined4 *)puVar2 = 1;
  }
  else {
    plVar7 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar4 + 1;
    if (1 < iVar4 + 1) goto LAB_0055cad0;
  }
  if (plVar7 == (long *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar7 + 0x20))(plVar7);
    FUN_005b9b10(uVar3,plVar7);
    iVar4 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_0055cad0:
  *(int *)puVar2 = iVar4;
  FUN_0058d2d0(0x3f800000,0x3f800000,plVar7,*(undefined8 *)(param_1 + 0x3d0),uVar1,local_c0,0,0,0);
  return 0;
}


