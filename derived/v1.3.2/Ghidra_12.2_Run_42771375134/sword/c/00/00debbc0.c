/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00debbc0; name: FUN_00debbc0
 */


void FUN_00debbc0(long param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  code *pcVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  plVar5 = *(long **)(param_1 + 0x88);
  if (*(char *)((long)plVar5 + 0x44c) == '\0') {
    pcVar9 = *(code **)(*plVar5 + 0x178);
    puVar6 = PTR_DAT_0271e870;
  }
  else {
    pcVar9 = *(code **)(*plVar5 + 0x1c0);
    puVar6 = (undefined *)((long)plVar5 + 0x44c);
  }
  uVar10 = (*pcVar9)(0,plVar5,puVar6);
  fVar11 = *(float *)(param_1 + 0x144);
  fVar14 = (float)uVar10;
  fVar12 = *(float *)(param_1 + 0xf4);
  lVar1 = 0x148;
  if (fVar14 <= fVar11) {
    lVar1 = 0xf8;
  }
  if (fVar12 <= fVar14) {
    if ((fVar12 < fVar14) &&
       (fVar13 = fVar14 - *(float *)(param_1 + lVar1), uVar10 = (ulong)(uint)fVar13, fVar13 < fVar12
       )) goto LAB_00debc50;
  }
  else {
    fVar13 = fVar14 + *(float *)(param_1 + lVar1);
    uVar10 = (ulong)(uint)fVar13;
    if (fVar12 < fVar13) {
LAB_00debc50:
      uVar10 = (ulong)(uint)fVar12;
    }
  }
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar14 <= fVar11) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    fVar14 = (float)uVar10;
    if (!NAN(fVar14) && !NAN(fVar11)) {
      bVar2 = fVar14 < fVar11;
      bVar3 = fVar14 == fVar11;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar2 != bVar4) {
LAB_00debc7c:
    plVar5 = *(long **)(param_1 + 0x88);
    pcVar9 = *(code **)(*plVar5 + 0x1a8);
    if (fVar11 < (float)uVar10) {
      uVar7 = 0;
      goto LAB_00debcd0;
    }
  }
  else {
    if (fVar11 < fVar12) {
      fVar14 = fVar11 + *(float *)(param_1 + 0x148);
      uVar10 = (ulong)(uint)fVar14;
      if (fVar12 < fVar14) {
LAB_00debc78:
        uVar10 = (ulong)(uint)fVar12;
      }
      goto LAB_00debc7c;
    }
    if (fVar12 < fVar11) {
      fVar14 = fVar11 - *(float *)(param_1 + 0x148);
      uVar10 = (ulong)(uint)fVar14;
      if (fVar14 < fVar12) goto LAB_00debc78;
      goto LAB_00debc7c;
    }
    plVar5 = *(long **)(param_1 + 0x88);
    pcVar9 = *(code **)(*plVar5 + 0x1a8);
    uVar10 = (ulong)(uint)fVar11;
  }
  uVar7 = 1;
LAB_00debcd0:
  (*pcVar9)(plVar5,PTR_DAT_0271ecf0,uVar7);
  (**(code **)(**(long **)(param_1 + 0x88) + 0x180))
            (uVar10,*(long **)(param_1 + 0x88),PTR_DAT_0271e870);
  if (*(float *)(param_1 + 0x144) <= (float)uVar10) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x100) + 1;
  }
  *(int *)(param_1 + 0x100) = iVar8;
  return;
}


