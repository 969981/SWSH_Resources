/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b7ff0; name: FUN_005b7ff0
 */


undefined8 FUN_005b7ff0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar5 = PTR_DAT_027139b0;
  iVar6 = *(int *)PTR_DAT_027139b0;
  if (iVar6 < 1) {
    plVar10 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar10,0);
    *(long **)PTR_DAT_027139b8 = plVar10;
    *(undefined4 *)puVar5 = 1;
    if (plVar10 != (long *)0x0) goto LAB_005b8040;
LAB_005b80c8:
    iVar6 = 0;
  }
  else {
    plVar10 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar6 + 1;
    if (iVar6 + 1 < 2) {
      if (plVar10 == (long *)0x0) goto LAB_005b80c8;
LAB_005b8040:
      uVar12 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar10 + 0x20))(plVar10);
      FUN_005b9b10(uVar12,plVar10);
      iVar6 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar5 = iVar6;
  uVar12 = *(undefined8 *)(param_1 + 0x88);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x60) == 3) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x38))();
    (**(code **)(**(long **)(param_1 + 0x40) + 0x48))();
  }
  local_80 = 0x3f8000003f800000;
  local_78 = 0x3f8000003f800000;
  local_90 = 0;
  uStack_88 = 0;
  FUN_0057e050(0,0,0,0x3f800000,plVar10,uVar12,uVar13,0,&local_80,0,0,0,1,&local_90,0,0xffffffff);
  FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x28);
  uVar2 = *(uint *)(PTR_DAT_02713a88 + 0x10);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = uVar1 / uVar2;
  }
  *(uint *)(param_1 + 0x9c) = uVar1 - uVar4 * uVar2;
  iVar6 = *(int *)(param_1 + 0x60);
  if (iVar6 == 2) {
    plVar11 = *(long **)(*(long *)(param_1 + 0x20) + 0x30);
    plVar10 = *(long **)(*(long *)(*(long *)(param_1 + 0x30) +
                                   (long)*(int *)(*(long *)(param_1 + 0x30) + 0xa0) * 8 + 0xb8) +
                        0xa8);
    lVar9 = (**(code **)(*plVar10 + 0xd8))(plVar10,0);
    uVar12 = *(undefined8 *)(lVar9 + 0x20);
    local_70 = 0;
    local_68 = 0;
    local_78 = CONCAT44(local_78._4_4_,4);
    local_50 = 0;
    uStack_48 = 0;
    local_80 = 1;
    local_60 = (undefined4 *)0x0;
    uStack_58 = 0;
    uVar7 = (**(code **)(*plVar11 + 0x228))(plVar11,uVar12,&local_80);
    if ((uVar7 & 1) != 0) {
      uVar3 = *local_60;
      *(char *)(param_1 + 0x92) = (char)uVar3;
      *(char *)(param_1 + 0x90) = (char)((uint)uVar3 >> 0x10);
      *(char *)(param_1 + 0x91) = (char)((uint)uVar3 >> 8);
      *(char *)(param_1 + 0x93) = (char)((uint)uVar3 >> 0x18);
      (**(code **)(*plVar11 + 0x230))(plVar11,uVar12,&local_80);
    }
  }
  else {
    if (iVar6 == 4) {
      lVar9 = *(long *)(param_1 + 0x30);
      do {
        lVar8 = lVar9;
        lVar9 = *(long *)(lVar8 + 0x120);
      } while (lVar9 != 0);
      uVar12 = FUN_0058d8a0(plVar10,*(undefined8 *)(lVar8 + 0xa8),param_1 + 0x40,
                            *(undefined4 *)(param_1 + 0x38),0);
      iVar6 = (int)uVar12;
    }
    else {
      if (iVar6 != 3) goto LAB_005b82bc;
      uVar12 = (**(code **)(**(long **)(param_1 + 0x40) + 0x50))();
      iVar6 = (int)uVar12;
    }
    if (iVar6 < 0) {
      return uVar12;
    }
  }
  iVar6 = *(int *)(param_1 + 0x60);
LAB_005b82bc:
  if (iVar6 == 5) {
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  return 0;
}


