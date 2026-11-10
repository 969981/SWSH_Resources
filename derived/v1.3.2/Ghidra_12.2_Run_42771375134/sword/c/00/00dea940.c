/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dea940; name: FUN_00dea940
 */


void FUN_00dea940(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  
  *(float *)(param_1 + 0xb8) =
       *(float *)(param_1 + 0xbc) +
       (*(float *)(param_1 + 0xc0) - *(float *)(param_1 + 0xbc)) * *(float *)(param_1 + 0xf0);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x88) + 0x198))
                    (*(long **)(param_1 + 0x88),PTR_DAT_0271ecf0,0);
  plVar3 = *(long **)(param_1 + 0x88);
  if ((int)plVar3[0xb7] == 2) {
    uVar2 = thunk_FUN_00e46320();
    uVar7 = uVar2 ^ 1;
    if (((uVar1 ^ uVar7) & 1) == 0) {
      if ((uVar2 & 1) == 0) goto LAB_00dea9dc;
    }
    else {
      plVar3 = *(long **)(param_1 + 0x88);
LAB_00dea9c0:
      (**(code **)(*plVar3 + 0x1a8))(plVar3,PTR_DAT_0271ecf0,uVar7 & 1);
      if ((uVar7 & 1) != 0) {
LAB_00dea9dc:
        FUN_00debbc0(param_1,0);
        return;
      }
    }
  }
  else if ((uVar1 & 1) != 0) {
    uVar7 = 0;
    goto LAB_00dea9c0;
  }
  plVar3 = *(long **)(param_1 + 0x88);
  if (*(char *)((long)plVar3 + 0x44c) == '\0') {
    pcVar6 = *(code **)(*plVar3 + 0x178);
    puVar4 = PTR_DAT_0271e870;
  }
  else {
    pcVar6 = *(code **)(*plVar3 + 0x1c0);
    puVar4 = (undefined *)((long)plVar3 + 0x44c);
  }
  uVar9 = (*pcVar6)(0,plVar3,puVar4);
  fVar8 = *(float *)(param_1 + 0xf4);
  fVar10 = (float)uVar9;
  if (fVar8 <= fVar10) {
    if ((fVar10 <= fVar8) ||
       (fVar10 = fVar10 - *(float *)(param_1 + 0xf8), uVar9 = (ulong)(uint)fVar10, fVar8 <= fVar10))
    goto LAB_00deaa64;
  }
  else {
    fVar10 = fVar10 + *(float *)(param_1 + 0xf8);
    uVar9 = (ulong)(uint)fVar10;
    if (fVar10 <= fVar8) goto LAB_00deaa64;
  }
  uVar9 = (ulong)(uint)fVar8;
LAB_00deaa64:
  (**(code **)(**(long **)(param_1 + 0x88) + 0x180))
            (uVar9,*(long **)(param_1 + 0x88),PTR_DAT_0271e870);
  if (DAT_01d4c0e4 <= (float)uVar9) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x100) + 1;
  }
  *(int *)(param_1 + 0x100) = iVar5;
  return;
}


