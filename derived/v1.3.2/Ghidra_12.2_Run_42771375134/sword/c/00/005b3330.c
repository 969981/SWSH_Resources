/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b3330; name: FUN_005b3330
 */


undefined4 FUN_005b3330(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong in_stack_fffffffffffffef8;
  ulong uVar10;
  undefined8 in_stack_ffffffffffffff00;
  uint uVar12;
  undefined8 *puVar11;
  uint uVar13;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  puVar2 = PTR_DAT_027139b0;
  uVar12 = (uint)((ulong)in_stack_ffffffffffffff00 >> 0x20);
  lVar7 = *(long *)(param_1 + 0x4a8);
  iVar4 = *(int *)PTR_DAT_027139b0;
  if (iVar4 < 1) {
    plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar5,0);
    *(long **)PTR_DAT_027139b8 = plVar5;
    *(undefined4 *)puVar2 = 1;
  }
  else {
    plVar5 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar4 + 1;
    if (1 < iVar4 + 1) goto LAB_005b3420;
  }
  if (plVar5 == (long *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar6 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar5 + 0x20))(plVar5);
    FUN_005b9b10(uVar6,plVar5);
    iVar4 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_005b3420:
  *(int *)puVar2 = iVar4;
  local_a0 = DAT_020f1d44;
  uStack_98 = DAT_020f1d4c;
  local_80 = DAT_020f1d64;
  local_90 = DAT_020f1d54;
  uStack_88 = DAT_020f1d5c;
  lVar8 = lVar7 + (long)param_2 * 0x108;
  puVar9 = &local_c8;
  local_c8 = 0x3f8000003f800000;
  local_c0 = 0x3f8000003f800000;
  uVar13 = 0;
  FUN_00590830(0x3f800000,plVar5,*(undefined8 *)(lVar8 + 0x38),(*(undefined8 **)(lVar8 + 0x68))[3],
               **(undefined8 **)(lVar8 + 0x68),9,&local_a0,1,*(undefined4 *)(param_1 + 0x220),puVar9
               ,in_stack_fffffffffffffef8 & 0xffffffffffffff00,(ulong)uVar12 << 0x20,0);
  puVar11 = &local_b0;
  local_c8 = 0x3f8000003f800000;
  local_c0 = 0x3f8000003f800000;
  local_b0 = 0x3f800000;
  local_a8 = 0x7f7fffffff7fffff;
  uVar13 = uVar13 & 0xffffff00;
  FUN_00590f20(DAT_01d4c608,0x41100000,0x3f800000,plVar5,*(undefined8 *)(lVar8 + 0x38),
               *(undefined8 *)(*(long *)(lVar8 + 0x68) + 0x18),
               *(undefined8 *)(*(long *)(lVar8 + 0x68) + 8),9,&local_a0,1,
               *(undefined4 *)(param_1 + 0x220),puVar9,0,puVar11,uVar13,0,0);
  local_c8 = 0x3f8000003f800000;
  local_c0 = 0x3f8000003f800000;
  local_b0 = 0x3f800000;
  local_a8 = 0x7f7fffffff7fffff;
  uVar10 = 0;
  FUN_00590f20(DAT_01d4bffc,0x41100000,0x3f800000,plVar5,*(undefined8 *)(lVar8 + 0x38),
               *(undefined8 *)(*(long *)(lVar8 + 0x68) + 0x18),
               *(undefined8 *)(*(long *)(lVar8 + 0x68) + 0x10),9,&local_a0,1,
               *(undefined4 *)(param_1 + 0x220),puVar9,0,puVar11,uVar13 & 0xffffff00,0,0);
  local_c8 = **(undefined8 **)(lVar8 + 0x68);
  local_c0 = *(undefined8 *)(*(long *)(lVar8 + 0x68) + 8);
  local_b8 = *(undefined8 *)(*(long *)(lVar8 + 0x68) + 0x10);
  uVar3 = FUN_0058d2d0(DAT_01d4bd24,0x3f800000,plVar5,*(undefined8 *)(lVar8 + 0xa0),3,&local_c8,0,
                       *(undefined4 *)(param_1 + 0x224),0);
  if ((*(float *)(param_1 + 0x1dc) != 0.0) && (*(int *)(lVar8 + 0x28) == 1)) {
    lVar7 = lVar7 + (long)param_2 * 0x108;
    uVar1 = *(undefined4 *)(lVar7 + 0x2c);
    uVar6 = *(undefined8 *)(lVar8 + 0xa0);
    local_a8 = CONCAT44(uVar1,uVar1);
    local_b0 = CONCAT44(uVar1,uVar1);
    local_d8 = 0x3f8000003f800000;
    uStack_d0 = 0x3f8000003f800000;
    FUN_00596bf0(0x3f800000,DAT_01d4bd94,plVar5,uVar6,**(undefined8 **)(lVar7 + 0x78),uVar6,
                 &local_b0,0,&local_d8,0,(ulong)puVar9 & 0xffffffffffffff00,
                 uVar10 & 0xffffffffffffff00,(ulong)puVar11 & 0xffffffff00000000,0);
  }
  return uVar3;
}


