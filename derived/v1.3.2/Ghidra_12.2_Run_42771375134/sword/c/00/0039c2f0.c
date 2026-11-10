/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039c2f0; name: FUN_0039c2f0
 */


undefined8
FUN_0039c2f0(undefined8 param_1,long param_2,long param_3,long *param_4,undefined1 (*param_5) [16],
            undefined8 *param_6)

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint *puVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 auVar38 [16];
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 auStack_864 [4];
  long local_860 [256];
  
  lVar20 = param_4[2];
  uVar19 = 1;
  local_860[0] = lVar20;
  do {
    while( true ) {
      uVar19 = uVar19 - 1;
      puVar17 = (undefined8 *)local_860[uVar19];
      fVar2 = (float)*puVar17;
      fVar4 = (float)((ulong)*puVar17 >> 0x20);
      auVar38 = *param_5;
      uVar9 = *(undefined8 *)(param_5[1] + 8);
      uVar30 = (undefined1)uVar9;
      uVar31 = (undefined1)((ulong)uVar9 >> 8);
      uVar32 = (undefined1)((ulong)uVar9 >> 0x10);
      uVar33 = (undefined1)((ulong)uVar9 >> 0x18);
      uVar34 = (undefined1)((ulong)uVar9 >> 0x20);
      uVar35 = (undefined1)((ulong)uVar9 >> 0x28);
      uVar36 = (undefined1)((ulong)uVar9 >> 0x30);
      uVar37 = (undefined1)((ulong)uVar9 >> 0x38);
      uVar7 = *(undefined8 *)param_5[1];
      uVar22 = (undefined1)uVar7;
      uVar23 = (undefined1)((ulong)uVar7 >> 8);
      uVar24 = (undefined1)((ulong)uVar7 >> 0x10);
      uVar25 = (undefined1)((ulong)uVar7 >> 0x18);
      uVar26 = (undefined1)((ulong)uVar7 >> 0x20);
      uVar27 = (undefined1)((ulong)uVar7 >> 0x28);
      uVar28 = (undefined1)((ulong)uVar7 >> 0x30);
      uVar29 = (undefined1)((ulong)uVar7 >> 0x38);
      fVar5 = (float)((ulong)uVar7 >> 0x20);
      fVar6 = (float)((ulong)uVar9 >> 0x20);
      iVar21 = -(uint)(ABS((fVar2 + *(float *)((long)puVar17 + 0xc)) * 0.5 - auVar38._0_4_) <=
                      (*(float *)((long)puVar17 + 0xc) - fVar2) * 0.5 + (float)uVar7);
      iVar14 = -(uint)(ABS((fVar4 + *(float *)(puVar17 + 2)) * 0.5 - auVar38._4_4_) <=
                      (*(float *)(puVar17 + 2) - fVar4) * 0.5 + fVar5);
      uVar39 = (undefined1)iVar14;
      uVar40 = (undefined1)((uint)iVar14 >> 8);
      uVar41 = (undefined1)((uint)iVar14 >> 0x10);
      uVar42 = (undefined1)((uint)iVar14 >> 0x18);
      iVar14 = -(uint)(ABS(((float)puVar17[1] + *(float *)((long)puVar17 + 0x14)) * 0.5 -
                           auVar38._8_4_) <=
                      (*(float *)((long)puVar17 + 0x14) - (float)puVar17[1]) * 0.5 + (float)uVar9);
      uVar43 = (undefined1)iVar14;
      uVar44 = (undefined1)((uint)iVar14 >> 8);
      uVar45 = (undefined1)((uint)iVar14 >> 0x10);
      uVar46 = (undefined1)((uint)iVar14 >> 0x18);
      iVar14 = -(uint)(ABS(0.0 - auVar38._12_4_) <= fVar6 + 0.0);
      uVar47 = (undefined1)((uint)iVar14 >> 8);
      uVar48 = (undefined1)((uint)iVar14 >> 0x10);
      uVar49 = (undefined1)((uint)iVar14 >> 0x18);
      auVar10[4] = uVar39;
      auVar10._0_4_ = iVar21;
      auVar10[5] = uVar40;
      auVar10[6] = uVar41;
      auVar10[7] = uVar42;
      auVar10[8] = uVar43;
      auVar10[9] = uVar44;
      auVar10[10] = uVar45;
      auVar10[0xb] = uVar46;
      auVar10[0xc] = (char)iVar14;
      auVar10[0xd] = uVar47;
      auVar10[0xe] = uVar48;
      auVar10[0xf] = uVar49;
      auVar11[4] = uVar39;
      auVar11._0_4_ = iVar21;
      auVar11[5] = uVar40;
      auVar11[6] = uVar41;
      auVar11[7] = uVar42;
      auVar11[8] = uVar43;
      auVar11[9] = uVar44;
      auVar11[10] = uVar45;
      auVar11[0xb] = uVar46;
      auVar11[0xc] = (char)iVar14;
      auVar11[0xd] = uVar47;
      auVar11[0xe] = uVar48;
      auVar11[0xf] = uVar49;
      NEON_ext(auVar10,auVar11,8,1);
      if (CONCAT12(uVar43,CONCAT11(uVar39,(char)iVar21)) == -1) break;
LAB_0039c41c:
      if (uVar19 == 0) {
        return 1;
      }
    }
    while (uVar15 = *(uint *)(puVar17 + 3), (uVar15 & 1) == 0) {
      puVar17 = (undefined8 *)(lVar20 + (ulong)(uVar15 >> 1) * 0x1c);
      local_860[uVar19] = (long)puVar17 + 0x1c;
      fVar2 = (float)*puVar17;
      fVar4 = (float)((ulong)*puVar17 >> 0x20);
      uVar19 = uVar19 + 1;
      iVar21 = -(uint)(ABS((fVar2 + *(float *)((long)puVar17 + 0xc)) * 0.5 - auVar38._0_4_) <=
                      (*(float *)((long)puVar17 + 0xc) - fVar2) * 0.5 + (float)uVar7);
      iVar14 = -(uint)(ABS((fVar4 + *(float *)(puVar17 + 2)) * 0.5 - auVar38._4_4_) <=
                      (*(float *)(puVar17 + 2) - fVar4) * 0.5 + fVar5);
      uVar39 = (undefined1)iVar14;
      uVar40 = (undefined1)((uint)iVar14 >> 8);
      uVar41 = (undefined1)((uint)iVar14 >> 0x10);
      uVar42 = (undefined1)((uint)iVar14 >> 0x18);
      iVar14 = -(uint)(ABS(((float)puVar17[1] + *(float *)((long)puVar17 + 0x14)) * 0.5 -
                           auVar38._8_4_) <=
                      (*(float *)((long)puVar17 + 0x14) - (float)puVar17[1]) * 0.5 + (float)uVar9);
      uVar43 = (undefined1)iVar14;
      uVar44 = (undefined1)((uint)iVar14 >> 8);
      uVar45 = (undefined1)((uint)iVar14 >> 0x10);
      uVar46 = (undefined1)((uint)iVar14 >> 0x18);
      iVar14 = -(uint)(ABS(0.0 - auVar38._12_4_) <= fVar6 + 0.0);
      uVar47 = (undefined1)((uint)iVar14 >> 8);
      uVar48 = (undefined1)((uint)iVar14 >> 0x10);
      uVar49 = (undefined1)((uint)iVar14 >> 0x18);
      auVar12[4] = uVar39;
      auVar12._0_4_ = iVar21;
      auVar12[5] = uVar40;
      auVar12[6] = uVar41;
      auVar12[7] = uVar42;
      auVar12[8] = uVar43;
      auVar12[9] = uVar44;
      auVar12[10] = uVar45;
      auVar12[0xb] = uVar46;
      auVar12[0xc] = (char)iVar14;
      auVar12[0xd] = uVar47;
      auVar12[0xe] = uVar48;
      auVar12[0xf] = uVar49;
      auVar13[4] = uVar39;
      auVar13._0_4_ = iVar21;
      auVar13[5] = uVar40;
      auVar13[6] = uVar41;
      auVar13[7] = uVar42;
      auVar13[8] = uVar43;
      auVar13[9] = uVar44;
      auVar13[10] = uVar45;
      auVar13[0xb] = uVar46;
      auVar13[0xc] = (char)iVar14;
      auVar13[0xd] = uVar47;
      auVar13[0xe] = uVar48;
      auVar13[0xf] = uVar49;
      NEON_ext(auVar12,auVar13,8,1);
      if (CONCAT12(uVar43,CONCAT11(uVar39,(char)iVar21)) != -1) goto LAB_0039c41c;
    }
    uVar1 = uVar15 >> 1 & 0xf;
    puVar18 = (uint *)(*param_4 + (ulong)(uVar15 >> 5) * 4);
    if (uVar1 == 1) {
      uVar16 = (**(code **)*param_6)(param_6,auStack_864,param_2 + (ulong)*puVar18 * 0x10);
      if ((uVar16 & 1) == 0) {
        return 0;
      }
      goto LAB_0039c41c;
    }
    if (uVar1 != 0) {
      iVar21 = -uVar1;
      while( true ) {
        iVar21 = iVar21 + 1;
        puVar17 = (undefined8 *)(param_3 + (ulong)*puVar18 * 0x18);
        fVar2 = (float)*puVar17;
        fVar4 = (float)((ulong)*puVar17 >> 0x20);
        iVar14 = -(uint)(ABS((fVar2 + *(float *)((long)puVar17 + 0xc)) * 0.5 - auVar38._0_4_) <=
                        (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))) +
                        (*(float *)((long)puVar17 + 0xc) - fVar2) * 0.5);
        iVar8 = -(uint)(ABS((fVar4 + *(float *)(puVar17 + 2)) * 0.5 - auVar38._4_4_) <=
                       (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) +
                       (*(float *)(puVar17 + 2) - fVar4) * 0.5);
        uVar22 = (undefined1)iVar8;
        uVar23 = (undefined1)((uint)iVar8 >> 8);
        uVar24 = (undefined1)((uint)iVar8 >> 0x10);
        uVar25 = (undefined1)((uint)iVar8 >> 0x18);
        iVar8 = -(uint)(ABS(((float)puVar17[1] + *(float *)((long)puVar17 + 0x14)) * 0.5 -
                            auVar38._8_4_) <=
                       (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) +
                       (*(float *)((long)puVar17 + 0x14) - (float)puVar17[1]) * 0.5);
        uVar26 = (undefined1)iVar8;
        uVar27 = (undefined1)((uint)iVar8 >> 8);
        uVar28 = (undefined1)((uint)iVar8 >> 0x10);
        uVar29 = (undefined1)((uint)iVar8 >> 0x18);
        iVar8 = -(uint)(ABS(0.0 - auVar38._12_4_) <=
                       (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34))) + 0.0);
        uVar30 = (undefined1)((uint)iVar8 >> 8);
        uVar31 = (undefined1)((uint)iVar8 >> 0x10);
        uVar32 = (undefined1)((uint)iVar8 >> 0x18);
        auVar38[4] = uVar22;
        auVar38._0_4_ = iVar14;
        auVar38[5] = uVar23;
        auVar38[6] = uVar24;
        auVar38[7] = uVar25;
        auVar38[8] = uVar26;
        auVar38[9] = uVar27;
        auVar38[10] = uVar28;
        auVar38[0xb] = uVar29;
        auVar38[0xc] = (char)iVar8;
        auVar38[0xd] = uVar30;
        auVar38[0xe] = uVar31;
        auVar38[0xf] = uVar32;
        auVar3[4] = uVar22;
        auVar3._0_4_ = iVar14;
        auVar3[5] = uVar23;
        auVar3[6] = uVar24;
        auVar3[7] = uVar25;
        auVar3[8] = uVar26;
        auVar3[9] = uVar27;
        auVar3[10] = uVar28;
        auVar3[0xb] = uVar29;
        auVar3[0xc] = (char)iVar8;
        auVar3[0xd] = uVar30;
        auVar3[0xe] = uVar31;
        auVar3[0xf] = uVar32;
        NEON_ext(auVar38,auVar3,8,1);
        if (CONCAT12(uVar26,CONCAT11(uVar22,(char)iVar14)) == -1) {
          uVar15 = (**(code **)*param_6)(param_6,auStack_864,param_2 + (ulong)*puVar18 * 0x10);
          if (((~uVar15 & 1) != 6) && ((~uVar15 & 1) != 0)) {
            return 0;
          }
        }
        if (iVar21 == 0) break;
        auVar38 = *param_5;
        uVar7 = *(undefined8 *)(param_5[1] + 8);
        uVar30 = (undefined1)uVar7;
        uVar31 = (undefined1)((ulong)uVar7 >> 8);
        uVar32 = (undefined1)((ulong)uVar7 >> 0x10);
        uVar33 = (undefined1)((ulong)uVar7 >> 0x18);
        uVar34 = (undefined1)((ulong)uVar7 >> 0x20);
        uVar35 = (undefined1)((ulong)uVar7 >> 0x28);
        uVar36 = (undefined1)((ulong)uVar7 >> 0x30);
        uVar37 = (undefined1)((ulong)uVar7 >> 0x38);
        uVar7 = *(undefined8 *)param_5[1];
        uVar22 = (undefined1)uVar7;
        uVar23 = (undefined1)((ulong)uVar7 >> 8);
        uVar24 = (undefined1)((ulong)uVar7 >> 0x10);
        uVar25 = (undefined1)((ulong)uVar7 >> 0x18);
        uVar26 = (undefined1)((ulong)uVar7 >> 0x20);
        uVar27 = (undefined1)((ulong)uVar7 >> 0x28);
        uVar28 = (undefined1)((ulong)uVar7 >> 0x30);
        uVar29 = (undefined1)((ulong)uVar7 >> 0x38);
        puVar18 = puVar18 + 1;
      }
    }
    if (uVar19 == 0) {
      return 1;
    }
  } while( true );
}


