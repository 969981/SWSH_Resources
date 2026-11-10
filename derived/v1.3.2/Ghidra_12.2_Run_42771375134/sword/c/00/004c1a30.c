/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c1a30; name: FUN_004c1a30
 */


void FUN_004c1a30(float param_1,float param_2,float param_3,int *param_4,uint param_5,void *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_b0;
  float local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  
  local_a0 = &local_b0 + (ulong)(param_5 << 1) * -3;
  local_98 = (ulong)(param_5 << 1);
  local_90 = param_1;
  fStack_8c = param_2;
  local_88 = param_3;
  fVar16 = atan2f(param_2,param_1);
  fVar17 = asinf(param_3 / SQRT(param_1 * param_1 + param_2 * param_2 + param_3 * param_3));
  fVar19 = fVar17 + DAT_01d4be68;
  if (fVar17 <= DAT_01d4c05c) {
    fVar19 = fVar17;
  }
  fVar18 = fVar19 + DAT_01d4bb38;
  if (DAT_01d4c0d0 <= fVar19) {
    fVar18 = fVar19;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (DAT_01d4c0d0 <= fVar19) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar17) && !NAN(DAT_01d4c05c)) {
      bVar6 = fVar17 < DAT_01d4c05c;
      bVar7 = fVar17 == DAT_01d4c05c;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar18 = fVar17;
  }
  fVar19 = fVar16 + DAT_01d4c5ac;
  if (fVar16 <= DAT_01d4bb38) {
    fVar19 = fVar16;
  }
  fVar17 = fVar19 + DAT_01d4bdf4;
  if (DAT_01d4be68 <= fVar19) {
    fVar17 = fVar19;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (DAT_01d4be68 <= fVar19) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar16) && !NAN(DAT_01d4bb38)) {
      bVar6 = fVar16 < DAT_01d4bb38;
      bVar7 = fVar16 == DAT_01d4bb38;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar17 = fVar16;
  }
  FUN_004c0ae0(fVar17,fVar18,param_4,&local_90,&local_a0);
  puVar4 = local_a0;
  fVar17 = DAT_01d4c1a0;
  fVar16 = DAT_01d4bd34;
  fVar19 = DAT_01d4bc28;
  if (param_5 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(param_6,0,(ulong)param_5 << 2);
  }
  uVar5 = local_98._4_4_;
  if (local_98._4_4_ != 0) {
    uVar10 = 0;
    do {
      while( true ) {
        uVar1 = uVar10 & 0xffff;
        uVar15 = (ulong)uVar1;
        puVar9 = (uint *)(puVar4 + uVar15 * 3);
        uVar2 = *puVar9;
        uVar10 = puVar9[1];
        uVar3 = *param_4 - 1;
        uVar11 = uVar10;
        if (((uVar2 != uVar3) && (uVar11 = uVar2, uVar10 != uVar3)) &&
           (*(uint *)(puVar4 + uVar15 * 3 + 1) != uVar3)) break;
        if (*(uint *)(puVar4 + uVar15 * 3 + 1) != uVar3) {
          uVar10 = *(uint *)(puVar4 + uVar15 * 3 + 1);
        }
        pfVar14 = (float *)(*(long *)(param_4 + 0x12) + (ulong)uVar11 * 0xc);
        pfVar13 = (float *)(*(long *)(param_4 + 0x12) + (ulong)uVar10 * 0xc);
        fVar22 = *pfVar13;
        fVar23 = pfVar13[1];
        fVar18 = *pfVar14;
        fVar20 = pfVar14[1];
        fVar24 = fVar23 * fVar18 - fVar22 * fVar20;
        if (fVar17 <= fVar24) {
LAB_004c1c1c:
          fVar25 = (1.0 / fVar24) * param_2;
          fVar24 = (1.0 / fVar24) * param_1;
          fVar21 = fVar24 * fVar23 - fVar25 * fVar22;
          if ((fVar19 <= fVar21) && (fVar25 = fVar25 * fVar18 - fVar24 * fVar20, fVar19 <= fVar25))
          goto LAB_004c1c48;
        }
        else {
          fVar21 = 0.0;
          fVar25 = 0.0;
          if (fVar24 <= fVar16) goto LAB_004c1c1c;
LAB_004c1c48:
          fVar18 = fVar25 * fVar25 + fVar21 * fVar21;
          if ((fVar17 <= fVar18) || (fVar18 <= fVar16)) {
            *(float *)((long)param_6 + (ulong)uVar11 * 4) =
                 *(float *)((long)param_6 + (ulong)uVar11 * 4) + fVar21 * fVar21 * (1.0 / fVar18);
            lVar12 = (ulong)uVar10 * 4;
            *(float *)((long)param_6 + lVar12) =
                 *(float *)((long)param_6 + lVar12) + fVar25 * fVar25 * (1.0 / fVar18);
          }
        }
        uVar10 = uVar1 + 1;
        if (uVar5 <= (uVar1 + 1 & 0xffff)) {
          return;
        }
      }
      local_a8 = local_88;
      local_b0 = CONCAT44(fStack_8c,local_90);
      FUN_004c1880(param_4,puVar9,&local_b0,param_6);
      uVar10 = uVar1 + 1;
    } while ((uVar10 & 0xffff) < uVar5);
  }
  return;
}


