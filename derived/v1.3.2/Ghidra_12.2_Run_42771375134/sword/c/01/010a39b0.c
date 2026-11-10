/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a39b0; name: FUN_010a39b0
 */


void FUN_010a39b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  long lVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *__dest;
  long lVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  
  local_168 = param_2;
LAB_010a39f8:
  local_160 = local_168 + -0x14;
LAB_010a3a28:
  __dest = param_1;
  uVar16 = (long)local_168 - (long)__dest;
  if ((ulong)(((long)uVar16 >> 5) * -0x3333333333333333) < 6) {
                    /* WARNING: Could not recover jumptable at 0x010a421c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_02163898 + *(int *)(&DAT_02163898 + ((long)uVar16 >> 5) * 0x3333333333333334)))
              ();
    return;
  }
  if (0x45f < (long)uVar16) {
    puVar14 = __dest + (uVar16 / 0x140) * 0x14;
    if ((long)uVar16 < 0x27061) {
      iVar12 = FUN_010a4770(__dest,puVar14,local_160,param_3);
    }
    else {
      iVar12 = FUN_010a50b0(__dest,__dest + (uVar16 / 0x280) * 0x14,puVar14,
                            puVar14 + (uVar16 / 0x280) * 0x14,local_160,param_3);
    }
    uVar16 = FUN_010a4540(param_3,__dest,puVar14);
    if ((uVar16 & 1) == 0) {
      puVar21 = local_168 + -0x28;
LAB_010a3af4:
      puVar25 = puVar21;
      if (__dest != puVar25) goto code_r0x010a3afc;
      puVar14 = __dest + 0x14;
      uVar16 = FUN_010a4540(param_3,__dest,local_160);
      if ((uVar16 & 1) == 0) {
        if (puVar14 == local_160) {
          return;
        }
        puVar14 = __dest + 0x28;
        while (uVar16 = FUN_010a4540(param_3,__dest,puVar14 + -0x14), (uVar16 & 1) == 0) {
          puVar14 = puVar14 + 0x14;
          if (local_168 == puVar14) {
            return;
          }
        }
        uVar17 = puVar14[-0x14];
        uVar1 = puVar14[-0x13];
        uVar3 = puVar14[-0x12];
        uVar18 = puVar14[-0xf];
        uVar2 = puVar14[-0x11];
        uVar4 = puVar14[-0x10];
        local_110 = CONCAT22(local_110._2_2_,*(undefined2 *)(puVar14 + -0xe));
        local_108 = puVar14[-10];
        local_100 = puVar14[-9];
        uVar5 = *(undefined4 *)((long)puVar14 + -0x6c);
        uVar8 = *(undefined2 *)(puVar14 + -0xd);
        uVar6 = *(undefined4 *)((long)puVar14 + -100);
        uVar9 = *(undefined2 *)(puVar14 + -0xc);
        uVar24 = *(undefined8 *)((long)puVar14 + -0x5c);
        uVar7 = *(undefined4 *)((long)puVar14 + -0x54);
        local_f8 = puVar14[-8];
        local_f0 = puVar14[-7];
        local_e8 = puVar14[-6];
        uStack_e0 = puVar14[-5];
        local_c8 = puVar14[-2];
        local_d8 = puVar14[-4];
        local_d0 = puVar14[-3];
        local_c0 = CONCAT22(local_c0._2_2_,*(undefined2 *)(puVar14 + -1));
        memcpy(puVar14 + -0x14,local_160,0x9a);
        local_168[-0x13] = uVar1;
        local_168[-0x12] = uVar3;
        *local_160 = uVar17;
        local_168[-0x10] = uVar4;
        local_168[-0xf] = uVar18;
        *(undefined4 *)(local_168 + -0xe) = local_110;
        local_168[-0x11] = uVar2;
        *(undefined4 *)((long)local_168 + -0x6c) = uVar5;
        *(undefined2 *)(local_168 + -0xd) = uVar8;
        *(undefined4 *)((long)local_168 + -100) = uVar6;
        *(undefined2 *)(local_168 + -0xc) = uVar9;
        *(undefined8 *)((long)local_168 + -0x5c) = uVar24;
        *(undefined4 *)((long)local_168 + -0x54) = uVar7;
        local_168[-10] = local_108;
        local_168[-9] = local_100;
        local_168[-6] = local_e8;
        local_168[-5] = uStack_e0;
        local_168[-8] = local_f8;
        local_168[-7] = local_f0;
        *(undefined2 *)(local_168 + -1) = (undefined2)local_c0;
        local_168[-3] = local_d0;
        local_168[-2] = local_c8;
        local_168[-4] = local_d8;
      }
      if (puVar14 == local_160) {
        return;
      }
      while( true ) {
        param_1 = puVar14 + -0x14;
        do {
          puVar21 = param_1;
          param_1 = puVar21 + 0x14;
          uVar16 = FUN_010a4540(param_3,__dest,param_1);
        } while ((uVar16 & 1) == 0);
        puVar14 = puVar21 + 0x28;
        puVar25 = local_160 + 10;
        do {
          puVar22 = puVar25;
          uVar16 = FUN_010a4540(param_3,__dest,puVar22 + -0x1e);
          puVar25 = puVar22 + -0x14;
        } while ((uVar16 & 1) != 0);
        local_160 = puVar22 + -0x1e;
        if (local_160 <= param_1) break;
        uVar1 = *param_1;
        uVar3 = puVar21[0x15];
        uVar17 = puVar21[0x16];
        uVar2 = puVar21[0x17];
        uVar4 = puVar21[0x18];
        uVar18 = puVar21[0x19];
        local_110 = CONCAT22(local_110._2_2_,*(undefined2 *)(puVar21 + 0x1a));
        uVar5 = *(undefined4 *)((long)puVar21 + 0xd4);
        local_108 = puVar21[0x1e];
        local_100 = puVar21[0x1f];
        uVar8 = *(undefined2 *)(puVar21 + 0x1b);
        uVar6 = *(undefined4 *)((long)puVar21 + 0xdc);
        uVar9 = *(undefined2 *)(puVar21 + 0x1c);
        uVar24 = *(undefined8 *)((long)puVar21 + 0xe4);
        uVar7 = *(undefined4 *)((long)puVar21 + 0xec);
        local_f8 = puVar21[0x20];
        local_f0 = puVar21[0x21];
        local_e8 = puVar21[0x22];
        uStack_e0 = puVar21[0x23];
        local_c8 = puVar21[0x26];
        local_d8 = puVar21[0x24];
        local_d0 = puVar21[0x25];
        local_c0 = CONCAT22(local_c0._2_2_,*(undefined2 *)(puVar21 + 0x27));
        memcpy(param_1,local_160,0x9a);
        puVar22[-0x1c] = uVar17;
        *(undefined2 *)(puVar22 + -0x17) = uVar8;
        puVar22[-0x1e] = uVar1;
        puVar22[-0x1d] = uVar3;
        *(undefined4 *)((long)puVar22 + -0xb4) = uVar6;
        puVar22[-0x1a] = uVar4;
        puVar22[-0x19] = uVar18;
        puVar22[-0x1b] = uVar2;
        *(undefined2 *)(puVar22 + -0x16) = uVar9;
        *(undefined8 *)((long)puVar22 + -0xac) = uVar24;
        *(undefined4 *)((long)puVar22 + -0xa4) = uVar7;
        *(undefined4 *)(puVar22 + -0x18) = local_110;
        *(undefined4 *)((long)puVar22 + -0xbc) = uVar5;
        puVar22[-0x14] = local_108;
        puVar22[-0x13] = local_100;
        puVar22[-0x10] = local_e8;
        puVar22[-0xf] = uStack_e0;
        puVar22[-0x12] = local_f8;
        puVar22[-0x11] = local_f0;
        *(undefined2 *)(puVar22 + -0xb) = (undefined2)local_c0;
        puVar22[-0xd] = local_d0;
        puVar22[-0xc] = local_c8;
        puVar22[-0xe] = local_d8;
      }
      uVar15 = 4;
      goto LAB_010a41c8;
    }
    puVar21 = __dest + 0x14;
    puVar25 = local_160;
    if (local_160 <= puVar21) goto LAB_010a3ae4;
    goto LAB_010a3d4c;
  }
  FUN_010a4770(__dest,__dest + 0x14,__dest + 0x28,param_3);
  if (__dest + 0x3c == local_168) {
    return;
  }
  lVar23 = 0;
  puVar14 = __dest + 0x3c;
  puVar21 = __dest + 0x28;
LAB_010a4368:
  puVar25 = puVar14;
  uVar16 = FUN_010a4540(param_3,puVar25,puVar21);
  if ((uVar16 & 1) != 0) {
    local_108 = *puVar25;
    local_100 = puVar25[1];
    local_f8 = puVar25[2];
    local_f0 = puVar25[3];
    local_e8 = puVar25[4];
    uStack_e0 = puVar25[5];
    local_d8 = CONCAT62(local_d8._2_6_,*(undefined2 *)(puVar25 + 6));
    local_d8 = CONCAT44(*(undefined4 *)((long)puVar25 + 0x34),(undefined4)local_d8);
    local_d0 = CONCAT62(local_d0._2_6_,*(undefined2 *)(puVar25 + 7));
    local_d0 = CONCAT44(*(undefined4 *)((long)puVar25 + 0x3c),(undefined4)local_d0);
    local_c8 = CONCAT62(local_c8._2_6_,*(undefined2 *)(puVar25 + 8));
    local_c8 = CONCAT44(*(undefined4 *)((long)puVar25 + 0x44),(undefined4)local_c8);
    local_c0 = *(undefined4 *)(puVar25 + 9);
    local_bc = *(undefined4 *)((long)puVar25 + 0x4c);
    local_b8 = puVar25[10];
    uStack_b0 = puVar25[0xb];
    local_a8 = puVar25[0xc];
    uStack_a0 = puVar25[0xd];
    local_98 = puVar25[0xe];
    uStack_90 = puVar25[0xf];
    uStack_78 = puVar25[0x12];
    local_88 = puVar25[0x10];
    local_80 = puVar25[0x11];
    local_70 = *(undefined2 *)(puVar25 + 0x13);
    lVar10 = lVar23;
    do {
      lVar20 = lVar10;
      memcpy((void *)((long)__dest + lVar20 + 0x1e0),(void *)((long)__dest + lVar20 + 0x140),0x9a);
      if (lVar20 == -0x140) {
        puVar14 = __dest;
        goto LAB_010a4460;
      }
      uVar16 = FUN_010a4540(param_3,&local_108,(long)__dest + lVar20 + 0xa0);
      lVar10 = lVar20 + -0xa0;
    } while ((uVar16 & 1) != 0);
    puVar14 = (undefined8 *)((long)__dest + lVar20 + 0x140);
LAB_010a4460:
    memcpy(puVar14,&local_108,0x9a);
  }
  lVar23 = lVar23 + 0xa0;
  puVar14 = puVar25 + 0x14;
  puVar21 = puVar25;
  if (puVar25 + 0x14 == local_168) {
    return;
  }
  goto LAB_010a4368;
code_r0x010a3afc:
  uVar16 = FUN_010a4540(param_3,puVar25,puVar14);
  puVar21 = puVar25 + -0x14;
  if ((uVar16 & 1) != 0) goto code_r0x010a3b14;
  goto LAB_010a3af4;
code_r0x010a3b14:
  uVar1 = *__dest;
  uVar3 = __dest[1];
  uVar17 = __dest[2];
  uVar2 = __dest[3];
  uVar4 = __dest[4];
  uVar18 = __dest[5];
  local_110 = CONCAT22(local_110._2_2_,*(undefined2 *)(__dest + 6));
  uVar5 = *(undefined4 *)((long)__dest + 0x34);
  local_108 = __dest[10];
  local_100 = __dest[0xb];
  uVar6 = *(undefined4 *)((long)__dest + 0x4c);
  uVar8 = *(undefined2 *)(__dest + 7);
  uVar7 = *(undefined4 *)((long)__dest + 0x3c);
  uVar9 = *(undefined2 *)(__dest + 8);
  uVar24 = *(undefined8 *)((long)__dest + 0x44);
  local_f8 = __dest[0xc];
  local_f0 = __dest[0xd];
  local_e8 = __dest[0xe];
  uStack_e0 = __dest[0xf];
  local_c8 = __dest[0x12];
  local_d8 = __dest[0x10];
  local_d0 = __dest[0x11];
  local_c0 = CONCAT22(local_c0._2_2_,*(undefined2 *)(__dest + 0x13));
  memcpy(__dest,puVar25,0x9a);
  puVar25[2] = uVar17;
  *(undefined2 *)(puVar25 + 7) = uVar8;
  *puVar25 = uVar1;
  puVar25[1] = uVar3;
  puVar25[4] = uVar4;
  puVar25[5] = uVar18;
  puVar25[3] = uVar2;
  *(undefined4 *)((long)puVar25 + 0x3c) = uVar7;
  *(undefined2 *)(puVar25 + 8) = uVar9;
  *(undefined8 *)((long)puVar25 + 0x44) = uVar24;
  *(undefined4 *)((long)puVar25 + 0x4c) = uVar6;
  *(undefined4 *)(puVar25 + 6) = local_110;
  *(undefined4 *)((long)puVar25 + 0x34) = uVar5;
  iVar12 = iVar12 + 1;
  puVar25[10] = local_108;
  puVar25[0xb] = local_100;
  puVar25[0xe] = local_e8;
  puVar25[0xf] = uStack_e0;
  puVar25[0xc] = local_f8;
  puVar25[0xd] = local_f0;
  *(undefined2 *)(puVar25 + 0x13) = (undefined2)local_c0;
  puVar25[0x11] = local_d0;
  puVar25[0x12] = local_c8;
  puVar25[0x10] = local_d8;
  puVar21 = __dest + 0x14;
  if (puVar21 < puVar25) {
LAB_010a3d4c:
    while( true ) {
      puVar22 = puVar21 + -0x14;
      do {
        puVar26 = puVar22;
        puVar22 = puVar26 + 0x14;
        uVar16 = FUN_010a4540(param_3,puVar22,puVar14);
      } while ((uVar16 & 1) != 0);
      puVar21 = puVar26 + 0x28;
      puVar25 = puVar25 + 10;
      do {
        puVar19 = puVar25;
        uVar16 = FUN_010a4540(param_3,puVar19 + -0x1e,puVar14);
        puVar25 = puVar19 + -0x14;
      } while ((uVar16 & 1) == 0);
      puVar25 = puVar19 + -0x1e;
      if (puVar25 < puVar22) break;
      uVar1 = *puVar22;
      uVar3 = puVar26[0x15];
      uVar17 = puVar26[0x16];
      uVar2 = puVar26[0x17];
      uVar4 = puVar26[0x18];
      uVar18 = puVar26[0x19];
      local_110 = CONCAT22(local_110._2_2_,*(undefined2 *)(puVar26 + 0x1a));
      uVar5 = *(undefined4 *)((long)puVar26 + 0xd4);
      local_108 = puVar26[0x1e];
      local_100 = puVar26[0x1f];
      uVar8 = *(undefined2 *)(puVar26 + 0x1c);
      uVar24 = *(undefined8 *)((long)puVar26 + 0xe4);
      uVar6 = *(undefined4 *)((long)puVar26 + 0xec);
      uVar9 = *(undefined2 *)(puVar26 + 0x1b);
      uVar7 = *(undefined4 *)((long)puVar26 + 0xdc);
      local_f8 = puVar26[0x20];
      local_f0 = puVar26[0x21];
      local_e8 = puVar26[0x22];
      uStack_e0 = puVar26[0x23];
      local_c8 = puVar26[0x26];
      local_d8 = puVar26[0x24];
      local_d0 = puVar26[0x25];
      local_c0 = CONCAT22(local_c0._2_2_,*(undefined2 *)(puVar26 + 0x27));
      memcpy(puVar22,puVar25,0x9a);
      puVar19[-0x1c] = uVar17;
      *(undefined2 *)(puVar19 + -0x17) = uVar9;
      puVar19[-0x1e] = uVar1;
      puVar19[-0x1d] = uVar3;
      *(undefined2 *)(puVar19 + -0x16) = uVar8;
      *(undefined8 *)((long)puVar19 + -0xac) = uVar24;
      puVar19[-0x1a] = uVar4;
      puVar19[-0x19] = uVar18;
      puVar19[-0x1b] = uVar2;
      *(undefined4 *)((long)puVar19 + -0xb4) = uVar7;
      iVar12 = iVar12 + 1;
      *(undefined4 *)((long)puVar19 + -0xa4) = uVar6;
      *(undefined4 *)(puVar19 + -0x18) = local_110;
      *(undefined4 *)((long)puVar19 + -0xbc) = uVar5;
      puVar26 = puVar25;
      if (puVar14 != puVar22) {
        puVar26 = puVar14;
      }
      puVar19[-0x14] = local_108;
      puVar19[-0x13] = local_100;
      puVar19[-0x10] = local_e8;
      puVar19[-0xf] = uStack_e0;
      puVar19[-0x12] = local_f8;
      puVar19[-0x11] = local_f0;
      *(undefined2 *)(puVar19 + -0xb) = (undefined2)local_c0;
      puVar19[-0xd] = local_d0;
      puVar19[-0xc] = local_c8;
      puVar19[-0xe] = local_d8;
      puVar14 = puVar26;
    }
    if (puVar22 == puVar14) goto LAB_010a3eb4;
  }
  else {
LAB_010a3ae4:
    puVar22 = __dest + 0x14;
    if (puVar22 == puVar14) goto LAB_010a3eb4;
  }
  uVar16 = FUN_010a4540(param_3,puVar14,puVar22);
  if ((uVar16 & 1) != 0) {
    uVar1 = *puVar22;
    uVar3 = puVar22[1];
    uVar17 = puVar22[2];
    uVar2 = puVar22[3];
    uVar4 = puVar22[4];
    uVar18 = puVar22[5];
    local_110 = CONCAT22(local_110._2_2_,*(undefined2 *)(puVar22 + 6));
    uVar5 = *(undefined4 *)((long)puVar22 + 0x34);
    local_108 = puVar22[10];
    local_100 = puVar22[0xb];
    uVar8 = *(undefined2 *)(puVar22 + 7);
    uVar6 = *(undefined4 *)((long)puVar22 + 0x3c);
    uVar9 = *(undefined2 *)(puVar22 + 8);
    uVar24 = *(undefined8 *)((long)puVar22 + 0x44);
    uVar7 = *(undefined4 *)((long)puVar22 + 0x4c);
    local_f8 = puVar22[0xc];
    local_f0 = puVar22[0xd];
    local_e8 = puVar22[0xe];
    uStack_e0 = puVar22[0xf];
    local_c8 = puVar22[0x12];
    local_d8 = puVar22[0x10];
    local_d0 = puVar22[0x11];
    local_c0 = CONCAT22(local_c0._2_2_,*(undefined2 *)(puVar22 + 0x13));
    memcpy(puVar22,puVar14,0x9a);
    puVar14[1] = uVar3;
    puVar14[2] = uVar17;
    *puVar14 = uVar1;
    *(undefined2 *)(puVar14 + 7) = uVar8;
    *(undefined4 *)((long)puVar14 + 0x3c) = uVar6;
    puVar14[4] = uVar4;
    puVar14[5] = uVar18;
    puVar14[3] = uVar2;
    *(undefined2 *)(puVar14 + 8) = uVar9;
    *(undefined8 *)((long)puVar14 + 0x44) = uVar24;
    *(undefined4 *)((long)puVar14 + 0x4c) = uVar7;
    *(undefined4 *)(puVar14 + 6) = local_110;
    *(undefined4 *)((long)puVar14 + 0x34) = uVar5;
    iVar12 = iVar12 + 1;
    puVar14[10] = local_108;
    puVar14[0xb] = local_100;
    puVar14[0xe] = local_e8;
    puVar14[0xf] = uStack_e0;
    puVar14[0xc] = local_f8;
    puVar14[0xd] = local_f0;
    *(undefined2 *)(puVar14 + 0x13) = (undefined2)local_c0;
    puVar14[0x11] = local_d0;
    puVar14[0x12] = local_c8;
    puVar14[0x10] = local_d8;
  }
LAB_010a3eb4:
  if (iVar12 == 0) {
    uVar16 = FUN_010a5580(__dest,puVar22,param_3);
    uVar13 = FUN_010a5580(puVar22 + 0x14,local_168,param_3);
    if ((uVar13 & 1) != 0) goto LAB_010a41e0;
    param_1 = puVar22 + 0x14;
    if ((uVar16 & 1) != 0) goto LAB_010a3a28;
  }
  if (((long)local_168 - (long)puVar22 >> 5) * -0x3333333333333333 <=
      ((long)puVar22 - (long)__dest >> 5) * -0x3333333333333333) {
    FUN_010a39b0(puVar22 + 0x14,local_168,param_3);
    param_1 = __dest;
    local_168 = puVar22;
    goto LAB_010a39f8;
  }
  FUN_010a39b0(__dest,puVar22,param_3);
  param_1 = puVar22 + 0x14;
  goto LAB_010a3a28;
LAB_010a41e0:
  bVar11 = (uVar16 & 1) == 0;
  if (bVar11) {
    local_168 = puVar22;
  }
  uVar15 = 1;
  if (bVar11) {
    uVar15 = 2;
  }
  param_1 = __dest;
  if (4 < uVar15) {
    return;
  }
LAB_010a41c8:
  if ((1 << (ulong)uVar15 & 0x15U) == 0) {
    return;
  }
  goto LAB_010a39f8;
}


