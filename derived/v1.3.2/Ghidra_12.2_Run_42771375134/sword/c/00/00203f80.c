/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00203f80; name: FUN_00203f80
 */


/* WARNING: Removing unreachable block (ram,0x00204450) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00203f80(long param_1,float *param_2,long *param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  uint uVar7;
  undefined2 uVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  uint uVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined8 *puVar24;
  uint *puVar25;
  int *piVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined2 local_1c0 [4];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined2 local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  float local_180;
  undefined4 local_17c;
  undefined1 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160 [2];
  float local_150;
  float fStack_14c;
  float local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined2 local_108 [4];
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  
  puVar1 = PTR_DAT_02711068;
  local_130 = 0xffffffff;
  local_140 = 0;
  local_138 = 0;
  local_12c = 0;
  local_118 = 0;
  local_110 = 0x7f7fffff;
  local_128 = 0;
  local_120 = 0;
  lVar20 = *param_3;
  lVar4 = param_3[1];
  uVar11 = FUN_003d9790(*(long *)(PTR_DAT_02711068 +
                                 ((ulong)*(byte *)(lVar4 + 0xb) & 0xf) * 8 + 0x30) + lVar4);
  uVar12 = FUN_003f8c70(lVar20 + 0x20);
  puVar25 = *(uint **)(param_1 + 0x28);
  uVar6 = *(ushort *)(param_1 + 0x20);
  uVar23 = (uint)uVar6;
  uVar21 = (uint)(short)puVar25[4];
  iVar10 = 1;
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x50) == 0 && -1 < (int)uVar21 ||
      *(char *)(param_1 + 0x4e) != '\0') {
    iVar10 = 2;
  }
  if (*(char *)(param_1 + 0x4e) == '\0') {
    puVar19 = *(undefined8 **)(param_1 + 0x30);
    puVar24 = *(undefined8 **)(param_1 + 0x40);
    if (*(char *)((long)puVar25 + 0x12) !=
        *(char *)(*(long *)(puVar1 + ((ulong)*(byte *)(lVar4 + 0xb) & 0xf) * 8 + 0x30) + lVar4 + 0xb
                 )) {
      (**(code **)(**(long **)(param_1 + 8) + 0x118))(&local_1b8);
      pbVar2 = (byte *)(*(long *)(puVar1 + (ulong)(*(uint *)(lVar4 + 8) >> 0x18 & 0xf) * 8 + 0x30) +
                        lVar4 + 0xe);
      if ((*(uint *)(lVar4 + 8) & 4) != 0) {
        pbVar2 = (byte *)(*(long *)(lVar4 + 0x10) + 2);
      }
      if ((((byte)local_1b8 & *pbVar2) >> 3 & 1) == 0) {
        return 1;
      }
    }
    if (puVar24 == (undefined8 *)0x0) {
      if ((((puVar25[1] != 0 || *puVar25 != 0) || puVar25[2] != 0) || puVar25[3] != 0) &&
         ((((*(uint *)(lVar20 + 0x24) & puVar25[1]) == 0 &&
           (*(uint *)(lVar20 + 0x20) & *puVar25) == 0) &&
          (*(uint *)(lVar20 + 0x28) & puVar25[2]) == 0) &&
          (*(uint *)(lVar20 + 0x2c) & puVar25[3]) == 0)) {
        return 1;
      }
    }
    if (((uVar21 >> 2 & 1) != 0) &&
       ((puVar19 != (undefined8 *)0x0 || (puVar24 != (undefined8 *)0x0)))) {
      uVar13 = (ulong)local_1b8 >> 0x10;
      local_1b8 = (undefined *)CONCAT62((int6)uVar13,uVar6);
      if (puVar19 == (undefined8 *)0x0) {
        if ((code *)puVar24[2] != (code *)0x0) {
          iVar10 = (*(code *)puVar24[2])
                             (*(undefined8 *)puVar25,*(undefined8 *)(puVar25 + 2),
                              *(undefined8 *)(lVar20 + 0x20),*(undefined8 *)(lVar20 + 0x28),*puVar24
                              ,*(undefined4 *)(puVar24 + 1),&local_1b8);
        }
      }
      else {
        iVar10 = (**(code **)*puVar19)(puVar19,puVar25,uVar12,uVar11,&local_1b8);
      }
      if (iVar10 == 0) {
        return 1;
      }
      uVar23 = (ushort)local_1b8 & 0x1b0 | uVar6 & 0xfe4f;
    }
  }
  FUN_001e1920(local_160,lVar20,lVar4);
  if ((*(byte *)(lVar20 + 8) & 1) == 0) {
    piVar26 = (int *)(lVar20 + 0x68);
  }
  else {
    piVar26 = (int *)(*(long *)(lVar20 + 0x10) + 0x38);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar15 = *(long *)(param_1 + 0x18);
  puVar24 = (undefined8 *)(*(long *)(lVar15 + 0x48) + (ulong)*(uint *)(lVar15 + 0x54) * 0x38);
  if (*(uint *)(lVar15 + 0x50) <= *(uint *)(lVar15 + 0x54)) {
    puVar24 = &local_140;
  }
  lVar15 = *(long *)(param_1 + 8);
  lVar16 = *(long *)(param_1 + 0x70);
  pfVar14 = (float *)0x0;
  if (*(char *)(param_1 + 0x68) != '\0') {
    pfVar14 = (float *)(param_1 + 0x50);
  }
  piVar3 = *(int **)(lVar4 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x20);
  fVar30 = 0.0;
  fVar31 = *(float *)(param_1 + 0x38);
  fVar32 = *pfVar14;
  fVar33 = pfVar14[1];
  fVar34 = pfVar14[2];
  fVar35 = pfVar14[3];
  uVar6 = *(ushort *)(param_1 + 0x48);
  fVar36 = pfVar14[4];
  fVar37 = pfVar14[5];
  FUN_002938e0(0,0x3f800000,&local_b8,piVar26,local_160,0,0);
  fVar27 = (fVar35 - fVar32) * 0.5 + (local_ac - local_b8) * 0.5;
  fVar29 = (fVar37 - fVar34) * 0.5 + (local_a4 - local_b0) * 0.5;
  fVar28 = (fVar36 - fVar33) * 0.5 + (fStack_a8 - fStack_b4) * 0.5;
  fStack_c4 = fVar28 * DAT_01d4be58;
  local_c8 = fVar27 * DAT_01d4be58;
  local_c0 = fVar29 * DAT_01d4be58;
  local_1b8 = (undefined *)CONCAT44(-(fVar28 * DAT_01d4be58),-(fVar27 * DAT_01d4be58));
  local_1b0 = CONCAT44(local_1b0._4_4_,-(fVar29 * DAT_01d4be58));
  local_100 = CONCAT44((fVar33 + fVar36) * 0.5 - (fStack_a8 + fStack_b4) * 0.5,
                       (fVar32 + fVar35) * 0.5 - (local_ac + local_b8) * 0.5);
  local_f8 = CONCAT44(local_f8._4_4_,(fVar34 + fVar37) * 0.5 - (local_a4 + local_b0) * 0.5);
  uVar13 = FUN_0023a140(fVar31,&local_1b8,&local_c8,&local_100,*(undefined8 *)(lVar4 + 8),&fStack_cc
                        ,&local_d0);
  if ((local_d0 < fStack_cc) && ((uVar13 & 1) == 0)) {
    return 1;
  }
  fVar27 = fStack_cc + -10.0;
  pfVar14 = *(float **)(lVar4 + 8);
  fVar28 = 0.0;
  fVar29 = 0.0;
  if (fStack_cc <= 10.0) {
    fVar27 = 0.0;
  }
  else {
    fVar28 = fVar27 * pfVar14[1];
    fVar30 = fVar27 * *pfVar14;
    fVar29 = fVar27 * pfVar14[2];
  }
  local_1b8 = (undefined *)local_160[0];
  local_1a0 = local_148 - fVar29;
  local_1a8 = CONCAT44(fStack_14c - fVar28,local_150 - fVar30);
  if (fVar31 <= local_d0) {
    local_d0 = fVar31;
  }
  if (8 < *piVar3 + 1U) {
    return 1;
  }
  lVar15 = *(long *)(lVar15 + 0x24d0);
  uVar7 = uVar6 | uVar23;
  uVar8 = (undefined2)uVar7;
  switch(*piVar3) {
  case 0:
    local_e8 = piVar3[1];
    local_e0 = 2;
    local_d8 = 0;
    local_f0 = *(undefined4 *)(lVar5 + 0x14);
    local_100 = *(undefined8 *)(lVar5 + 0x10);
    local_ec = *(undefined4 *)(lVar5 + 0x18);
    local_f8 = CONCAT44(*(undefined4 *)(lVar5 + 0x10),local_ec);
    puVar19 = (undefined8 *)(lVar15 + (long)*piVar26 * 8);
    if ((uVar7 & 0x100) != 0) {
      puVar19 = puVar19 + 7;
    }
                    /* try { // try from 0020449c to 002044b7 has its CatchHandler @ 00204b04 */
    local_108[0] = uVar8;
    local_dc = local_e8;
    uVar13 = (*(code *)*puVar19)(piVar26,&local_1b8,&local_e0,lVar5,&local_100,pfVar14,puVar24,
                                 local_108);
    break;
  case 2:
    puVar19 = (undefined8 *)(lVar15 + (long)*piVar26 * 8);
    if ((uVar7 & 0x100) != 0) {
      puVar19 = puVar19 + 7;
    }
    local_100 = CONCAT62(local_100._2_6_,uVar8);
    uVar13 = (*(code *)*puVar19)(piVar26,&local_1b8,piVar3,lVar5,lVar16 + 100,pfVar14,puVar24,
                                 &local_100);
    break;
  case 3:
    lVar15 = lVar15 + (long)*piVar26 * 8;
    puVar19 = (undefined8 *)(lVar15 + 0x70);
    if ((uVar7 & 0x100) != 0) {
      puVar19 = (undefined8 *)(lVar15 + 0xa8);
    }
    local_100 = CONCAT62(local_100._2_6_,uVar8);
    uVar13 = (*(code *)*puVar19)(piVar26,&local_1b8,piVar3,lVar5,lVar16 + 0xc,pfVar14,puVar24,
                                 &local_100);
    break;
  case 4:
    local_100 = CONCAT62(local_100._2_6_,uVar8);
    uVar13 = (**(code **)(lVar15 + (long)*piVar26 * 8 + 0xe0))
                       (local_d0 - fVar27,*(undefined4 *)(lVar4 + 0x28),piVar26,&local_1b8,piVar3,
                        lVar5,pfVar14,puVar24,&local_100);
    break;
  default:
    uVar11 = FUN_00400880();
    FUN_00400890(uVar11,4,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpSceneQueries.cpp"
                 ,0x132,
                 "PxScene::sweep(): first geometry object parameter must be sphere, capsule, box or convex geometry."
                );
    return 1;
  }
  if ((uVar13 & 1) == 0) {
    return 1;
  }
  *(float *)(puVar24 + 6) = fVar27 + *(float *)(puVar24 + 6);
  *(float *)(puVar24 + 3) = fVar30 + *(float *)(puVar24 + 3);
  *(float *)((long)puVar24 + 0x1c) = fVar28 + *(float *)((long)puVar24 + 0x1c);
  *(float *)(puVar24 + 4) = fVar29 + *(float *)(puVar24 + 4);
  puVar1 = PTR_DAT_02711218 + 0x10;
  *puVar24 = uVar11;
  puVar24[1] = uVar12;
  pfVar14 = (float *)(puVar24 + 6);
  if (((uVar23 >> 9 & 1) == 0) && (*pfVar14 == 0.0)) {
    pfVar17 = *(float **)(*(long *)(param_1 + 0x10) + 8);
    fVar28 = pfVar17[2];
    fVar27 = pfVar17[1];
    *(float *)((long)puVar24 + 0x24) = -*pfVar17;
    *(float *)(puVar24 + 5) = -fVar27;
    *(float *)((long)puVar24 + 0x2c) = -fVar28;
  }
  if (*(char *)(param_1 + 0x4e) == '\0') {
    plVar18 = *(long **)(param_1 + 0x30);
    if (plVar18 == (long *)0x0) {
      if (((uVar21 >> 3 & 1) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
        puVar19 = *(undefined8 **)(param_1 + 0x40);
        if ((code *)puVar19[3] != (code *)0x0) {
          iVar10 = (*(code *)puVar19[3])
                             (**(undefined8 **)(param_1 + 0x28),
                              (*(undefined8 **)(param_1 + 0x28))[1],*(undefined8 *)(lVar20 + 0x20),
                              *(undefined8 *)(lVar20 + 0x28),*puVar19,*(undefined4 *)(puVar19 + 1),
                              puVar24);
        }
      }
    }
    else if ((uVar21 >> 3 & 1) != 0) {
      iVar10 = (**(code **)(*plVar18 + 8))(plVar18,*(undefined8 *)(param_1 + 0x28),puVar24);
    }
  }
  if ((iVar10 != 0) && (*(char *)(param_1 + 0x4d) != '\0')) {
    lVar20 = *(long *)(param_1 + 0x18);
    *(undefined4 *)(lVar20 + 0x18) = *(undefined4 *)(puVar24 + 2);
    *(undefined8 *)(lVar20 + 0x10) = puVar24[1];
    *(undefined8 *)(lVar20 + 8) = *puVar24;
    *(undefined2 *)(lVar20 + 0x1c) = *(undefined2 *)((long)puVar24 + 0x14);
    *(undefined4 *)(lVar20 + 0x20) = *(undefined4 *)(puVar24 + 3);
    *(undefined4 *)(lVar20 + 0x24) = *(undefined4 *)((long)puVar24 + 0x1c);
    *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)(puVar24 + 4);
    *(undefined4 *)(lVar20 + 0x2c) = *(undefined4 *)((long)puVar24 + 0x24);
    *(undefined4 *)(lVar20 + 0x30) = *(undefined4 *)(puVar24 + 5);
    *(undefined4 *)(lVar20 + 0x34) = *(undefined4 *)((long)puVar24 + 0x2c);
    *(undefined4 *)(lVar20 + 0x38) = *(undefined4 *)(puVar24 + 6);
    *(undefined4 *)(lVar20 + 0x3c) = *(undefined4 *)((long)puVar24 + 0x34);
    *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x40) = 1;
    return 0;
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    iVar10 = 1;
  }
  if (iVar10 == 2) {
    fVar27 = *pfVar14;
    if (fVar27 <= *(float *)(param_1 + 0x38)) {
      *(float *)(param_1 + 0x38) = fVar27;
      *param_2 = fVar27;
      lVar20 = *(long *)(param_1 + 0x18);
      *(undefined4 *)(lVar20 + 0x18) = *(undefined4 *)(puVar24 + 2);
      *(undefined8 *)(lVar20 + 0x10) = puVar24[1];
      *(undefined8 *)(lVar20 + 8) = *puVar24;
      *(undefined2 *)(lVar20 + 0x1c) = *(undefined2 *)((long)puVar24 + 0x14);
      *(undefined4 *)(lVar20 + 0x20) = *(undefined4 *)(puVar24 + 3);
      *(undefined4 *)(lVar20 + 0x24) = *(undefined4 *)((long)puVar24 + 0x1c);
      *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)(puVar24 + 4);
      *(undefined4 *)(lVar20 + 0x2c) = *(undefined4 *)((long)puVar24 + 0x24);
      *(undefined4 *)(lVar20 + 0x30) = *(undefined4 *)(puVar24 + 5);
      *(undefined4 *)(lVar20 + 0x34) = *(undefined4 *)((long)puVar24 + 0x2c);
      *(float *)(lVar20 + 0x38) = *pfVar14;
      *(undefined4 *)(lVar20 + 0x3c) = *(undefined4 *)((long)puVar24 + 0x34);
      *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x40) = 1;
    }
  }
  else if (iVar10 == 1) {
    puVar19 = *(undefined8 **)(param_1 + 0x18);
    if (((*(uint *)(puVar19 + 10) != 0) && (*(char *)(param_1 + 0x4a) != '\0')) &&
       (*pfVar14 <= *(float *)(param_1 + 0x38))) {
      puVar25 = (uint *)((long)puVar19 + 0x54);
      uVar23 = *puVar25;
      if (uVar23 == *(uint *)(puVar19 + 10)) {
        puVar22 = *(undefined8 **)(param_1 + 0x28);
        local_f8 = puVar22[1];
        local_100 = *puVar22;
        local_1b0 = 0;
        local_1a8 = 0;
        local_f0 = CONCAT22(CONCAT11(local_f0._3_1_,*(undefined1 *)((long)puVar22 + 0x12)),
                            *(undefined2 *)(puVar22 + 2)) | 0x8000;
        local_1a0 = -NAN;
        local_198 = 0;
        local_190 = 0;
        local_180 = 3.4028235e+38;
        local_19c = 0;
        local_188 = 0;
        local_178 = 0;
        local_170 = 0;
        uStack_168 = 0;
        local_1b8 = puVar1;
        if ((*(char *)(param_1 + 0x4b) == '\0') && (*(int *)(puVar19 + 10) != 0)) {
          local_1c0[0] = *(undefined2 *)(param_1 + 0x20);
                    /* try { // try from 00204880 to 00204893 has its CatchHandler @ 00204b08 */
          uVar13 = FUN_00202f50(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                                &local_1b8,local_1c0,0,&local_100,*(undefined8 *)(param_1 + 0x30),
                                *(undefined8 *)(param_1 + 0x40));
          puVar19 = *(undefined8 **)(param_1 + 0x18);
          if ((uVar13 & 1) == 0) {
            puVar25 = (uint *)((long)puVar19 + 0x54);
          }
          else {
            *(float *)(puVar19 + 3) = local_1a0;
            puVar19[2] = local_1a8;
            puVar19[1] = local_1b0;
            *(undefined2 *)((long)puVar19 + 0x1c) = local_19c;
            *(undefined4 *)(puVar19 + 4) = (undefined4)local_198;
            *(undefined4 *)((long)puVar19 + 0x24) = local_198._4_4_;
            *(undefined4 *)(puVar19 + 5) = (undefined4)local_190;
            *(undefined4 *)((long)puVar19 + 0x2c) = local_190._4_4_;
            *(undefined4 *)(puVar19 + 6) = (undefined4)local_188;
            *(undefined4 *)((long)puVar19 + 0x34) = local_188._4_4_;
            *(float *)(puVar19 + 7) = local_180;
            *(undefined4 *)((long)puVar19 + 0x3c) = local_17c;
            puVar19 = *(undefined8 **)(param_1 + 0x18);
            *(undefined1 *)(puVar19 + 8) = 1;
            lVar20 = puVar19[9];
            puVar25 = (uint *)((long)puVar19 + 0x54);
            uVar23 = *puVar25;
            if (uVar23 != 0) {
              uVar13 = 0;
              do {
                while( true ) {
                  pfVar17 = (float *)(lVar20 + uVar13 * 0x38 + 0x30);
                  if (*pfVar17 <= local_180) break;
                  uVar23 = uVar23 - 1;
                  puVar22 = (undefined8 *)(lVar20 + (ulong)uVar23 * 0x38);
                  puVar19 = (undefined8 *)(lVar20 + uVar13 * 0x38);
                  *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(puVar22 + 2);
                  puVar19[1] = puVar22[1];
                  *puVar19 = *puVar22;
                  *(undefined2 *)((long)puVar19 + 0x14) = *(undefined2 *)((long)puVar22 + 0x14);
                  *(undefined4 *)(puVar19 + 3) = *(undefined4 *)(puVar22 + 3);
                  *(undefined4 *)((long)puVar19 + 0x1c) = *(undefined4 *)((long)puVar22 + 0x1c);
                  *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(puVar22 + 4);
                  *(undefined4 *)((long)puVar19 + 0x24) = *(undefined4 *)((long)puVar22 + 0x24);
                  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(puVar22 + 5);
                  *(undefined4 *)((long)puVar19 + 0x2c) = *(undefined4 *)((long)puVar22 + 0x2c);
                  *pfVar17 = *(float *)(puVar22 + 6);
                  *(undefined4 *)((long)puVar19 + 0x34) = *(undefined4 *)((long)puVar22 + 0x34);
                  if ((uint)uVar13 == uVar23) goto LAB_002049c0;
                }
                uVar21 = (uint)uVar13 + 1;
                uVar13 = (ulong)uVar21;
              } while (uVar21 != uVar23);
LAB_002049c0:
              puVar19 = *(undefined8 **)(param_1 + 0x18);
              puVar25 = (uint *)((long)puVar19 + 0x54);
            }
            *(uint *)((long)puVar19 + 0x54) = uVar23;
            *(float *)(param_1 + 0x38) = local_180;
            *param_2 = local_180;
          }
        }
        *(undefined1 *)(param_1 + 0x4b) = 1;
        uVar23 = *puVar25;
        if (uVar23 == *(uint *)(puVar19 + 10)) {
          bVar9 = (**(code **)*puVar19)(puVar19,puVar19[9]);
          *(byte *)(param_1 + 0x4a) = bVar9 & 1;
          if ((bVar9 & 1) == 0) {
            return 0;
          }
          puVar19 = *(undefined8 **)(param_1 + 0x18);
          uVar23 = 0;
          puVar25 = (uint *)((long)puVar19 + 0x54);
          *puVar25 = 0;
        }
      }
      lVar20 = puVar19[9];
      *puVar25 = uVar23 + 1;
      puVar19 = (undefined8 *)(lVar20 + (ulong)uVar23 * 0x38);
      *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(puVar24 + 2);
      puVar19[1] = puVar24[1];
      *puVar19 = *puVar24;
      *(undefined2 *)((long)puVar19 + 0x14) = *(undefined2 *)((long)puVar24 + 0x14);
      *(undefined4 *)(puVar19 + 3) = *(undefined4 *)(puVar24 + 3);
      *(undefined4 *)((long)puVar19 + 0x1c) = *(undefined4 *)((long)puVar24 + 0x1c);
      *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(puVar24 + 4);
      *(undefined4 *)((long)puVar19 + 0x24) = *(undefined4 *)((long)puVar24 + 0x24);
      *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(puVar24 + 5);
      *(undefined4 *)((long)puVar19 + 0x2c) = *(undefined4 *)((long)puVar24 + 0x2c);
      *(float *)(puVar19 + 6) = *pfVar14;
      *(undefined4 *)((long)puVar19 + 0x34) = *(undefined4 *)((long)puVar24 + 0x34);
    }
  }
  return 1;
}


