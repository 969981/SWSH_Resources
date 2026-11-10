/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0025ae40; name: FUN_0025ae40
 */


void FUN_0025ae40(long param_1,float *param_2,long param_3,long param_4,long param_5,long param_6)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  uint local_408 [254];
  
  *(undefined1 *)(param_1 + 0x36) = 1;
  uVar16 = (uint)*(char *)(param_1 + 0x30);
  lVar13 = 0;
  iVar17 = 1;
  local_408[0] = (int)*(char *)(param_1 + 0x30);
  while( true ) {
    iVar12 = (int)lVar13;
    pfVar15 = *(float **)(local_408 + (long)iVar12 * 4 + -2);
    if (*(char *)((long)pfVar15 + 0x36) == '\0') {
      lVar13 = (long)*(char *)((long)pfVar15 + 0x33) * 0x10;
      puVar3 = (undefined8 *)(param_3 + lVar13);
      uVar11 = puVar3[1];
      uVar10 = *puVar3;
      pfVar4 = (float *)(param_4 + lVar13);
      fVar18 = *pfVar15 * (*param_2 - ((float)uVar10 - *pfVar4));
      fVar19 = pfVar15[1] * (param_2[1] - ((float)((ulong)uVar10 >> 0x20) - pfVar4[1]));
      fVar20 = pfVar15[2] * (param_2[2] - ((float)uVar11 - pfVar4[2]));
      fVar21 = pfVar15[3] * (param_2[3] - ((float)((ulong)uVar11 >> 0x20) - pfVar4[3]));
      auVar22._4_4_ = fVar19;
      auVar22._0_4_ = fVar18;
      auVar22._8_4_ = fVar20;
      auVar22._12_4_ = fVar21;
      auVar9._4_4_ = fVar19;
      auVar9._0_4_ = fVar18;
      auVar9._8_4_ = fVar20;
      auVar9._12_4_ = fVar21;
      auVar22 = NEON_ext(auVar22,auVar9,8,1);
      if (fVar18 + fVar19 + auVar22._0_4_ + auVar22._4_4_ < 0.0) {
        puVar3 = (undefined8 *)(param_5 + (ulong)*(uint *)(param_5 + 0x200) * 0x10);
        *(uint *)(param_5 + 0x200) = *(uint *)(param_5 + 0x200) + 1;
        *puVar3 = pfVar15;
        *(uint *)(puVar3 + 1) = uVar16;
      }
      else {
        *(undefined1 *)((long)pfVar15 + 0x36) = 1;
        uVar14 = (ulong)*(uint *)(&DAT_01d4d2d0 + (ulong)uVar16 * 4);
        cVar2 = *(char *)((long)pfVar15 + (ulong)*(uint *)(&DAT_01d4d2d0 + uVar14 * 4) + 0x30);
        *(undefined8 *)(local_408 + (long)iVar12 * 4 + -2) =
             *(undefined8 *)(pfVar15 + (ulong)*(uint *)(&DAT_01d4d2d0 + uVar14 * 4) * 2 + 6);
        local_408[(long)iVar12 * 4] = (int)cVar2;
        cVar2 = *(char *)((long)pfVar15 + uVar14 + 0x30);
        *(undefined8 *)(local_408 + (long)iVar17 * 4 + -2) =
             *(undefined8 *)(pfVar15 + uVar14 * 2 + 6);
        local_408[(long)iVar17 * 4] = (int)cVar2;
        iVar12 = iVar17 + 1;
        if (*(char *)((long)pfVar15 + 0x37) == '\0') {
          bVar1 = *(byte *)(pfVar15 + 0xe);
          uVar16 = *(uint *)(param_6 + 0x208);
          *(uint *)(param_6 + 0x208) = uVar16 + 1;
          *(uint *)(param_6 + (ulong)uVar16 * 4 + 0x108) = (uint)bVar1;
        }
      }
    }
    iVar17 = iVar12;
    if (iVar17 == 0) break;
    lVar13 = (long)iVar17 + -1;
    uVar16 = local_408[lVar13 * 4];
  }
  uVar16 = (uint)*(char *)(param_1 + 0x31);
  lVar13 = 0;
  iVar17 = 1;
  local_408[0] = (int)*(char *)(param_1 + 0x31);
  while( true ) {
    iVar12 = (int)lVar13;
    pfVar15 = *(float **)(local_408 + (long)iVar12 * 4 + -2);
    if (*(char *)((long)pfVar15 + 0x36) == '\0') {
      lVar13 = (long)*(char *)((long)pfVar15 + 0x33) * 0x10;
      puVar3 = (undefined8 *)(param_3 + lVar13);
      uVar11 = puVar3[1];
      uVar10 = *puVar3;
      pfVar4 = (float *)(param_4 + lVar13);
      fVar18 = *pfVar15 * (*param_2 - ((float)uVar10 - *pfVar4));
      fVar19 = pfVar15[1] * (param_2[1] - ((float)((ulong)uVar10 >> 0x20) - pfVar4[1]));
      fVar20 = pfVar15[2] * (param_2[2] - ((float)uVar11 - pfVar4[2]));
      fVar21 = pfVar15[3] * (param_2[3] - ((float)((ulong)uVar11 >> 0x20) - pfVar4[3]));
      auVar5._4_4_ = fVar19;
      auVar5._0_4_ = fVar18;
      auVar5._8_4_ = fVar20;
      auVar5._12_4_ = fVar21;
      auVar6._4_4_ = fVar19;
      auVar6._0_4_ = fVar18;
      auVar6._8_4_ = fVar20;
      auVar6._12_4_ = fVar21;
      auVar22 = NEON_ext(auVar5,auVar6,8,1);
      if (fVar18 + fVar19 + auVar22._0_4_ + auVar22._4_4_ < 0.0) {
        puVar3 = (undefined8 *)(param_5 + (ulong)*(uint *)(param_5 + 0x200) * 0x10);
        *(uint *)(param_5 + 0x200) = *(uint *)(param_5 + 0x200) + 1;
        *puVar3 = pfVar15;
        *(uint *)(puVar3 + 1) = uVar16;
      }
      else {
        *(undefined1 *)((long)pfVar15 + 0x36) = 1;
        uVar14 = (ulong)*(uint *)(&DAT_01d4d2d0 + (ulong)uVar16 * 4);
        cVar2 = *(char *)((long)pfVar15 + (ulong)*(uint *)(&DAT_01d4d2d0 + uVar14 * 4) + 0x30);
        *(undefined8 *)(local_408 + (long)iVar12 * 4 + -2) =
             *(undefined8 *)(pfVar15 + (ulong)*(uint *)(&DAT_01d4d2d0 + uVar14 * 4) * 2 + 6);
        local_408[(long)iVar12 * 4] = (int)cVar2;
        cVar2 = *(char *)((long)pfVar15 + uVar14 + 0x30);
        *(undefined8 *)(local_408 + (long)iVar17 * 4 + -2) =
             *(undefined8 *)(pfVar15 + uVar14 * 2 + 6);
        local_408[(long)iVar17 * 4] = (int)cVar2;
        iVar12 = iVar17 + 1;
        if (*(char *)((long)pfVar15 + 0x37) == '\0') {
          uVar16 = *(uint *)(param_6 + 0x208);
          bVar1 = *(byte *)(pfVar15 + 0xe);
          *(uint *)(param_6 + 0x208) = uVar16 + 1;
          *(uint *)(param_6 + (ulong)uVar16 * 4 + 0x108) = (uint)bVar1;
        }
      }
    }
    iVar17 = iVar12;
    if (iVar17 == 0) break;
    lVar13 = (long)iVar17 + -1;
    uVar16 = local_408[lVar13 * 4];
  }
  uVar16 = (uint)*(char *)(param_1 + 0x32);
  lVar13 = 0;
  iVar17 = 1;
  local_408[0] = (int)*(char *)(param_1 + 0x32);
  while( true ) {
    iVar12 = (int)lVar13;
    pfVar15 = *(float **)(local_408 + (long)iVar12 * 4 + -2);
    if (*(char *)((long)pfVar15 + 0x36) == '\0') {
      lVar13 = (long)*(char *)((long)pfVar15 + 0x33) * 0x10;
      puVar3 = (undefined8 *)(param_3 + lVar13);
      uVar11 = puVar3[1];
      uVar10 = *puVar3;
      pfVar4 = (float *)(param_4 + lVar13);
      fVar18 = *pfVar15 * (*param_2 - ((float)uVar10 - *pfVar4));
      fVar19 = pfVar15[1] * (param_2[1] - ((float)((ulong)uVar10 >> 0x20) - pfVar4[1]));
      fVar20 = pfVar15[2] * (param_2[2] - ((float)uVar11 - pfVar4[2]));
      fVar21 = pfVar15[3] * (param_2[3] - ((float)((ulong)uVar11 >> 0x20) - pfVar4[3]));
      auVar7._4_4_ = fVar19;
      auVar7._0_4_ = fVar18;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = fVar21;
      auVar8._4_4_ = fVar19;
      auVar8._0_4_ = fVar18;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = fVar21;
      auVar22 = NEON_ext(auVar7,auVar8,8,1);
      if (fVar18 + fVar19 + auVar22._0_4_ + auVar22._4_4_ < 0.0) {
        puVar3 = (undefined8 *)(param_5 + (ulong)*(uint *)(param_5 + 0x200) * 0x10);
        *(uint *)(param_5 + 0x200) = *(uint *)(param_5 + 0x200) + 1;
        *puVar3 = pfVar15;
        *(uint *)(puVar3 + 1) = uVar16;
      }
      else {
        *(undefined1 *)((long)pfVar15 + 0x36) = 1;
        uVar14 = (ulong)*(uint *)(&DAT_01d4d2d0 + (ulong)uVar16 * 4);
        cVar2 = *(char *)((long)pfVar15 + (ulong)*(uint *)(&DAT_01d4d2d0 + uVar14 * 4) + 0x30);
        *(undefined8 *)(local_408 + (long)iVar12 * 4 + -2) =
             *(undefined8 *)(pfVar15 + (ulong)*(uint *)(&DAT_01d4d2d0 + uVar14 * 4) * 2 + 6);
        local_408[(long)iVar12 * 4] = (int)cVar2;
        cVar2 = *(char *)((long)pfVar15 + uVar14 + 0x30);
        *(undefined8 *)(local_408 + (long)iVar17 * 4 + -2) =
             *(undefined8 *)(pfVar15 + uVar14 * 2 + 6);
        local_408[(long)iVar17 * 4] = (int)cVar2;
        iVar12 = iVar17 + 1;
        if (*(char *)((long)pfVar15 + 0x37) == '\0') {
          uVar16 = *(uint *)(param_6 + 0x208);
          bVar1 = *(byte *)(pfVar15 + 0xe);
          *(uint *)(param_6 + 0x208) = uVar16 + 1;
          *(uint *)(param_6 + (ulong)uVar16 * 4 + 0x108) = (uint)bVar1;
        }
      }
    }
    iVar17 = iVar12;
    if (iVar17 == 0) break;
    lVar13 = (long)iVar17 + -1;
    uVar16 = local_408[lVar13 * 4];
  }
  return;
}


