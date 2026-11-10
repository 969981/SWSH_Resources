/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b4980; name: FUN_005b4980
 */


void FUN_005b4980(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_38;
  float fStack_34;
  
  puVar2 = PTR_DAT_027139b0;
  iVar3 = *(int *)PTR_DAT_027139b0;
  param_2 = param_2 & 0xffffffff;
  if (iVar3 < 1) {
    plVar4 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar4,0);
    *(long **)PTR_DAT_027139b8 = plVar4;
    *(undefined4 *)puVar2 = 1;
  }
  else {
    plVar4 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar3 + 1;
    if (1 < iVar3 + 1) goto LAB_005b4a64;
  }
  if (plVar4 == (long *)0x0) {
    iVar3 = 0;
  }
  else {
    uVar6 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar4 + 0x20))(plVar4);
    FUN_005b9b10(uVar6,plVar4);
    iVar3 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_005b4a64:
  *(int *)puVar2 = iVar3;
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 200));
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xc4));
  uVar8 = -(param_2 >> 0x1f) & 0xffffff8000000000 | param_2 << 7;
  lVar1 = *(long *)(param_1 + 0x420) + uVar8;
  fVar11 = *(float *)(lVar1 + 0x7c) * (fVar9 / fVar10);
  if (fVar10 <= fVar9) {
    fVar11 = *(float *)(lVar1 + 0x7c);
  }
  uVar5 = -(param_2 >> 0x1f) & 0xfffffff800000000 | param_2 << 3;
  lVar7 = *(long *)(param_1 + 0x428);
  fVar9 = ((fVar11 * 0.5) / (fVar9 / fVar10)) * 0.0;
  fVar11 = fVar11 * 0.5 * 0.0;
  local_60 = *(undefined4 *)(lVar1 + 0x58);
  local_5c = *(undefined4 *)(lVar1 + 0x5c);
  local_58 = *(undefined4 *)(lVar1 + 0x60);
  local_54 = *(undefined4 *)(lVar1 + 100);
  local_38 = fVar9;
  fStack_34 = fVar11;
  FUN_005818d0(plVar4,*(undefined8 *)(*(long *)(param_1 + 0x438) + uVar5),
               *(undefined8 *)(*(long *)(param_1 + 0x448) + uVar5),&local_38,&local_60);
  lVar7 = lVar7 + uVar8;
  local_60 = *(undefined4 *)(lVar7 + 0x58);
  local_5c = *(undefined4 *)(lVar7 + 0x5c);
  local_58 = *(undefined4 *)(lVar7 + 0x60);
  local_54 = *(undefined4 *)(lVar7 + 100);
  local_38 = fVar9;
  fStack_34 = fVar11;
  FUN_005818d0(plVar4,*(undefined8 *)(*(long *)(param_1 + 0x438) + uVar5),
               *(undefined8 *)(*(long *)(param_1 + 0x450) + uVar5),&local_38,&local_60);
  return;
}


