/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00529860; name: FUN_00529860
 */


bool FUN_00529860(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_90 [64];
  
  *(undefined2 *)(param_1 + 0x1090) = 0;
  puVar2 = PTR_DAT_027139b0;
  if ((((*(char *)(param_1 + 0xd80) == '\0') || (*(char *)(param_1 + 0x8b6) != '\0')) ||
      (*(int *)(param_1 + 0xd84) < 0)) || (*(long *)(param_1 + 0xd88) == 0)) {
    return false;
  }
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
    if (1 < iVar4 + 1) goto LAB_00529998;
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
LAB_00529998:
  *(int *)puVar2 = iVar4;
  fVar9 = *(float *)(param_1 + 0x6c4);
  fVar7 = fVar9 * *(float *)(param_1 + 0x6d0);
  fVar10 = fVar9 * *(float *)(param_1 + 0x6d0) * *(float *)(param_1 + 0x420);
  fVar11 = *(float *)(param_1 + 0x6d4) * fVar10;
  fVar8 = fVar7 * *(float *)(param_1 + 0x6d8);
  uVar1 = *(undefined4 *)(param_1 + 0xd84);
  uVar6 = *(undefined8 *)(param_1 + 0xd88);
  bVar3 = true;
  FUN_0050f980(fVar11 - fVar10,fVar10 + fVar11,fVar8 - fVar7,fVar7 + fVar8,fVar9,
               *(undefined4 *)(param_1 + 0x6c8),auStack_90,0,1);
  iVar4 = FUN_00588430(*(undefined4 *)(param_1 + 0xde4),*(undefined4 *)(param_1 + 0xde0),
                       *(undefined4 *)(param_1 + 0xd94),plVar5,uVar1,uVar6,param_1 + 0x734,
                       auStack_90,*(undefined1 *)(param_1 + 0xd90),param_1 + 0xd9c);
  *(undefined1 *)(param_1 + 0x1091) = 1;
  if (iVar4 == 0) {
    bVar3 = *(char *)(param_1 + 0x1090) != '\0';
  }
  else {
    *(char *)(param_1 + 0x1090) = '\x01';
  }
  return bVar3;
}


