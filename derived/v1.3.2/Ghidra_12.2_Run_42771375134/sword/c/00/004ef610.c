/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ef610; name: FUN_004ef610
 */


ulong FUN_004ef610(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  int local_88;
  int iStack_84;
  int local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  int *local_70;
  int *local_58;
  
  if (param_5 < *(int *)(param_3 + 4)) {
    iVar1 = FUN_004efa80(param_1,param_2,param_3);
    lVar7 = param_3 + (long)iVar1 * 0x28;
    puVar8 = (undefined8 *)(lVar7 + 0x20);
    piVar6 = (int *)(lVar7 + 8);
    uVar3 = FUN_004ef610(param_1,param_2,*puVar8,&local_58,param_5,param_6);
    if ((uVar3 & 1) == 0) {
      param_3 = param_3 + (long)iVar1 * 0x28;
      uVar16 = param_2[1];
      iVar1 = NEON_fminnm(*param_2,*piVar6);
      uVar11 = param_2[2];
      fVar10 = (float)param_2[3];
      fVar21 = *(float *)(param_3 + 0x1c);
      fVar14 = *(float *)(param_3 + 0x14);
      fVar18 = *(float *)(param_3 + 0x18);
      uVar2 = 0;
      fVar12 = (float)param_2[4];
      fVar9 = (float)param_2[5];
      uVar19 = *(undefined4 *)(param_3 + 0xc);
      uVar20 = *(undefined4 *)(param_3 + 0x10);
      *piVar6 = iVar1;
      if (fVar10 <= fVar14) {
        fVar10 = fVar14;
      }
      uVar16 = NEON_fminnm(uVar16,uVar19);
      if (fVar12 <= fVar18) {
        fVar12 = fVar18;
      }
      uVar11 = NEON_fminnm(uVar11,uVar20);
      *(undefined4 *)(param_3 + 0x10) = uVar11;
      *(float *)(param_3 + 0x14) = fVar10;
      if (fVar9 <= fVar21) {
        fVar9 = fVar21;
      }
      *(undefined4 *)(param_3 + 0xc) = uVar16;
      *(float *)(param_3 + 0x18) = fVar12;
      *(float *)(param_3 + 0x1c) = fVar9;
    }
    else {
      piVar4 = (int *)*puVar8;
      iVar17 = piVar4[2];
      iVar15 = piVar4[3];
      iVar13 = piVar4[4];
      fVar12 = (float)piVar4[5];
      fVar10 = (float)piVar4[6];
      fVar9 = (float)piVar4[7];
      if (1 < *piVar4) {
        lVar7 = (long)*piVar4 + -1;
        pfVar5 = (float *)(piVar4 + 0x11);
        do {
          iVar15 = NEON_fminnm(iVar15,pfVar5[-4]);
          iVar17 = NEON_fminnm(iVar17,pfVar5[-5]);
          if (fVar10 <= pfVar5[-1]) {
            fVar10 = pfVar5[-1];
          }
          if (fVar12 <= pfVar5[-2]) {
            fVar12 = pfVar5[-2];
          }
          iVar13 = NEON_fminnm(iVar13,pfVar5[-3]);
          if (fVar9 <= *pfVar5) {
            fVar9 = *pfVar5;
          }
          lVar7 = lVar7 + -1;
          pfVar5 = pfVar5 + 10;
        } while (lVar7 != 0);
      }
      lVar7 = param_3 + (long)iVar1 * 0x28;
      *piVar6 = iVar17;
      *(int *)(lVar7 + 0xc) = iVar15;
      *(int *)(lVar7 + 0x10) = iVar13;
      *(float *)(lVar7 + 0x14) = fVar12;
      *(float *)(lVar7 + 0x18) = fVar10;
      *(float *)(lVar7 + 0x1c) = fVar9;
      local_70 = local_58;
      local_88 = local_58[2];
      iStack_84 = local_58[3];
      local_80 = local_58[4];
      fStack_7c = (float)local_58[5];
      local_78 = (float)local_58[6];
      fStack_74 = (float)local_58[7];
      if (1 < *local_58) {
        lVar7 = (long)*local_58 + -1;
        pfVar5 = (float *)(local_58 + 0x11);
        do {
          iStack_84 = NEON_fminnm(iStack_84,pfVar5[-4]);
          local_88 = NEON_fminnm(local_88,pfVar5[-5]);
          if (local_78 <= pfVar5[-1]) {
            local_78 = pfVar5[-1];
          }
          if (fStack_7c <= pfVar5[-2]) {
            fStack_7c = pfVar5[-2];
          }
          local_80 = NEON_fminnm(local_80,pfVar5[-3]);
          if (fStack_74 <= *pfVar5) {
            fStack_74 = *pfVar5;
          }
          lVar7 = lVar7 + -1;
          pfVar5 = pfVar5 + 10;
        } while (lVar7 != 0);
      }
      uVar2 = FUN_004ef850(param_1,&local_88,param_3,param_4,param_6);
    }
  }
  else {
    if (*(int *)(param_3 + 4) == param_5) {
      uVar3 = FUN_004ef850(param_1,param_2,param_3,param_4,param_6);
      return uVar3;
    }
    uVar2 = 0;
  }
  return (ulong)(uVar2 & 1);
}


