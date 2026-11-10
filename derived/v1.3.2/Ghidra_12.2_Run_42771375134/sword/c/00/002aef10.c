/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002aef10; name: FUN_002aef10
 */


bool FUN_002aef10(undefined4 param_1,undefined4 param_2,long *param_3,float *param_4,
                 undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  long lVar14;
  float *pfVar15;
  ushort *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_58;
  float fStack_54;
  
  uVar6 = *(uint *)((long)param_3 + 0xc);
  if (uVar6 < *(uint *)(param_3 + 1)) {
    *(uint *)((long)param_3 + 0xc) = uVar6 + 1;
    lVar2 = *param_3 + (ulong)uVar6 * 0x40;
    fVar17 = *param_4;
    pfVar15 = (float *)(lVar2 + 0x18);
    *pfVar15 = fVar17;
    *(float *)(lVar2 + 0x1c) = param_4[1];
    fVar18 = param_4[2];
    uVar7 = 0x408;
    puVar16 = (ushort *)(lVar2 + 0x14);
    *puVar16 = 0x408;
    *(undefined4 *)(lVar2 + 0x10) = param_5;
    *(float *)(lVar2 + 0x20) = fVar18;
    *(undefined4 *)(lVar2 + 0x34) = param_1;
    *(undefined4 *)(lVar2 + 0x38) = param_2;
    uVar4 = *(ushort *)(param_3 + 7);
    if ((uVar4 >> 1 & 1) != 0) {
      pfVar13 = (float *)param_3[2];
      pfVar3 = (float *)param_3[3];
      fVar20 = *pfVar13;
      fVar19 = pfVar13[1];
      fVar21 = pfVar13[2];
      lVar14 = *(long *)(pfVar13 + 4);
      uVar6 = FUN_00250220(fVar20 * fVar17,fVar21 * fVar18,lVar14,&fStack_54,&local_58);
      lVar9 = *(long *)(lVar14 + 0x50);
      if (*(char *)(lVar9 + (ulong)uVar6 * 4 + 2) < '\0') {
        uVar1 = *(int *)(lVar14 + 0x3c) + uVar6;
        iVar12 = (int)*(short *)(lVar9 + (ulong)uVar6 * 4);
        iVar10 = (int)*(short *)(lVar9 + (ulong)(uVar1 + 1) * 4);
        if (fStack_54 <= local_58) {
          iVar11 = (int)*(short *)(lVar9 + (ulong)(uVar6 + 1) * 4);
          iVar8 = iVar11 - iVar10;
          iVar11 = iVar12 - iVar11;
        }
        else {
          iVar11 = (int)*(short *)(lVar9 + (ulong)uVar1 * 4);
          iVar8 = iVar12 - iVar11;
          iVar11 = iVar11 - iVar10;
        }
      }
      else {
        uVar1 = *(int *)(lVar14 + 0x3c) + uVar6;
        iVar12 = (int)*(short *)(lVar9 + (ulong)(uVar6 + 1) * 4);
        iVar11 = (int)*(short *)(lVar9 + (ulong)uVar1 * 4);
        if (fStack_54 + local_58 <= 1.0) {
          iVar10 = (int)*(short *)(lVar9 + (ulong)uVar6 * 4);
          iVar8 = iVar10 - iVar11;
          iVar11 = iVar10 - iVar12;
        }
        else {
          iVar10 = (int)*(short *)(lVar9 + (ulong)(uVar1 + 1) * 4);
          iVar8 = iVar12 - iVar10;
          iVar11 = iVar11 - iVar10;
        }
      }
      fVar20 = fVar20 * (float)iVar8;
      fVar21 = fVar21 * (float)iVar11;
      if (0.0 < *(float *)(lVar14 + 0x58)) {
        fVar21 = -fVar21;
        fVar19 = -fVar19;
        fVar20 = -fVar20;
      }
      fVar17 = pfVar3[2];
      fVar18 = pfVar3[3];
      fVar20 = fVar20 + fVar20;
      fVar19 = fVar19 + fVar19;
      fVar22 = fVar18 * fVar18 + -0.5;
      fVar23 = *pfVar3;
      fVar24 = pfVar3[1];
      fVar21 = fVar21 + fVar21;
      fVar27 = fVar20 * fVar23 + fVar19 * fVar24 + fVar21 * fVar17;
      fVar25 = fVar23 * fVar27 + fVar20 * fVar22 + fVar18 * (fVar21 * fVar24 - fVar19 * fVar17);
      fVar26 = fVar24 * fVar27 + fVar19 * fVar22 + fVar18 * (fVar20 * fVar17 - fVar21 * fVar23);
      fVar18 = fVar21 * fVar22 + fVar18 * (fVar19 * fVar23 - fVar20 * fVar24) + fVar17 * fVar27;
      fVar17 = sqrtf(fVar18 * fVar18 + fVar25 * fVar25 + fVar26 * fVar26);
      if (0.0 < fVar17) {
        fVar17 = 1.0 / fVar17;
        fVar25 = fVar17 * fVar25;
        fVar26 = fVar17 * fVar26;
        fVar18 = fVar17 * fVar18;
      }
      if ((*(char *)((long)param_3 + 0x3a) != '\0') &&
         (pfVar13 = (float *)param_3[4],
         0.0 < fVar25 * *pfVar13 + fVar26 * pfVar13[1] + fVar18 * pfVar13[2])) {
        fVar25 = -fVar25;
        fVar26 = -fVar26;
        fVar18 = -fVar18;
      }
      *(float *)(lVar2 + 0x24) = fVar25;
      *(float *)(lVar2 + 0x28) = fVar26;
      *(float *)(lVar2 + 0x2c) = fVar18;
      uVar7 = *puVar16 | 2;
      *puVar16 = uVar7;
      uVar4 = *(ushort *)(param_3 + 7);
    }
    if ((uVar4 >> 2 & 1) != 0) {
      pfVar13 = (float *)param_3[5];
      pfVar3 = (float *)param_3[6];
      uVar7 = uVar7 | 4;
      *(float *)(lVar2 + 0x30) =
           (*pfVar15 - *pfVar3) * *pfVar13 + (*(float *)(lVar2 + 0x1c) - pfVar3[1]) * pfVar13[1] +
           (*(float *)(lVar2 + 0x20) - pfVar3[2]) * pfVar13[2];
      *puVar16 = uVar7;
      uVar4 = *(ushort *)(param_3 + 7);
    }
    if ((uVar4 & 1) != 0) {
      fVar18 = *(float *)(lVar2 + 0x1c);
      fVar18 = fVar18 + fVar18;
      pfVar13 = (float *)param_3[3];
      fVar19 = *(float *)(lVar2 + 0x20);
      fVar17 = *pfVar15 + *pfVar15;
      fVar24 = *pfVar13;
      fVar25 = pfVar13[1];
      fVar19 = fVar19 + fVar19;
      fVar22 = pfVar13[2];
      fVar23 = pfVar13[3];
      fVar20 = fVar23 * fVar23 + -0.5;
      fVar21 = fVar17 * fVar24 + fVar18 * fVar25 + fVar19 * fVar22;
      fVar27 = pfVar13[5];
      fVar26 = pfVar13[6];
      *pfVar15 = pfVar13[4] +
                 fVar24 * fVar21 + fVar17 * fVar20 + fVar23 * (fVar19 * fVar25 - fVar18 * fVar22);
      *(float *)(lVar2 + 0x1c) =
           fVar27 + fVar25 * fVar21 + fVar18 * fVar20 + fVar23 * (fVar17 * fVar22 - fVar19 * fVar24)
      ;
      *(float *)(lVar2 + 0x20) =
           fVar26 + fVar19 * fVar20 + fVar23 * (fVar18 * fVar24 - fVar17 * fVar25) + fVar22 * fVar21
      ;
      *puVar16 = uVar7 | 1;
    }
    bVar5 = *(uint *)((long)param_3 + 0xc) < *(uint *)(param_3 + 1);
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


