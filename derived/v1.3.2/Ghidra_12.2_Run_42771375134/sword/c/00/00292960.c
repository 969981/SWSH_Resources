/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00292960; name: FUN_00292960
 */


void FUN_00292960(long param_1,long param_2,int param_3,long param_4,uint param_5,undefined8 param_6
                 ,undefined8 *param_7,undefined4 param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  byte bVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  ulong uVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  void *__src;
  float fVar26;
  float fVar28;
  ulong uVar27;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  ulong uVar35;
  undefined1 auVar36 [16];
  float fVar37;
  undefined8 uVar38;
  float fVar40;
  undefined8 uVar39;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 local_78;
  int local_70;
  int iStack_6c;
  
  if (*(char *)(param_1 + 0x3e) == '\0') {
    if (param_5 == 0) {
      return;
    }
    bVar14 = 0;
    uVar23 = 0;
    do {
      while (lVar19 = *(long *)(param_4 + uVar23 * 8), *(long *)(lVar19 + 0x20) != lVar19) {
        uVar23 = uVar23 + 1;
        if (param_5 <= uVar23) {
          return;
        }
      }
      if (5 < bVar14) {
        return;
      }
      uVar29 = FUN_00292e30(param_1 + (ulong)*(byte *)(param_1 + 0x38 + (ulong)(uint)bVar14) * 400 +
                            0x40,param_2,param_3,lVar19,param_8);
      bVar14 = *(byte *)(param_1 + 0x3e) + 1;
      *(undefined4 *)
       (param_1 + (ulong)*(byte *)(param_1 + 0x38 + (ulong)*(byte *)(param_1 + 0x3e)) * 4 + 0x20) =
           uVar29;
      *(byte *)(param_1 + 0x3e) = bVar14;
      uVar23 = uVar23 + 1;
    } while (uVar23 < param_5);
    return;
  }
  local_80 = &local_a0;
  local_90 = 0;
  uStack_88 = 0;
  local_78 = 0x7f7fffff7f7fffff;
  if (param_5 == 0) {
    return;
  }
  uVar23 = 0;
LAB_002929f8:
  while (puVar24 = *(undefined8 **)(param_4 + uVar23 * 8), (undefined8 *)puVar24[4] != puVar24) {
    uVar23 = uVar23 + 1;
    if (param_5 <= uVar23) {
      return;
    }
  }
  uVar15 = (ulong)*(byte *)(param_1 + 0x3e);
  if (uVar15 != 0) {
    uVar17 = 0;
LAB_00292a30:
    pbVar25 = (byte *)(param_1 + uVar17 + 0x38);
    uVar18 = (ulong)*pbVar25;
    lVar19 = param_1 + uVar18 * 400;
    fVar32 = (float)*(undefined8 *)(lVar19 + 0x68);
    fVar30 = (float)*(undefined8 *)(lVar19 + 0x60);
    fVar31 = (float)((ulong)*(undefined8 *)(lVar19 + 0x60) >> 0x20);
    uVar16 = *(uint *)(lVar19 + 0x1c0);
    if (1 < uVar16) {
      uVar4 = uVar16 + 3 & 3;
      if ((ulong)uVar16 - 2 < 3) {
        lVar21 = 1;
      }
      else {
        pfVar22 = (float *)(param_1 + 0xe0 + uVar18 * 400);
        lVar21 = 1;
        do {
          pfVar3 = pfVar22 + -0x10;
          pfVar6 = pfVar22 + -0xf;
          pfVar7 = pfVar22 + -0xe;
          fVar26 = *pfVar22;
          pfVar8 = pfVar22 + 1;
          pfVar9 = pfVar22 + 2;
          pfVar1 = pfVar22 + 0x10;
          pfVar10 = pfVar22 + 0x11;
          pfVar11 = pfVar22 + 0x12;
          pfVar2 = pfVar22 + 0x20;
          pfVar12 = pfVar22 + 0x21;
          pfVar13 = pfVar22 + 0x22;
          pfVar22 = pfVar22 + 0x40;
          lVar21 = lVar21 + 4;
          fVar30 = fVar30 + *pfVar3 + fVar26 + *pfVar1 + *pfVar2;
          fVar31 = fVar31 + *pfVar6 + *pfVar8 + *pfVar10 + *pfVar12;
          fVar32 = fVar32 + *pfVar7 + *pfVar9 + *pfVar11 + *pfVar13;
        } while ((ulong)uVar16 - (ulong)uVar4 != lVar21);
      }
      if (uVar4 != 0) {
        lVar20 = -(ulong)uVar4;
        pfVar22 = (float *)(param_1 + 0x60 + (uVar18 * 0x19 + lVar21 * 4) * 0x10);
        do {
          lVar20 = lVar20 + 1;
          fVar30 = fVar30 + *pfVar22;
          fVar31 = fVar31 + pfVar22[1];
          fVar32 = fVar32 + pfVar22[2];
          pfVar22 = pfVar22 + 0x10;
        } while (lVar20 != 0);
      }
    }
    auVar34._0_4_ = fVar30 * fVar30;
    auVar34._4_4_ = fVar31 * fVar31;
    auVar34._8_4_ = fVar32 * fVar32;
    auVar34._12_4_ = 0;
    auVar36 = NEON_ext(auVar34,auVar34,8,1);
    fVar28 = auVar36._0_4_ + auVar36._4_4_;
    fVar26 = auVar34._0_4_ + auVar34._4_4_ + fVar28;
    fVar28 = auVar34._0_4_ + auVar34._4_4_ + fVar28;
    uVar27 = CONCAT44(fVar28,fVar26);
    uVar38 = NEON_frsqrte(uVar27,4);
    fVar37 = (float)uVar38;
    fVar40 = (float)((ulong)uVar38 >> 0x20);
    uVar38 = NEON_frsqrts(CONCAT44(fVar40 * fVar40,fVar37 * fVar37),uVar27,4);
    fVar37 = fVar37 * (float)uVar38;
    fVar40 = fVar40 * (float)((ulong)uVar38 >> 0x20);
    uVar38 = NEON_frsqrts(CONCAT44(fVar40 * fVar40,fVar37 * fVar37),uVar27,4);
    fVar37 = fVar37 * (float)uVar38;
    fVar40 = fVar40 * (float)((ulong)uVar38 >> 0x20);
    uVar38 = NEON_frsqrts(CONCAT44(fVar40 * fVar40,fVar37 * fVar37),uVar27,4);
    fVar37 = fVar37 * (float)uVar38;
    fVar40 = fVar40 * (float)((ulong)uVar38 >> 0x20);
    uVar38 = NEON_frsqrts(CONCAT44(fVar40 * fVar40,fVar37 * fVar37),uVar27,4);
    uVar35 = CONCAT44(fVar28 * fVar40 * (float)((ulong)uVar38 >> 0x20),
                      fVar26 * fVar37 * (float)uVar38);
    uVar35 = uVar35 ^ (uVar35 ^ uVar27) & CONCAT44(-(uint)(fVar26 == 0.0),-(uint)(fVar26 == 0.0));
    uVar38 = NEON_frecpe(uVar35,4);
    uVar39 = NEON_frecps(uVar35,uVar38,4);
    fVar33 = (float)uVar38 * (float)uVar39;
    fVar26 = (float)((ulong)uVar38 >> 0x20) * (float)((ulong)uVar39 >> 0x20);
    uVar38 = NEON_frecps(uVar35,CONCAT44(fVar26,fVar33),4);
    fVar33 = fVar33 * (float)uVar38;
    fVar26 = fVar26 * (float)((ulong)uVar38 >> 0x20);
    uVar38 = NEON_frecps(uVar35,CONCAT44(fVar26,fVar33),4);
    fVar33 = fVar33 * (float)uVar38;
    fVar26 = fVar26 * (float)((ulong)uVar38 >> 0x20);
    uVar38 = NEON_frecps(uVar35,CONCAT44(fVar26,fVar33),4);
    fVar33 = fVar33 * (float)uVar38;
    uVar38 = NEON_frecps(uVar35,CONCAT44(fVar26 * (float)((ulong)uVar38 >> 0x20),fVar33),4);
    fVar33 = fVar33 * (float)uVar38;
    fVar26 = (float)*puVar24 * fVar30 * fVar33;
    fVar28 = (float)((ulong)*puVar24 >> 0x20) * fVar31 * fVar33;
    fVar37 = (float)puVar24[1] * fVar32 * fVar33;
    fVar40 = (float)((ulong)puVar24[1] >> 0x20) * 0.0;
    auVar36._4_4_ = fVar28;
    auVar36._0_4_ = fVar26;
    auVar36._8_4_ = fVar37;
    auVar36._12_4_ = fVar40;
    auVar5._4_4_ = fVar28;
    auVar5._0_4_ = fVar26;
    auVar5._8_4_ = fVar37;
    auVar5._12_4_ = fVar40;
    auVar36 = NEON_ext(auVar36,auVar5,8,1);
    if (fVar26 + fVar28 + auVar36._0_4_ + auVar36._4_4_ < (float)*param_7) goto code_r0x00292b74;
    if (uVar16 == 0) {
      uVar16 = 0;
    }
    else {
      uVar15 = 0;
      __src = (void *)(param_1 + 0x40 + uVar18 * 400);
      do {
        memcpy((void *)(param_2 + (ulong)(uint)(param_3 + (int)uVar15) * 0x40),__src,0x34);
        uVar16 = *(uint *)(lVar19 + 0x1c0);
        uVar15 = uVar15 + 1;
        __src = (void *)((long)__src + 0x40);
      } while (uVar15 < uVar16);
    }
    iStack_6c = uVar16 + param_3;
    local_90 = 0;
    uStack_98 = (ulong)(uint)(fVar32 * fVar33);
    *(undefined8 **)(puVar24[3] + 0x10) = &local_a0;
    *(uint *)(puVar24 + 7) = *(int *)(puVar24 + 7) + uVar16;
    uVar29 = *(undefined4 *)(param_1 + 0x20 + (ulong)*pbVar25 * 4);
    uVar38 = NEON_fmin(puVar24[5],CONCAT44(uVar29,uVar29),4);
    puVar24[5] = uVar38;
    local_a0 = CONCAT44(fVar31 * fVar33,fVar30 * fVar33);
    local_80 = puVar24;
    local_70 = param_3;
    uVar29 = FUN_00292e30(param_1 + uVar18 * 400 + 0x40,param_2,*(uint *)(lVar19 + 0x1c0) + param_3,
                          puVar24,param_8);
    *(undefined4 *)(param_1 + 0x20 + (ulong)*pbVar25 * 4) = uVar29;
    goto joined_r0x00292cdc;
  }
  goto LAB_00292b8c;
code_r0x00292b74:
  uVar17 = uVar17 + 1;
  if (uVar15 <= uVar17) goto code_r0x00292b80;
  goto LAB_00292a30;
code_r0x00292b80:
  if (5 < *(byte *)(param_1 + 0x3e)) {
    uVar23 = 0;
    lVar19 = 0x39;
    do {
      uVar16 = (int)lVar19 - 0x38;
      if (*(float *)(param_1 + 0x20 + (ulong)*(byte *)(param_1 + lVar19) * 4) <=
          *(float *)(param_1 + 0x20 + (ulong)*(byte *)(param_1 + uVar23 + 0x38) * 4)) {
        uVar16 = (uint)uVar23;
      }
      uVar23 = (ulong)uVar16;
      uVar17 = lVar19 - 0x37;
      lVar19 = lVar19 + 1;
    } while (uVar17 < uVar15);
    uVar15 = (ulong)*(byte *)(param_1 + uVar23 + 0x38);
    if ((float)puVar24[5] < *(float *)(param_1 + uVar15 * 4 + 0x20)) {
      lVar19 = param_1 + uVar15 * 400;
      *(undefined4 *)(lVar19 + 0x1c0) = 0;
      uVar29 = FUN_00292e30(lVar19 + 0x40,param_2,param_3,puVar24,param_8);
      *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + uVar23 + 0x38) * 4 + 0x20) = uVar29;
    }
    return;
  }
LAB_00292b8c:
  uVar29 = FUN_00292e30(param_1 + (ulong)*(byte *)(param_1 + 0x38 + uVar15) * 400 + 0x40,param_2,
                        param_3,puVar24,param_8);
  bVar14 = *(byte *)(param_1 + 0x3e);
  *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0x38 + (ulong)bVar14) * 4 + 0x20) = uVar29;
  *(byte *)(param_1 + 0x3e) = bVar14 + 1;
joined_r0x00292cdc:
  uVar23 = uVar23 + 1;
  if (param_5 <= uVar23) {
    return;
  }
  goto LAB_002929f8;
}


