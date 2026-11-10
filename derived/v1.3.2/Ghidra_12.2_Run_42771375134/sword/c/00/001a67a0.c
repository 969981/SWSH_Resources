/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a67a0; name: FUN_001a67a0
 */


/* WARNING: Removing unreachable block (ram,0x001a6f8c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_001a67a0(float param_1,float *param_2,uint param_3,long param_4,long param_5,long param_6,
                 uint param_7,float *param_8)

{
  short sVar1;
  ulong uVar2;
  short *psVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  short sVar10;
  short sVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined4 *puVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint local_100 [4];
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  float local_a0 [8];
  
  if (param_7 != 0) {
    uVar17 = (ulong)param_7;
    if (uVar17 - 1 < 3) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      puVar16 = (undefined4 *)(param_4 + 0x28);
      do {
        lVar15 = lVar15 + 4;
        puVar16[-8] = 0xffffffff;
        puVar16[-4] = 0xffffffff;
        *puVar16 = 0xffffffff;
        puVar16[4] = 0xffffffff;
        puVar16 = puVar16 + 0x10;
      } while (uVar17 - (uVar17 & 3) != lVar15);
    }
    if ((param_7 & 3) != 0) {
      lVar12 = -(uVar17 & 3);
      puVar16 = (undefined4 *)(param_4 + lVar15 * 0x10 + 8);
      do {
        lVar12 = lVar12 + 1;
        *puVar16 = 0xffffffff;
        puVar16 = puVar16 + 4;
      } while (lVar12 != 0);
    }
  }
  local_a0[0] = 3.4028235e+38;
  local_a0[1] = 3.4028235e+38;
  local_a0[2] = 3.4028235e+38;
  fVar24 = param_2[1];
  fVar27 = param_8[1];
  fVar25 = param_2[2];
  fVar26 = param_8[2];
  uVar4 = param_3 + 7 & 0xfffffffc;
  pfVar5 = param_2 + 8;
  if (param_3 < 2) {
    pfVar5 = local_a0;
  }
  pfVar6 = param_2 + 0x10;
  if (param_3 < 3) {
    pfVar6 = local_a0;
  }
  pfVar7 = param_2 + 0x18;
  if (param_3 < 4) {
    pfVar7 = local_a0;
  }
  fVar23 = floorf((*param_2 - *param_8) * param_1);
  local_100[0] = (uint)fVar23;
  fVar24 = floorf((fVar24 - fVar27) * param_1);
  local_100[1] = (uint)fVar24;
  fVar24 = floorf((fVar25 - fVar26) * param_1);
  local_100[2] = (int)fVar24;
  fVar25 = pfVar5[1];
  fVar23 = param_8[1];
  fVar26 = pfVar5[2];
  fVar27 = param_8[2];
  fVar24 = floorf((*pfVar5 - *param_8) * param_1);
  local_100[3] = (uint)fVar24;
  fVar24 = floorf((fVar25 - fVar23) * param_1);
  local_f0 = (int)fVar24;
  fVar24 = floorf((fVar26 - fVar27) * param_1);
  local_ec = (int)fVar24;
  fVar25 = pfVar6[1];
  fVar23 = param_8[1];
  fVar26 = pfVar6[2];
  fVar27 = param_8[2];
  fVar24 = floorf((*pfVar6 - *param_8) * param_1);
  local_e8 = (int)fVar24;
  fVar24 = floorf((fVar25 - fVar23) * param_1);
  local_e4 = (int)fVar24;
  fVar24 = floorf((fVar26 - fVar27) * param_1);
  local_e0 = (int)fVar24;
  fVar25 = pfVar7[1];
  fVar23 = param_8[1];
  fVar26 = pfVar7[2];
  fVar27 = param_8[2];
  fVar24 = floorf((*pfVar7 - *param_8) * param_1);
  local_dc = (int)fVar24;
  fVar24 = floorf((fVar25 - fVar23) * param_1);
  local_d8 = (int)fVar24;
  fVar24 = floorf((fVar26 - fVar27) * param_1);
  local_d4 = (int)fVar24;
  if (uVar4 != 0) {
    uVar9 = param_7 - 1;
    uVar22 = (ulong)param_3;
    uVar17 = 0;
    do {
      uVar2 = uVar17 + 4;
      fVar24 = param_8[1];
      uVar18 = (uint)uVar2 & 4;
      pfVar5 = param_2 + uVar17 * 8 + 0x20;
      if (uVar22 <= uVar2) {
        pfVar5 = local_a0;
      }
      fVar25 = pfVar5[1];
      fVar26 = pfVar5[2];
      fVar27 = param_8[2];
      pfVar6 = param_2 + uVar17 * 8 + 0x28;
      if (uVar22 <= uVar17 + 5) {
        pfVar6 = local_a0;
      }
      pfVar7 = param_2 + uVar17 * 8 + 0x30;
      if (uVar22 <= uVar17 + 6) {
        pfVar7 = local_a0;
      }
      pfVar8 = param_2 + uVar17 * 8 + 0x38;
      if (uVar22 <= uVar17 + 7) {
        pfVar8 = local_a0;
      }
      fVar23 = floorf((*pfVar5 - *param_8) * param_1);
      uVar13 = (ulong)uVar18;
      local_100[uVar13 * 3] = (int)fVar23;
      fVar24 = floorf((fVar25 - fVar24) * param_1);
      local_100[uVar13 * 3 + 1] = (int)fVar24;
      fVar24 = floorf((fVar26 - fVar27) * param_1);
      local_100[uVar13 * 3 + 2] = (int)fVar24;
      fVar25 = pfVar6[1];
      fVar23 = param_8[1];
      fVar26 = pfVar6[2];
      fVar27 = param_8[2];
      fVar24 = floorf((*pfVar6 - *param_8) * param_1);
      uVar13 = (ulong)(uVar18 | 1);
      local_100[uVar13 * 3] = (int)fVar24;
      fVar24 = floorf((fVar25 - fVar23) * param_1);
      local_100[uVar13 * 3 + 1] = (int)fVar24;
      fVar24 = floorf((fVar26 - fVar27) * param_1);
      local_100[uVar13 * 3 + 2] = (int)fVar24;
      fVar25 = pfVar7[1];
      fVar23 = param_8[1];
      fVar26 = pfVar7[2];
      fVar27 = param_8[2];
      fVar24 = floorf((*pfVar7 - *param_8) * param_1);
      uVar13 = (ulong)(uVar18 | 2);
      local_100[uVar13 * 3] = (int)fVar24;
      fVar24 = floorf((fVar25 - fVar23) * param_1);
      local_100[uVar13 * 3 + 1] = (int)fVar24;
      fVar24 = floorf((fVar26 - fVar27) * param_1);
      local_100[uVar13 * 3 + 2] = (int)fVar24;
      fVar25 = pfVar8[1];
      fVar23 = param_8[1];
      fVar26 = pfVar8[2];
      fVar27 = param_8[2];
      fVar24 = floorf((*pfVar8 - *param_8) * param_1);
      uVar13 = (ulong)(uVar18 | 3);
      local_100[uVar13 * 3] = (int)fVar24;
      fVar24 = floorf((fVar25 - fVar23) * param_1);
      local_100[uVar13 * 3 + 1] = (int)fVar24;
      fVar24 = floorf((fVar26 - fVar27) * param_1);
      local_100[uVar13 * 3 + 2] = (int)fVar24;
      uVar13 = uVar17 & 4;
      if (uVar17 < uVar22) {
        sVar10 = (short)local_100[uVar13 * 3 + 1];
        sVar1 = (short)local_100[uVar13 * 3];
        sVar11 = (short)local_100[uVar13 * 3 + 2];
        uVar18 = sVar10 * 0x65 + (int)sVar1 + sVar11 * 0x1eef & uVar9;
        uVar19 = (ulong)uVar18;
        piVar14 = (int *)(param_4 + uVar19 * 0x10 + 8);
        iVar20 = *piVar14;
        if (iVar20 != -1) {
          do {
            if ((((uint)*(ushort *)(param_4 + uVar19 * 0x10) == (local_100[uVar13 * 3] & 0xffff)) &&
                (lVar15 = param_4 + uVar19 * 0x10,
                (uint)*(ushort *)(lVar15 + 2) == (local_100[uVar13 * 3 + 1] & 0xffff))) &&
               ((uint)*(ushort *)(lVar15 + 4) == (local_100[uVar13 * 3 + 2] & 0xffff))) {
              *(short *)(param_6 + uVar17 * 2) = (short)uVar19;
              *(int *)(param_4 + uVar19 * 0x10 + 8) = iVar20 + 1;
              goto joined_r0x001a6a18;
            }
            uVar18 = (int)uVar19 + 1U & uVar9;
            uVar19 = (ulong)uVar18;
            piVar14 = (int *)(param_4 + uVar19 * 0x10 + 8);
            iVar20 = *piVar14;
          } while (iVar20 != -1);
        }
        *(short *)(param_6 + uVar17 * 2) = (short)uVar18;
        psVar3 = (short *)(param_4 + uVar19 * 0x10);
        *psVar3 = sVar1;
        psVar3[1] = sVar10;
        psVar3[2] = sVar11;
        *piVar14 = 1;
      }
joined_r0x001a6a18:
      if ((uVar17 | 1) < uVar22) {
        uVar19 = uVar13 | 1;
        sVar10 = (short)local_100[uVar19 * 3 + 1];
        sVar1 = (short)local_100[uVar19 * 3];
        sVar11 = (short)local_100[uVar19 * 3 + 2];
        uVar18 = sVar10 * 0x65 + (int)sVar1 + sVar11 * 0x1eef & uVar9;
        uVar21 = (ulong)uVar18;
        piVar14 = (int *)(param_4 + uVar21 * 0x10 + 8);
        iVar20 = *piVar14;
        if (iVar20 != -1) {
          do {
            if ((((uint)*(ushort *)(param_4 + uVar21 * 0x10) == (local_100[uVar19 * 3] & 0xffff)) &&
                (lVar15 = param_4 + uVar21 * 0x10,
                (uint)*(ushort *)(lVar15 + 2) == (local_100[uVar19 * 3 + 1] & 0xffff))) &&
               ((uint)*(ushort *)(lVar15 + 4) == (local_100[uVar19 * 3 + 2] & 0xffff))) {
              *(short *)(param_6 + (uVar17 | 1) * 2) = (short)uVar21;
              *(int *)(param_4 + uVar21 * 0x10 + 8) = iVar20 + 1;
              goto joined_r0x001a6c64;
            }
            uVar18 = (int)uVar21 + 1U & uVar9;
            uVar21 = (ulong)uVar18;
            piVar14 = (int *)(param_4 + uVar21 * 0x10 + 8);
            iVar20 = *piVar14;
          } while (iVar20 != -1);
        }
        *(short *)(param_6 + (uVar17 | 1) * 2) = (short)uVar18;
        psVar3 = (short *)(param_4 + uVar21 * 0x10);
        *psVar3 = sVar1;
        psVar3[1] = sVar10;
        psVar3[2] = sVar11;
        *piVar14 = 1;
      }
joined_r0x001a6c64:
      if ((uVar17 | 2) < uVar22) {
        uVar19 = uVar13 | 2;
        sVar10 = (short)local_100[uVar19 * 3 + 1];
        sVar1 = (short)local_100[uVar19 * 3];
        sVar11 = (short)local_100[uVar19 * 3 + 2];
        uVar18 = sVar10 * 0x65 + (int)sVar1 + sVar11 * 0x1eef & uVar9;
        uVar21 = (ulong)uVar18;
        piVar14 = (int *)(param_4 + uVar21 * 0x10 + 8);
        iVar20 = *piVar14;
        if (iVar20 != -1) {
          do {
            if ((((uint)*(ushort *)(param_4 + uVar21 * 0x10) == (local_100[uVar19 * 3] & 0xffff)) &&
                (lVar15 = param_4 + uVar21 * 0x10,
                (uint)*(ushort *)(lVar15 + 2) == (local_100[uVar19 * 3 + 1] & 0xffff))) &&
               ((uint)*(ushort *)(lVar15 + 4) == (local_100[uVar19 * 3 + 2] & 0xffff))) {
              *(short *)(param_6 + (uVar17 | 2) * 2) = (short)uVar21;
              *(int *)(param_4 + uVar21 * 0x10 + 8) = iVar20 + 1;
              goto joined_r0x001a6a60;
            }
            uVar18 = (int)uVar21 + 1U & uVar9;
            uVar21 = (ulong)uVar18;
            piVar14 = (int *)(param_4 + uVar21 * 0x10 + 8);
            iVar20 = *piVar14;
          } while (iVar20 != -1);
        }
        *(short *)(param_6 + (uVar17 | 2) * 2) = (short)uVar18;
        psVar3 = (short *)(param_4 + uVar21 * 0x10);
        *psVar3 = sVar1;
        psVar3[1] = sVar10;
        psVar3[2] = sVar11;
        *piVar14 = 1;
      }
joined_r0x001a6a60:
      if ((uVar17 | 3) < uVar22) {
        uVar13 = uVar13 | 3;
        sVar10 = (short)local_100[uVar13 * 3 + 1];
        sVar1 = (short)local_100[uVar13 * 3];
        sVar11 = (short)local_100[uVar13 * 3 + 2];
        uVar18 = sVar10 * 0x65 + (int)sVar1 + sVar11 * 0x1eef & uVar9;
        uVar19 = (ulong)uVar18;
        piVar14 = (int *)(param_4 + uVar19 * 0x10 + 8);
        iVar20 = *piVar14;
        if (iVar20 != -1) {
          do {
            if ((((uint)*(ushort *)(param_4 + uVar19 * 0x10) == (local_100[uVar13 * 3] & 0xffff)) &&
                (lVar15 = param_4 + uVar19 * 0x10,
                (uint)*(ushort *)(lVar15 + 2) == (local_100[uVar13 * 3 + 1] & 0xffff))) &&
               ((uint)*(ushort *)(lVar15 + 4) == (local_100[uVar13 * 3 + 2] & 0xffff))) {
              piVar14 = (int *)(param_4 + uVar19 * 0x10 + 8);
              *(short *)(param_6 + (uVar17 | 3) * 2) = (short)uVar19;
              iVar20 = iVar20 + 1;
              goto LAB_001a6f24;
            }
            uVar18 = (int)uVar19 + 1U & uVar9;
            uVar19 = (ulong)uVar18;
            piVar14 = (int *)(param_4 + uVar19 * 0x10 + 8);
            iVar20 = *piVar14;
          } while (iVar20 != -1);
        }
        *(short *)(param_6 + (uVar17 | 3) * 2) = (short)uVar18;
        psVar3 = (short *)(param_4 + uVar19 * 0x10);
        iVar20 = 1;
        *psVar3 = sVar1;
        psVar3[1] = sVar10;
        psVar3[2] = sVar11;
LAB_001a6f24:
        *piVar14 = iVar20;
      }
      uVar17 = uVar2;
    } while (uVar2 < uVar4);
  }
  if (param_7 != 0) {
    uVar22 = (ulong)param_7;
    iVar20 = 0;
    piVar14 = (int *)(param_4 + 0xc);
    uVar17 = uVar22;
    do {
      if (piVar14[-1] != -1) {
        *piVar14 = iVar20;
        iVar20 = piVar14[-1] + iVar20;
      }
      piVar14 = piVar14 + 4;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    if (param_7 != 0) {
      if (param_7 == 1) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        piVar14 = (int *)(param_4 + 0x18);
        do {
          if (piVar14[-4] != -1) {
            piVar14[-4] = 0;
          }
          if (*piVar14 != -1) {
            *piVar14 = 0;
          }
          lVar15 = lVar15 + 2;
          piVar14 = piVar14 + 8;
        } while (uVar22 - (uVar22 & 1) != lVar15);
        if ((param_7 & 1) == 0) goto LAB_001a6fe4;
      }
      piVar14 = (int *)(param_4 + lVar15 * 0x10 + 8);
      if (*piVar14 != -1) {
        *piVar14 = 0;
      }
    }
  }
LAB_001a6fe4:
  if (param_3 != 0) {
    uVar17 = 0;
    do {
      lVar15 = param_4 + (ulong)*(ushort *)(param_6 + uVar17 * 2) * 0x10;
      *(int *)(param_5 + (ulong)(uint)(*(int *)(lVar15 + 8) + *(int *)(lVar15 + 0xc)) * 4) =
           (int)uVar17;
      uVar17 = uVar17 + 1;
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    } while (param_3 != uVar17);
  }
  return;
}


