/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c1610; name: FUN_004c1610
 */


void FUN_004c1610(undefined8 param_1,undefined8 param_2,int *param_3,uint param_4,void *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  uint uVar8;
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
  
  fVar16 = cosf((float)param_2);
  fVar17 = cosf((float)param_1);
  local_90 = fVar16 * fVar17;
  fVar18 = sinf((float)param_1);
  fStack_8c = fVar16 * fVar18;
  local_88 = sinf((float)param_2);
  local_a0 = &local_b0 + (ulong)(param_4 << 1) * -3;
  local_98 = (ulong)(param_4 << 1);
  FUN_004c0ae0(param_1,param_2,param_3,&local_90,&local_a0);
  puVar7 = local_a0;
  fVar6 = DAT_01d4c1a0;
  fVar5 = DAT_01d4bd34;
  fVar4 = DAT_01d4bc28;
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(param_5,0,(ulong)param_4 << 2);
  }
  uVar8 = local_98._4_4_;
  if (local_98._4_4_ != 0) {
    uVar10 = 0;
    do {
      while( true ) {
        uVar1 = uVar10 & 0xffff;
        uVar15 = (ulong)uVar1;
        puVar9 = (uint *)(puVar7 + uVar15 * 3);
        uVar2 = *puVar9;
        uVar10 = puVar9[1];
        uVar3 = *param_3 - 1;
        uVar11 = uVar10;
        if (((uVar2 != uVar3) && (uVar11 = uVar2, uVar10 != uVar3)) &&
           (*(uint *)(puVar7 + uVar15 * 3 + 1) != uVar3)) break;
        if (*(uint *)(puVar7 + uVar15 * 3 + 1) != uVar3) {
          uVar10 = *(uint *)(puVar7 + uVar15 * 3 + 1);
        }
        pfVar14 = (float *)(*(long *)(param_3 + 0x12) + (ulong)uVar11 * 0xc);
        pfVar13 = (float *)(*(long *)(param_3 + 0x12) + (ulong)uVar10 * 0xc);
        fVar22 = *pfVar13;
        fVar23 = pfVar13[1];
        fVar19 = *pfVar14;
        fVar20 = pfVar14[1];
        fVar24 = fVar23 * fVar19 - fVar22 * fVar20;
        if (fVar6 <= fVar24) {
LAB_004c1798:
          fVar25 = (1.0 / fVar24) * fVar16 * fVar18;
          fVar24 = (1.0 / fVar24) * fVar16 * fVar17;
          fVar21 = fVar24 * fVar23 - fVar25 * fVar22;
          if ((fVar4 <= fVar21) && (fVar25 = fVar25 * fVar19 - fVar24 * fVar20, fVar4 <= fVar25))
          goto LAB_004c17c4;
        }
        else {
          fVar21 = 0.0;
          fVar25 = 0.0;
          if (fVar24 <= fVar5) goto LAB_004c1798;
LAB_004c17c4:
          fVar19 = fVar25 * fVar25 + fVar21 * fVar21;
          if ((fVar6 <= fVar19) || (fVar19 <= fVar5)) {
            *(float *)((long)param_5 + (ulong)uVar11 * 4) =
                 *(float *)((long)param_5 + (ulong)uVar11 * 4) + fVar21 * fVar21 * (1.0 / fVar19);
            lVar12 = (ulong)uVar10 * 4;
            *(float *)((long)param_5 + lVar12) =
                 *(float *)((long)param_5 + lVar12) + fVar25 * fVar25 * (1.0 / fVar19);
          }
        }
        uVar10 = uVar1 + 1;
        if (uVar8 <= (uVar1 + 1 & 0xffff)) {
          return;
        }
      }
      local_a8 = local_88;
      local_b0 = CONCAT44(fStack_8c,local_90);
      FUN_004c1880(param_3,puVar9,&local_b0,param_5);
      uVar10 = uVar1 + 1;
    } while ((uVar10 & 0xffff) < uVar8);
  }
  return;
}


